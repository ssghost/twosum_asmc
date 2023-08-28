__attribute__((naked)) int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    __asm__(".intel_syntax noprefix;\
            twoSum:\
            push    rbp;\
            mov     rbp, rsp;\
            sub     rsp, 48;\
            mov     QWORD PTR [rbp-24], rdi;\
            mov     DWORD PTR [rbp-28], esi;\
            mov     DWORD PTR [rbp-32], edx;\
            mov     QWORD PTR [rbp-40], rcx;\
            mov     edi, 8;\
            call    malloc;\
            mov     QWORD PTR [rbp-16], rax;\
            mov     rax, QWORD PTR [rbp-40];\
            mov     DWORD PTR [rax], 2;\
            mov     DWORD PTR [rbp-4], 0;\
            jmp     .L2;\
            .L6:\
            mov     eax, DWORD PTR [rbp-4];\
            add     eax, 1;\
            mov     DWORD PTR [rbp-8], eax;\
            jmp     .L3;\
            .L5:\
            mov     eax, DWORD PTR [rbp-4];\
            cdqe;\
            lea     rdx, [0+rax*4];\
            mov     rax, QWORD PTR [rbp-24];\
            add     rax, rdx;\
            mov     edx, DWORD PTR [rax];\
            mov     eax, DWORD PTR [rbp-8];\
            cdqe;\
            lea     rcx, [0+rax*4];\
            mov     rax, QWORD PTR [rbp-24];\
            add     rax, rcx;\
            mov     eax, DWORD PTR [rax];\
            add     eax, edx;\
            cmp     DWORD PTR [rbp-32], eax;\
            jne     .L4;\
            mov     rax, QWORD PTR [rbp-16];\
            mov     edx, DWORD PTR [rbp-4];\
            mov     DWORD PTR [rax], edx;\
            mov     rax, QWORD PTR [rbp-16];\
            lea     rdx, [rax+4];\
            mov     eax, DWORD PTR [rbp-8];\
            mov     DWORD PTR [rdx], eax;\
            .L4:\
            add     DWORD PTR [rbp-8], 1;\
            .L3:\
            mov     eax, DWORD PTR [rbp-8];\
            cmp     eax, DWORD PTR [rbp-28];\
            jl      .L5;\
            add     DWORD PTR [rbp-4], 1;\
            .L2:\
            mov     eax, DWORD PTR [rbp-4];\
            cmp     eax, DWORD PTR [rbp-28];\
            jl      .L6;\
            mov     rax, QWORD PTR [rbp-16];\
            leave;\
            ret;\
            .att_syntax;")

}
