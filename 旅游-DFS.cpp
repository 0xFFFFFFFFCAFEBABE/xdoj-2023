#include <iostream>#include <algorithm>#include <vector>int graph[101][101] = {0};int n, m;std::vector<int> already;bool solved = false;bool ended = false;std::vector<int> path;void dfs(int depth) {    if (std::find(path.begin(), path.end(), depth) == path.end()) {        path.push_back(depth);    }    if (depth == n || solved) {        solved = true;        return;    }    already.push_back(depth);    for (int i = 1; i <= n; ++i) {        if (graph[depth][i] == 1 && std::find(already.begin(), already.end(), i) == already.end() && !solved) {            dfs(i);        }    }    already.pop_back();}int main() {    scanf("%d %d", &n, &m);    for (int i = 0; i < m; ++i) {        int from, to;        scanf("%d %d", &from, &to);        graph[from][to] = 1;        graph[to][from] = 1;    }    dfs(1);    if (solved) {        printf("YES\n");    } else {        printf("NO\n");    }    for (int i = 0; i < path.size(); ++i) {        printf("%d ", path[i]);    }    return 0;}