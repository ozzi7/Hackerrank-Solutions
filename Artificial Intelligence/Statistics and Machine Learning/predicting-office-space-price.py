import numpy as np
from sklearn.linear_model import LinearRegression
from sklearn.preprocessing import PolynomialFeatures
from sklearn.pipeline import Pipeline

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

poly = PolynomialFeatures(degree=4)
X_ = poly.fit_transform(Anp[0:N,0:F])
X_test_ = poly.fit_transform(Bnp[0:T,0:F])
lg = LinearRegression()
lg.fit(X_, Anp[0:N,F])
for i in lg.predict(X_test_):
    print(i)