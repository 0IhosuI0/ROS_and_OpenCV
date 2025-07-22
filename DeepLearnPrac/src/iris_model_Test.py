from tensorflow import keras
import iris_data_reader as data_reader
from keras.models import load_model

d = data_reader.DataReader()

model = load_model('iris_model.h5')

X_test = d.test_X
sample = X_test[0:3]
pre = model.predict(sample)

print(sample)
