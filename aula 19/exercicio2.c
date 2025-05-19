float* media (int *a, int*b){
    float* calcMedia (int *a, int*b){
        float *media = malloc(sizeof(float));
        *media = (*a + *b)/2.0f;
    }
    return media;
}