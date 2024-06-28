int findCenter(int** edges, int edgesSize, int* edgesColSize) {
    int test_one = edges[0][0];
    if(edges[1][0] == test_one || edges[1][1] == test_one) { return test_one; }
    else { return edges[0][1]; }
}
