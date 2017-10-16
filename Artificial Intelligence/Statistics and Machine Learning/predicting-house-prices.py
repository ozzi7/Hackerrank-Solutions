import numpy as np
from sklearn import linear_model

[F,N] = map(int,input().split())
A = []
for _ in range(N):
    A.append(list(map(float,input().split())))
T = int(input())
B = []
for _ in range(T):
    B.append(list(map(float,input().split())))
Anp = np.array(A)
Bnp = np.array(B)
linear_model = linear_model.LinearRegression(fit_intercept=True, n_jobs=1, normalize=False)
linear_model.fit(Anp[0:N,0:F],Anp[0:N,F])
y_fit = linear_model.predict(Bnp[0:T,0:F])
for i in range(T):
    print(y_fit[i])
    