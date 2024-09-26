#pragma once

//���������� �����
void push_row_back(int**& arr, int& m, const int n);
void push_row_front(int**& arr, int& m, const int n);
//�������� �����
void pop_row_back(int**& arr, int& m, const int n);
void pop_row_front(int**& arr, int& m, const int n);

//���������� ��������
void push_col_back(int** arr, const int m, int& n);


//���������� ������ �� �������
void insert_row(int**& arr, int& m, const int n, int index);

//�������� ������ �� �������
void erase_row(int**& arr, int& m, int index);
