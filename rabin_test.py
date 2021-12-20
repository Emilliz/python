
def rabin_karp(text, pattern):
    pattern_heshe = heshe(pattern)
    pattern_length = len(pattern)
    text_length = len(text)
    part_hesh = heshe(text[0:pattern_length])
    prime_multiplyer = 113 ** pattern_length
    result = []
    for i in range(text_length - (pattern_length - (pattern_length != 0))):
        if pattern_heshe == part_hesh:
            result += [i]
        if i != text_length - pattern_length:
            part_hesh = (113 * part_hesh - prime_multiplyer * heshe(text[i]) + heshe(text[i + pattern_length])) % 2 ** 32
    return result
import unittest





def heshe(el_stroka: str):
    hasha = 0
    m = len(el_stroka)
    for i in range(len(el_stroka)):
        hasha += (113 ** (m - i)) * ord(el_stroka[i])
    return hasha% 2**32

class RabinKarpTest(unittest.TestCase):
    """Тесты для метода Рабина-Карпа"""

    def setUp(self):
        """Инициализация"""
        self.text1 = 'axaxaxax'
        self.pattern1 = 'xax'
        self.text2 = 'bababab'
        self.pattern2 = 'bab'

    def test_return_type(self):
        """Проверка того, что функция возвращает список"""
        self.assertIsInstance(
            rabin_karp(self.text1, "x"), list,
            msg="Функция должна возвращать список"
        )

    def test_returns_empty(self):
        """Проверка того, что функция, когда следует, возвращает пустой список"""
        self.assertEqual(
            [], rabin_karp(self.text1, "z"),
            msg="Функция должна возвращать пустой список, если нет вхождений"
        )
        self.assertEqual(
            [], rabin_karp("", self.pattern1),
            msg="Функция должна возвращать пустой список, если текст пустой"
        )
        self.assertEqual(
            [], rabin_karp("", ""),
            msg="Функция должна возвращать пустой список, если текст пустой, даже если образец пустой"
        )

    def test_finds(self):
        """Проверка того, что функция ищет все вхождения непустых образцов"""
        self.assertEqual(
            [1, 3, 5], rabin_karp(self.text1, self.pattern1),
            msg="Функция должна искать все вхождения"
        )
        self.assertEqual(
            [0, 2, 4], rabin_karp(self.text2, self.pattern2),
            msg="Функция должна искать все вхождения"
        )

    def test_finds_all_empties(self):
        """Проверка того, что функция ищет все вхождения пустого образца"""
        self.assertEqual(
            list(range(len(self.text1))), rabin_karp(self.text1, ""),
            msg="Пустая строка должна находиться везде"
        )

if __name__ == '__main__':
    unittest.main()
