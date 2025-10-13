import numpy as np
import matplotlib.pyplot as plt
from sklearn.cluster import KMeans

# ===== Dataset (students with two features) =====
students = ["A", "B", "C", "D", "E", "F"]
X = np.array([
    [85, 83],  # A
    [90, 88],  # B
    [25, 30],  # C
    [28, 27],  # D
    [60, 65],  # E
    [58, 62]   # F
])

# ===== Apply KMeans clustering =====
kmeans = KMeans(n_clusters=2, init="k-means++", n_init=10, random_state=42)
labels = kmeans.fit_predict(X)

# Show cluster assignment
print("Cluster assignments:")
for student, label in zip(students, labels):
    print(f"Student {student} -> Cluster {label}")

print("\nCluster centers:")
print(kmeans.cluster_centers_)

# ===== WCSS for Elbow method =====
wcss = []
K = range(1, 7)
for k in K:
    kmeans_temp = KMeans(n_clusters=k, init="k-means++", n_init=10, random_state=42)
    kmeans_temp.fit(X)
    wcss.append(kmeans_temp.inertia_)

# ===== Plot elbow curve =====
plt.plot(K, wcss, marker='o')
plt.xlabel("Number of clusters (k)")
plt.ylabel("WCSS (Within Cluster Sum of Squares)")
plt.title("Elbow Method for Optimal k")
plt.show()

# ===== Plot final clustering =====
plt.scatter(X[:, 0], X[:, 1], c=labels, cmap="viridis", s=100)
plt.scatter(kmeans.cluster_centers_[:, 0], kmeans.cluster_centers_[:, 1],
            c='red', marker='X', s=200, label="Centroids")
for i, student in enumerate(students):
    plt.text(X[i, 0] + 1, X[i, 1], student, fontsize=10)
plt.xlabel("Maths Score")
plt.ylabel("Reading Skill")
plt.title("K-Means Clustering of Students")
plt.legend()
plt.show()