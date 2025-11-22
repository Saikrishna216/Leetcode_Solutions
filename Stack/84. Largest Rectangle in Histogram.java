class Solution {
    public int largestRectangleArea(int[] heights) {
        Deque<Integer> d = new ArrayDeque<>();
        int max_area = 0;
        int n = heights.length;

        for (int i = 0; i <= n; i++) {
            int curr_length = (i == n) ? 0 : heights[i];

            while (!d.isEmpty() && curr_length < heights[d.peek()]) {
                int height = heights[d.pop()];
                int width = d.isEmpty() ? i : i - d.peek() - 1;
                max_area = Math.max(max_area, height * width);
            }
            d.push(i);
        }

        return max_area;    
    }
}
