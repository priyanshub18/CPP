#include <bits/stdc++.h>
#include <vector>

using namespace std;
class Solution
{
public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc,
                                  int color)
    {
        queue<pair<int, int>> q;
        int n = image.size();
        int m = image[0].size();
        int val = image[sr][sc];
        q.push({sr, sc});
        image[sr][sc] = color;

        int dx[4] = {0, 0, -1, 1};
        int dy[4] = {1, -1, 0, 0};
        int count = 0;
        while (not q.empty())
        {
            auto top = q.front();
            int i = top.first;
            int j = top.second;
            q.pop();
            if (count++ > 10)
                break;
            for (int k = 0; k < 4; k++)
            {
                int x = i + dx[k];
                int y = j + dy[k];
                if (x >= 0 and x < n and y >= 0 and y < m and image[x][y] == val and image[x][y] != color)
                {
                    image[x][y] = color;
                    q.push({x, y});
                }
            }
        }

        return image;
    }
};
int main()
{
    return 0;
}