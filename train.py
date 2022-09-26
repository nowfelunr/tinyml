from sklearn.datasets import make_blobs
from everywhereml.sklearn.ensemble import RandomForestClassifier

X, y = make_blobs(n_samples=100, centers=3, n_features=2, random_state=0)

print(X, y)
# clf = RandomForestClassifier(n_estimators=10)

# clf.fit(X, y)

# '''
#   Now we convert the classifier to C++ with a single line of code
#   - instance_name will create an instance of the classifier in the produced code
#     (you will use this name later)
# '''
# output =  clf.to_arduino(instance_name='blobClassifier')


# with open("BlobClassifier.h", "w") as f:
#     f.write(output)