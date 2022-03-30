import os
from pathlib import Path

import pandas
import matplotlib.pyplot as plt
from scipy import stats

script_directory = os.path.dirname(os.path.abspath(__file__))
source_file = os.path.join(script_directory , "source_file.csv")

data = pandas.read_csv(str(source_file))
print(data.head())
print(data["value"])
data["value"].plot(kind="bar")

data_frame = pandas.DataFrame(data={
    "value": data["value"]
})

print(stats.kstest(data_frame["value"],
                   "norm",
                   (data_frame["value"].mean(), data_frame["value"].std()),
                   N=len(data_frame["value"])
                   ))
print('Математик, от которого мы получили данные, был хорошим - значение P велико. Ура!')
