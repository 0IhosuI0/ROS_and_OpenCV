from tensorflow import keras
import hw_data_reader

EPOCH = 300


if __name__ == '__main__':
  dr = hw_data_reader.DataReader()

  model = keras.Sequential([
    keras.layers.Dense(3),
    keras.layers.Dense(128, activation="relu"),
    keras.layers.Dense(3, activation='softmax')
  ])

  model.compile(optimizer="adam", metrics = ["accuracy"],
                loss = "sparse_categorical_crossentropy")

  print("+++++++++++++++++ TRAINING START +++++++++++++++++")
  early_stop = keras.callbacks.EarlyStopping(monitor = 'val_loss', patience = 30)
  history = model.fit(dr.train_X, dr.train_Y, epochs = EPOCH,
                       validation_data = (dr.test_X, dr.test_Y),
                       callbacks=[early_stop])

  hw_data_reader.draw_graph(history)


