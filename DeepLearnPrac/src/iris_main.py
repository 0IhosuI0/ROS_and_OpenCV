from tensorflow import keras
import iris_data_reader as data_reader
from keras.models import load_model

# 몇 에포크 만큼 학습을 시킬 것인지 결정합니다.
EPOCHS = 20  # 예제 기본값은 20입니다.

# 데이터를 읽어옵니다.
dr = data_reader.DataReader()

# 인공신경망을 제작합니다.
model = keras.Sequential([
    keras.layers.Dense(4),
    keras.layers.Dense(128, activation="relu"),
    keras.layers.Dropout(rate=0.5),
    keras.layers.Dense(3, activation='softmax')
])

# 인공신경망을 컴파일합니다.
model.compile(optimizer="adam", metrics=["accuracy"],
              loss="sparse_categorical_crossentropy")

# 인공신경망을 학습시킵니다.
print("\n\n++++++++++++++++++++++ TRAINING START ++++++++++++++++++++++ ")
early_stop = keras.callbacks.EarlyStopping(monitor='val_loss', patience=10)
history = model.fit(dr.train_X, dr.train_Y, epochs=EPOCHS, batch_size=5,
                    validation_data=(dr.test_X, dr.test_Y),
                    callbacks=[early_stop])

model.save('iris_model.h5')
# 학습 결과를 그래프로 출력합니다.
data_reader.draw_graph(history)
