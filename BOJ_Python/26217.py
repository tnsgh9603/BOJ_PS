def sentiment_predict(new_sentence):
    scores = model.predict(np.array(new_sentence)) # 예측
    print(scores)
    for score in scores:
        if(score > 0) :
            # score가 양수면 이제 긍정 = 0.2
            # score가 음수면 이제 부정
            if(score > 0.5):
                print(f"{(float(score * 100)):.2f}% 확률로 긍정 리뷰입니다.\n")
            else:
                print(f"{float((1-score)) * 100:.2f}% 확률로 부정 리뷰입니다.\n")
        else :
            score = abs(score)
            if(score > 0.5):
                print(f"{(float(score * 100)):.2f}% 확률로 긍정 리뷰입니다.\n")
            else:
                print(f"{float((1-score)) * 100:.2f}% 확률로 부정 리뷰입니다.\n")