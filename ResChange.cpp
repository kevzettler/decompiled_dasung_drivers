
int64_t __gmon_start__ = 0;

void fun_401330();

void _init() {
    int64_t rax1;

    rax1 = __gmon_start__;
    if (rax1) {
        fun_401330();
    }
    return;
}

void fun_401330() {
    goto __gmon_start__;
}

int64_t __libc_start_main = 0x401186;

void fun_401180(int64_t rdi, int64_t rsi, void* rdx, int64_t rcx, int64_t r8, int64_t r9, void** a7, int64_t a8) {
    goto __libc_start_main;
}

int64_t fun_401370() {
    int64_t rax1;

    rax1 = 7;
    if (1 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

uint64_t g28;

void** stderr = reinterpret_cast<void**>(0);

void fun_4012b0(void** rdi, void** rsi, void** rdx, void** rcx);

void fun_401290(void** rdi, void** rsi, void* rdx);

void** fun_401110(void** rdi, void** rsi, ...);

void** fun_401436(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    signed char al7;
    uint64_t rax8;
    void** rax9;
    void** rax10;
    void** rax11;

    if (al7) {
        __asm__("movaps [rbp-0x80], xmm0");
        __asm__("movaps [rbp-0x70], xmm1");
        __asm__("movaps [rbp-0x60], xmm2");
        __asm__("movaps [rbp-0x50], xmm3");
        __asm__("movaps [rbp-0x40], xmm4");
        __asm__("movaps [rbp-0x30], xmm5");
        __asm__("movaps [rbp-0x20], xmm6");
        __asm__("movaps [rbp-0x10], xmm7");
    }
    rax8 = g28;
    rax9 = stderr;
    fun_4012b0("Paperlike: ", 1, 11, rax9);
    rax10 = stderr;
    fun_401290(rax10, rdi, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 0xd0);
    rax11 = reinterpret_cast<void**>(rax8 ^ g28);
    if (rax11) {
        rax11 = fun_401110(rax10, rdi, rax10, rdi);
    }
    return rax11;
}

int64_t fwrite = 0x4012b6;

void fun_4012b0(void** rdi, void** rsi, void** rdx, void** rcx) {
    goto fwrite;
}

int64_t vfprintf = 0x401296;

void fun_401290(void** rdi, void** rsi, void* rdx) {
    goto vfprintf;
}

int64_t __stack_chk_fail = 0x401116;

void** fun_401110(void** rdi, void** rsi, ...) {
    goto __stack_chk_fail;
}

struct s0 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t f12;
};

struct s1 {
    void** f0;
    signed char[2] pad4;
    void** f4;
};

void** fun_4015bc(void** rdi, struct s1* rsi, void* rdx);

int32_t fun_4012a0();

int32_t fun_401310();

void** fun_40175b(void** rdi, void** rsi, int32_t edx, struct s0* rcx) {
    void* rbp5;
    void** v6;
    int32_t v7;
    struct s0* v8;
    uint64_t rax9;
    uint64_t v10;
    int32_t v11;
    struct s1* rsi12;
    void** v13;
    void** rdi14;
    int32_t eax15;
    int32_t v16;
    void** v17;
    void** rdi18;
    int32_t eax19;
    void** v20;
    void** rdi21;
    int32_t eax22;
    int32_t v23;
    void** v24;
    int32_t eax25;
    void** rax26;

    rbp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    v6 = rdi;
    v7 = edx;
    v8 = rcx;
    rax9 = g28;
    v10 = rax9;
    v11 = 0;
    while (v11 < v7) {
        __asm__("pxor xmm0, xmm0");
        __asm__("cvtsi2sd xmm0, eax");
        *reinterpret_cast<void***>(rdi) = *reinterpret_cast<void***>(rsi);
        __asm__("pxor xmm0, xmm0");
        __asm__("cvtsi2sd xmm0, eax");
        *reinterpret_cast<void***>(rdi + 2) = *reinterpret_cast<void***>(rsi + 2);
        rsi12 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rbp5) - 48);
        fun_4015bc(v6, rsi12, reinterpret_cast<int64_t>(rbp5) - 40);
        *reinterpret_cast<void***>(v6) = v13;
        rdi14 = v6 + 2;
        eax15 = fun_4012a0();
        __asm__("cvttsd2si eax, xmm0");
        v16 = eax15;
        *reinterpret_cast<void***>(rdi14) = v17;
        rdi18 = rdi14 + 2;
        eax19 = fun_4012a0();
        __asm__("cvttsd2si eax, xmm0");
        (&v16)[1] = eax19;
        *reinterpret_cast<void***>(rdi18) = v20;
        rdi21 = rdi18 + 2;
        eax22 = fun_401310();
        __asm__("cvttsd2si eax, xmm0");
        v23 = eax22;
        *reinterpret_cast<void***>(rdi21) = v24;
        rdi = rdi21 + 2;
        rsi = reinterpret_cast<void**>(&rsi12->f4 + 2 + 2 + 2);
        eax25 = fun_401310();
        __asm__("cvttsd2si eax, xmm0");
        (&v23)[1] = eax25;
        if (v11) {
            if (v16 < v8->f0) {
                v8->f0 = v16;
            }
            if ((&v16)[1] < v8->f4) {
                v8->f4 = (&v16)[1];
            }
            if (v23 > v8->f8) {
                v8->f8 = v23;
            }
            if ((&v23)[1] > v8->f12) {
                v8->f12 = (&v23)[1];
            }
        } else {
            v8->f0 = v16;
            v8->f8 = v23;
        }
        ++v11;
    }
    rax26 = reinterpret_cast<void**>(v10 ^ g28);
    if (rax26) {
        rax26 = fun_401110(rdi, rsi);
    }
    return rax26;
}

struct s2 {
    void** f0;
    signed char[2] pad4;
    void** f4;
};

struct s3 {
    void** f0;
    signed char[2] pad4;
    void** f4;
};

struct s4 {
    void** f0;
    signed char[2] pad4;
    void** f4;
};

struct s5 {
    void** f0;
    signed char[2] pad4;
    void** f4;
};

struct s6 {
    void** f0;
    signed char[2] pad4;
    void** f4;
};

struct s7 {
    void** f0;
    signed char[2] pad4;
    void** f4;
};

struct s8 {
    void** f0;
    signed char[2] pad4;
    void** f4;
};

struct s9 {
    void** f0;
    signed char[2] pad4;
    void** f4;
};

struct s10 {
    void** f0;
    signed char[2] pad4;
    void** f4;
};

void** fun_4015bc(void** rdi, struct s1* rsi, void* rdx) {
    uint64_t rax4;
    uint64_t v5;
    void** rdi6;
    struct s2* rsi7;
    void** rdi8;
    struct s3* rsi9;
    void** rdi10;
    struct s4* rsi11;
    void** rdi12;
    struct s5* rsi13;
    void** rdi14;
    struct s6* rsi15;
    void** rdi16;
    void** rsi17;
    int32_t v18;
    void** rdi19;
    void** rsi20;
    int32_t v21;
    struct s7* rsi22;
    void** rdi23;
    struct s8* rsi24;
    void** rdi25;
    struct s9* rsi26;
    void** rdi27;
    struct s10* rsi28;
    void** rdi29;
    void** rsi30;
    void** rdi31;
    void** rsi32;
    uint32_t v33;
    int1_t below_or_equal34;
    void** rdi35;
    void** rsi36;
    void** rdi37;
    void** rsi38;
    void** rdi39;
    void** rsi40;
    void** rdi41;
    void** rdi42;
    void** rsi43;
    void** rax44;
    void** rdi45;
    void** rsi46;
    void** rdi47;
    void** rsi48;
    void** rsi49;
    void** rdi50;

    rax4 = g28;
    v5 = rax4;
    *reinterpret_cast<void***>(rdi) = rsi->f0;
    rdi6 = rdi + 2;
    rsi7 = reinterpret_cast<struct s2*>(&rsi->f4);
    *reinterpret_cast<void***>(rdi6) = rsi7->f0;
    rdi8 = rdi6 + 2;
    rsi9 = reinterpret_cast<struct s3*>(&rsi7->f4);
    *reinterpret_cast<void***>(rdi8) = rsi9->f0;
    rdi10 = rdi8 + 2;
    rsi11 = reinterpret_cast<struct s4*>(&rsi9->f4);
    *reinterpret_cast<void***>(rdi10) = rsi11->f0;
    rdi12 = rdi10 + 2;
    rsi13 = reinterpret_cast<struct s5*>(&rsi11->f4);
    *reinterpret_cast<void***>(rdi12) = rsi13->f0;
    rdi14 = rdi12 + 2;
    rsi15 = reinterpret_cast<struct s6*>(&rsi13->f4);
    *reinterpret_cast<void***>(rdi14) = rsi15->f0;
    rdi16 = rdi14 + 2;
    rsi17 = reinterpret_cast<void**>(&rsi15->f4);
    v18 = 0;
    while (v18 <= 2) {
        __asm__("pxor xmm0, xmm0");
        *reinterpret_cast<void***>(rdi16) = *reinterpret_cast<void***>(rsi17);
        rdi19 = rdi16 + 2;
        rsi20 = rsi17 + 2;
        v21 = 0;
        while (v21 <= 2) {
            rsi22 = reinterpret_cast<struct s7*>(static_cast<int64_t>(v21));
            __asm__("pxor xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, eax");
            *reinterpret_cast<void***>(rdi19) = rsi22->f0;
            rdi23 = rdi19 + 2;
            rsi24 = reinterpret_cast<struct s8*>(&rsi22->f4);
            __asm__("divsd xmm0, xmm1");
            *reinterpret_cast<void***>(rdi23) = rsi24->f0;
            rdi25 = rdi23 + 2;
            rsi26 = reinterpret_cast<struct s9*>(&rsi24->f4);
            __asm__("mulsd xmm0, xmm1");
            *reinterpret_cast<void***>(rdi25) = rsi26->f0;
            rdi27 = rdi25 + 2;
            rsi28 = reinterpret_cast<struct s10*>(&rsi26->f4);
            __asm__("addsd xmm0, xmm1");
            *reinterpret_cast<void***>(rdi27) = rsi28->f0;
            rdi19 = rdi27 + 2;
            rsi20 = reinterpret_cast<void**>(&rsi28->f4);
            ++v21;
        }
        *reinterpret_cast<void***>(rdi19) = *reinterpret_cast<void***>(rsi20);
        rdi29 = rdi19 + 2;
        rsi30 = rsi20 + 2;
        *reinterpret_cast<void***>(rdi29) = *reinterpret_cast<void***>(rsi30);
        rdi16 = rdi29 + 2;
        rsi17 = rsi30 + 2;
        ++v18;
    }
    *reinterpret_cast<void***>(rdi16) = *reinterpret_cast<void***>(rsi17);
    rdi31 = rdi16 + 2;
    rsi32 = rsi17 + 2;
    __asm__("pxor xmm1, xmm1");
    __asm__("ucomisd xmm0, xmm1");
    if (__intrinsic() || v18 != 2) {
        v33 = 0;
        while (below_or_equal34 = v33 <= 1, reinterpret_cast<int32_t>(v33) <= reinterpret_cast<int32_t>(1)) {
            *reinterpret_cast<void***>(rdi31) = *reinterpret_cast<void***>(rsi32);
            rdi35 = rdi31 + 2;
            rsi36 = rsi32 + 2;
            *reinterpret_cast<void***>(rdi35) = *reinterpret_cast<void***>(rsi36);
            rdi37 = rdi35 + 2;
            rsi38 = rsi36 + 2;
            __asm__("divsd xmm0, xmm1");
            *reinterpret_cast<void***>(rdi37) = *reinterpret_cast<void***>(rsi38);
            rdi39 = rdi37 + 2;
            rsi40 = rsi38 + 2;
            *reinterpret_cast<void***>(rdi39) = *reinterpret_cast<void***>(rsi40);
            rdi41 = rdi39 + 2;
            rsi32 = rsi40 + 2;
            __asm__("ucomisd xmm0, [rip+0x4766]");
            if (!below_or_equal34) 
                goto addr_401715_65;
            *reinterpret_cast<void***>(rdi41) = *reinterpret_cast<void***>(rsi32);
            rdi42 = rdi41 + 2;
            rsi43 = rsi32 + 2;
            *reinterpret_cast<void***>(rdi42) = *reinterpret_cast<void***>(rsi43);
            rdi31 = rdi42 + 2;
            rsi32 = rsi43 + 2;
            __asm__("ucomisd xmm0, xmm1");
            if (!below_or_equal34) 
                goto addr_401715_65;
            ++v33;
        }
    } else {
        *reinterpret_cast<int32_t*>(&rax44) = 0;
        *reinterpret_cast<int32_t*>(&rax44 + 2) = 0;
        goto addr_401745_75;
    }
    *reinterpret_cast<void***>(rdi31) = *reinterpret_cast<void***>(rsi32);
    rdi45 = rdi31 + 2;
    rsi46 = rsi32 + 2;
    *reinterpret_cast<void***>(rdi45) = *reinterpret_cast<void***>(rsi46);
    rdi47 = rdi45 + 2;
    rsi48 = rsi46 + 2;
    *reinterpret_cast<void***>(rdi47) = *reinterpret_cast<void***>(rsi48);
    rsi49 = rsi48 + 2;
    *reinterpret_cast<void***>(rdi47 + 2) = *reinterpret_cast<void***>(rsi49);
    rsi32 = rsi49 + 2;
    *reinterpret_cast<int32_t*>(&rax44) = 1;
    *reinterpret_cast<int32_t*>(&rax44 + 2) = 0;
    addr_401745_75:
    rdi50 = reinterpret_cast<void**>(v5 ^ g28);
    if (rdi50) {
        rax44 = fun_401110(rdi50, rsi32);
    }
    return rax44;
    addr_401715_65:
    *reinterpret_cast<int32_t*>(&rax44) = 0;
    *reinterpret_cast<int32_t*>(&rax44 + 2) = 0;
    goto addr_401745_75;
}

int64_t floor = 0x4012a6;

int32_t fun_4012a0() {
    goto floor;
}

int64_t ceil = 0x401316;

int32_t fun_401310() {
    goto ceil;
}

int64_t fun_4019a9(void** rdi, void** rsi) {
    int64_t rax3;
    void** rdi4;
    void** rsi5;
    void*** rax6;
    int64_t rax7;
    void** rdi8;
    void** rsi9;
    void*** rax10;
    int64_t rax11;
    void** rdi12;
    void** rsi13;
    void** rdi14;
    void** rsi15;
    int64_t rax16;
    int1_t zf17;
    void** rdi18;
    void** rsi19;

    *reinterpret_cast<void***>(&rax3) = *reinterpret_cast<void***>(rdi + 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    if (rax3 < 0) {
        __asm__("pxor xmm0, xmm0");
        __asm__("cvtsi2sd xmm0, rdx");
        __asm__("addsd xmm0, xmm0");
    } else {
        __asm__("pxor xmm0, xmm0");
        __asm__("cvtsi2sd xmm0, rax");
    }
    *reinterpret_cast<void***>(rdi) = *reinterpret_cast<void***>(rsi);
    rdi4 = rdi + 2;
    rsi5 = rsi + 2;
    rax6 = *reinterpret_cast<void****>(rdi + 36);
    *reinterpret_cast<uint32_t*>(&rax7) = *reinterpret_cast<uint32_t*>(&rax6) & 32;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    if (rax7) {
        *reinterpret_cast<void***>(rdi4) = *reinterpret_cast<void***>(rsi5);
        rdi8 = rdi4 + 2;
        rsi9 = rsi5 + 2;
        __asm__("addsd xmm0, xmm0");
        *reinterpret_cast<void***>(rdi8) = *reinterpret_cast<void***>(rsi9);
        rdi4 = rdi8 + 2;
        rsi5 = rsi9 + 2;
    }
    rax10 = *reinterpret_cast<void****>(rdi + 36);
    *reinterpret_cast<uint32_t*>(&rax11) = *reinterpret_cast<uint32_t*>(&rax10) & 16;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
    if (rax11) {
        *reinterpret_cast<void***>(rdi4) = *reinterpret_cast<void***>(rsi5);
        rdi12 = rdi4 + 2;
        rsi13 = rsi5 + 2;
        *reinterpret_cast<void***>(rdi12) = *reinterpret_cast<void***>(rsi13);
        rdi14 = rdi12 + 2;
        rsi15 = rsi13 + 2;
        __asm__("divsd xmm0, xmm1");
        *reinterpret_cast<void***>(rdi14) = *reinterpret_cast<void***>(rsi15);
        rdi4 = rdi14 + 2;
        rsi5 = rsi15 + 2;
    }
    *reinterpret_cast<void***>(&rax16) = *reinterpret_cast<void***>(rdi + 16);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0;
    zf17 = *reinterpret_cast<void***>(&rax16) == 0;
    if (zf17 || !__intrinsic() && zf17) {
        __asm__("pxor xmm0, xmm0");
        *reinterpret_cast<void***>(rdi4) = *reinterpret_cast<void***>(rsi5);
        rdi18 = rdi4 + 2;
        rsi19 = rsi5 + 2;
    } else {
        if (reinterpret_cast<int16_t>(*reinterpret_cast<void***>(rdi + 8)) < reinterpret_cast<int16_t>(0)) {
            __asm__("pxor xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, rdx");
            __asm__("addsd xmm0, xmm0");
        } else {
            __asm__("pxor xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, rax");
        }
        *reinterpret_cast<void***>(&rax16) = *reinterpret_cast<void***>(rdi + 16);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0;
        if (rax16 < 0) {
            *reinterpret_cast<void***>(&rax16) = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(&rax16)) & 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0;
            __asm__("pxor xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, rdx");
            __asm__("addsd xmm1, xmm1");
        } else {
            __asm__("pxor xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, rax");
        }
        __asm__("mulsd xmm1, [rbp-0x8]");
        __asm__("divsd xmm0, xmm1");
        *reinterpret_cast<void***>(rdi4) = *reinterpret_cast<void***>(rsi5);
        rdi18 = rdi4 + 2;
        rsi19 = rsi5 + 2;
    }
    *reinterpret_cast<void***>(rdi18) = *reinterpret_cast<void***>(rsi19);
    return rax16;
}

void fun_401ad4(int32_t* rdi, void** rsi) {
    *rdi = 0;
    return;
}

int32_t fun_401220(void** rdi, void** rsi, void* rdx);

void fun_401ae9(void** rdi, void** rsi);

void fun_401b41(void** rdi, void** esi);

void fun_401b15(void** rdi, void** rsi);

void** fun_401bfe(void** rdi, void** rsi, uint32_t edx) {
    void* rbp4;
    void** v5;
    void** v6;
    uint64_t rax7;
    int32_t eax8;
    int32_t eax9;
    void** v10;
    void** rdx11;
    int32_t v12;
    void** rax13;

    rbp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    v5 = rdi;
    v6 = rsi;
    rax7 = g28;
    if (!(edx & 2) || (rsi = reinterpret_cast<void**>("0x%x"), *reinterpret_cast<int32_t*>(&rsi + 2) = 0, rdi = v6, eax8 = fun_401220(rdi, "0x%x", reinterpret_cast<int64_t>(rbp4) - 16), eax8 != 1)) {
        if (!(edx & 4) || (rsi = reinterpret_cast<void**>("%d"), *reinterpret_cast<int32_t*>(&rsi + 2) = 0, rdi = v6, eax9 = fun_401220(rdi, "%d", reinterpret_cast<int64_t>(rbp4) - 12), eax9 != 1)) {
            if (edx & 1) {
                rsi = v6;
                rdi = v5;
                fun_401ae9(rdi, rsi);
            }
        } else {
            rsi = v10;
            *reinterpret_cast<int32_t*>(&rsi + 2) = 0;
            rdi = v5;
            fun_401b41(rdi, rsi);
        }
    } else {
        *reinterpret_cast<int32_t*>(&rdx11) = v12;
        *reinterpret_cast<int32_t*>(&rdx11 + 2) = 0;
        rsi = rdx11;
        rdi = v5;
        fun_401b15(rdi, rsi);
    }
    rax13 = reinterpret_cast<void**>(rax7 ^ g28);
    if (rax13) {
        rax13 = fun_401110(rdi, rsi, rdi, rsi);
    }
    return rax13;
}

int64_t __isoc99_sscanf = 0x401226;

int32_t fun_401220(void** rdi, void** rsi, void* rdx) {
    goto __isoc99_sscanf;
}

void fun_401b15(void** rdi, void** rsi) {
    *reinterpret_cast<void***>(rdi) = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi)) | 2);
    *reinterpret_cast<void***>(rdi + 8) = rsi;
    return;
}

void fun_401b41(void** rdi, void** esi) {
    *reinterpret_cast<void***>(rdi) = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi)) | 4);
    *reinterpret_cast<void***>(rdi + 12) = esi;
    return;
}

void fun_401ae9(void** rdi, void** rsi) {
    *reinterpret_cast<void***>(rdi) = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi)) | 1);
    *reinterpret_cast<void***>(rdi + 4) = rsi;
    return;
}

struct s11 {
    void** f0;
    signed char[2] pad4;
    void** f4;
    signed char[2] pad8;
    void** f8;
    signed char[6] pad16;
    void** f16;
    signed char[6] pad24;
    void** f24;
    signed char[6] pad32;
    void** f32;
    signed char[6] pad40;
    int64_t f40;
    void** f48;
    signed char[6] pad56;
    void*** f56;
};

void fun_401150(struct s11* rdi, void** rsi, void** rdx);

void fun_401cd1(struct s11* rdi, void** rsi) {
    struct s11* v3;
    int32_t v4;

    v3 = rdi;
    fun_401150(v3, 0, 36);
    v4 = 0;
    while (v4 <= 2) {
        *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(v3) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(v4)) << 4)) = reinterpret_cast<void**>(0x10000);
        ++v4;
    }
    v3->f40 = 0x405bf4;
    v3->f48 = reinterpret_cast<void**>(0);
    v3->f56 = reinterpret_cast<void***>(0);
    return;
}

int64_t fun_4012e0(void** rdi);

void*** fun_401210(int64_t rdi);

void fun_4011f0(void*** rdi, void** rsi, int64_t rdx);

void fun_401d43(struct s11* rdi, void** rsi, void** rdx, void** rcx, void** r8d) {
    int64_t rax6;
    void*** rax7;
    void*** rdi8;

    rdi->f0 = *reinterpret_cast<void***>(rsi);
    rdi->f8 = *reinterpret_cast<void***>(rsi + 4);
    rdi->f16 = *reinterpret_cast<void***>(rsi + 8);
    rdi->f24 = *reinterpret_cast<void***>(rsi + 12);
    rdi->f32 = *reinterpret_cast<void***>(rsi + 16);
    rax6 = fun_4012e0(rdx);
    rdi->f40 = rax6;
    rdi->f48 = r8d;
    rax7 = fun_401210(static_cast<int64_t>(reinterpret_cast<int32_t>(r8d)) << 2);
    rdi->f56 = rax7;
    rdi8 = rdi->f56;
    fun_4011f0(rdi8, rcx, reinterpret_cast<int32_t>(r8d) * 4);
    return;
}

int64_t strcmp = 0x4011b6;

int32_t fun_4011b0(void** rdi, void** rsi) {
    goto strcmp;
}

void** fun_401f43(void** rdi, void** rsi);

void** fun_402056(void** rdi, void** rsi, void** rdx) {
    void* rbp4;
    uint64_t rax5;
    void** rdi6;
    void** rax7;
    uint64_t rcx8;

    rbp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax5 = g28;
    fun_401ad4(reinterpret_cast<int64_t>(rbp4) - 48, rsi);
    fun_401ae9(reinterpret_cast<int64_t>(rbp4) + 0xffffffffffffffd0, rdi);
    rdi6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp4) + 0xffffffffffffffd0);
    rax7 = fun_401f43(rdi6, rdi);
    rcx8 = rax5 ^ g28;
    if (rcx8) {
        rax7 = fun_401110(rdi6, rdi);
    }
    return rax7;
}

void** g607200 = reinterpret_cast<void**>(0);

void** g6071f8 = reinterpret_cast<void**>(0);

void** fun_4020b2(void** rdi, void** rsi) {
    void** v3;
    void** v4;
    void** v5;
    void** eax6;
    void** rdx7;
    int64_t rax8;
    uint32_t v9;
    void** rsi10;
    void** rdi11;
    int32_t eax12;

    v3 = rdi;
    v4 = reinterpret_cast<void**>(0);
    v5 = reinterpret_cast<void**>(0);
    while (eax6 = g607200, reinterpret_cast<int16_t>(v5) < reinterpret_cast<int16_t>(eax6)) {
        rdx7 = g6071f8;
        rax8 = static_cast<int64_t>(reinterpret_cast<int32_t>(v5)) << 5;
        v4 = reinterpret_cast<void**>(rax8 * 8 - rax8 + reinterpret_cast<uint16_t>(rdx7));
        v9 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v4)) & reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v3));
        if (!(v9 & 2)) 
            goto addr_402127_4;
        if (*reinterpret_cast<void***>(v3 + 8) == *reinterpret_cast<void***>(v4 + 8)) 
            goto addr_402189_6;
        addr_402127_4:
        if (!(v9 & 1)) 
            goto addr_402150_7;
        rsi10 = *reinterpret_cast<void***>(v4 + 4);
        rdi11 = *reinterpret_cast<void***>(v3 + 4);
        eax12 = fun_4011b0(rdi11, rsi10);
        if (!eax12) 
            goto addr_40218c_9;
        addr_402150_7:
        if (!(v9 & 4)) 
            goto addr_40216c_10;
        if (*reinterpret_cast<void***>(v3 + 12) == *reinterpret_cast<void***>(v4 + 12)) 
            goto addr_40218f_12;
        addr_40216c_10:
        v4 = reinterpret_cast<void**>(0);
        v5 = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(v5) + 1);
    }
    addr_402190_14:
    return v4;
    addr_402189_6:
    goto addr_402190_14;
    addr_40218c_9:
    goto addr_402190_14;
    addr_40218f_12:
    goto addr_402190_14;
}

void** g607208 = reinterpret_cast<void**>(0);

void** fun_4021f2(void** rdi, void** rsi) {
    void** v3;
    void** v4;
    void** v5;
    void** rax6;
    void** rax7;
    int64_t rdx8;
    void** v9;
    void** rsi10;
    void** rdi11;
    int32_t eax12;
    int1_t zf13;
    void** rdi14;
    void** rsi15;
    void** rdi16;
    void** rsi17;

    v3 = rdi;
    *reinterpret_cast<void***>(rdi) = *reinterpret_cast<void***>(rsi);
    v4 = reinterpret_cast<void**>(0);
    __asm__("pxor xmm0, xmm0");
    *reinterpret_cast<void***>(rdi + 2) = *reinterpret_cast<void***>(rsi + 2);
    v5 = reinterpret_cast<void**>(0);
    while (rax6 = g607208, reinterpret_cast<int16_t>(*reinterpret_cast<void***>(rax6 + 24)) > reinterpret_cast<int16_t>(v5)) {
        rax7 = g607208;
        rdx8 = reinterpret_cast<int32_t>(v5);
        v9 = reinterpret_cast<void**>(((rdx8 << 2) + rdx8 << 4) + reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax7 + 28)));
        if (!(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v3)) & 2)) 
            goto addr_402274_10;
        if (*reinterpret_cast<void***>(v3 + 8) == *reinterpret_cast<void***>(v9)) 
            goto addr_402267_12;
        addr_402274_10:
        if (!(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v3)) & 1) || (rsi10 = *reinterpret_cast<void***>(v9 + 28), rdi11 = *reinterpret_cast<void***>(v3 + 4), eax12 = fun_4011b0(rdi11, rsi10), zf13 = eax12 == 0, !zf13)) {
            addr_40230c_13:
            v5 = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(v5) + 1);
            continue;
        } else {
            __asm__("pxor xmm0, xmm0");
            __asm__("ucomisd xmm0, [rbp-0x40]");
            if (__intrinsic() || !zf13) {
                fun_4019a9(v9, rsi10);
                __asm__("subsd xmm0, [rbp-0x40]");
                *reinterpret_cast<void***>(v9) = *reinterpret_cast<void***>(rsi10);
                rdi14 = v9 + 2;
                rsi15 = rsi10 + 2;
                __asm__("andpd xmm0, xmm1");
                *reinterpret_cast<void***>(rdi14) = *reinterpret_cast<void***>(rsi15);
                rdi16 = rdi14 + 2;
                rsi17 = rsi15 + 2;
            } else {
                __asm__("pxor xmm0, xmm0");
                *reinterpret_cast<void***>(rdi11) = *reinterpret_cast<void***>(rsi10);
                rdi16 = rdi11 + 2;
                rsi17 = rsi10 + 2;
            }
            if (v4) 
                goto addr_4022ee_26;
        }
        addr_4022fa_27:
        *reinterpret_cast<void***>(rdi16) = *reinterpret_cast<void***>(rsi17);
        *reinterpret_cast<void***>(rdi16 + 2) = *reinterpret_cast<void***>(rsi17 + 2);
        v4 = v9;
        goto addr_40230c_13;
        addr_4022ee_26:
        *reinterpret_cast<void***>(rdi16) = *reinterpret_cast<void***>(rsi17);
        rdi16 = rdi16 + 2;
        rsi17 = rsi17 + 2;
        __asm__("ucomisd xmm0, [rbp-0x10]");
        if (reinterpret_cast<uint16_t>(v4) <= reinterpret_cast<uint16_t>(0)) 
            goto addr_40230c_13; else 
            goto addr_4022fa_27;
    }
    addr_402323_37:
    return v4;
    addr_402267_12:
    v4 = v9;
    goto addr_402323_37;
}

void** fun_402329(void** rdi, void** rsi) {
    void* rbp3;
    uint64_t rax4;
    void** rdi5;
    void** rax6;
    uint64_t rcx7;

    rbp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax4 = g28;
    fun_401ad4(reinterpret_cast<int64_t>(rbp3) - 48, rsi);
    fun_401b15(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffffd0, rdi);
    __asm__("pxor xmm0, xmm0");
    rdi5 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffffd0);
    rax6 = fun_4021f2(rdi5, rdi);
    rcx7 = rax4 ^ g28;
    if (rcx7) {
        rax6 = fun_401110(rdi5, rdi);
    }
    return rax6;
}

void** fun_402389(void** rdi, void** rsi) {
    void** v3;
    void** v4;
    void** v5;
    void** rsi6;
    void*** v7;
    void** rdi8;
    void** rax9;
    void** rdi10;
    int32_t eax11;
    int1_t pf12;
    int1_t zf13;
    void** rdi14;
    void*** rax15;
    int64_t rax16;
    void** rdi17;
    void** rsi18;
    void** rdi19;
    void** rsi20;
    void** rdi21;
    void** rsi22;
    void** rdi23;
    void** rsi24;

    v3 = rsi;
    v4 = *reinterpret_cast<void***>(rdi + 28);
    v5 = reinterpret_cast<void**>(0);
    __asm__("pxor xmm0, xmm0");
    *reinterpret_cast<void***>(rdi) = *reinterpret_cast<void***>(rsi);
    rsi6 = rsi + 2;
    v7 = reinterpret_cast<void***>(0);
    while (reinterpret_cast<int32_t>(*reinterpret_cast<void****>(v4 + 40)) > reinterpret_cast<int32_t>(v7)) {
        rdi8 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(*reinterpret_cast<void****>(v4 + 44)) + (static_cast<int64_t>(reinterpret_cast<int32_t>(v7)) << 3));
        rax9 = fun_402329(rdi8, rsi6);
        if (rax9) {
            if (!(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v3)) & 2)) 
                goto addr_40241f_9;
            if (*reinterpret_cast<void***>(v3 + 8) == *reinterpret_cast<void***>(rax9)) 
                goto addr_402412_11;
            addr_40241f_9:
            if (!(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v3)) & 1)) 
                goto addr_402512_12;
            rsi6 = *reinterpret_cast<void***>(rax9 + 28);
            rdi10 = *reinterpret_cast<void***>(v3 + 4);
            eax11 = fun_4011b0(rdi10, rsi6);
            pf12 = __intrinsic();
            zf13 = eax11 == 0;
            if (zf13) 
                goto addr_402453_14;
        }
        addr_402512_12:
        v7 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(v7) + 1);
        continue;
        addr_402453_14:
        *reinterpret_cast<void***>(rdi10) = *reinterpret_cast<void***>(rsi6);
        rdi14 = rdi10 + 2;
        rsi6 = rsi6 + 2;
        __asm__("pxor xmm1, xmm1");
        __asm__("ucomisd xmm0, xmm1");
        if (pf12) 
            goto addr_402487_18;
        __asm__("pxor xmm1, xmm1");
        __asm__("ucomisd xmm0, xmm1");
        if (!zf13) 
            goto addr_402487_18;
        rax15 = *reinterpret_cast<void****>(rax9 + 36);
        *reinterpret_cast<uint32_t*>(&rax16) = *reinterpret_cast<uint32_t*>(&rax15) & 32;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0;
        pf12 = __intrinsic();
        zf13 = rax16 == 0;
        if (!zf13) 
            goto addr_402511_21;
        addr_402487_18:
        *reinterpret_cast<void***>(rdi14) = *reinterpret_cast<void***>(rsi6);
        rdi17 = rdi14 + 2;
        rsi18 = rsi6 + 2;
        __asm__("pxor xmm1, xmm1");
        __asm__("ucomisd xmm0, xmm1");
        if (pf12) 
            goto addr_4024a7_25;
        __asm__("pxor xmm1, xmm1");
        __asm__("ucomisd xmm0, xmm1");
        if (zf13) 
            goto addr_4024de_27;
        addr_4024a7_25:
        fun_4019a9(rax9, rsi18);
        __asm__("movapd xmm1, xmm0");
        *reinterpret_cast<void***>(rax9) = *reinterpret_cast<void***>(rsi18);
        rdi19 = rax9 + 2;
        rsi20 = rsi18 + 2;
        __asm__("subsd xmm1, xmm0");
        __asm__("movapd xmm0, xmm1");
        *reinterpret_cast<void***>(rdi19) = *reinterpret_cast<void***>(rsi20);
        rdi21 = rdi19 + 2;
        rsi22 = rsi20 + 2;
        __asm__("andpd xmm0, xmm1");
        *reinterpret_cast<void***>(rdi21) = *reinterpret_cast<void***>(rsi22);
        rdi23 = rdi21 + 2;
        rsi6 = rsi22 + 2;
        addr_4024e7_37:
        if (!v5) {
            addr_4024fa_38:
        } else {
            *reinterpret_cast<void***>(rdi23) = *reinterpret_cast<void***>(rsi6);
            rdi23 = rdi23 + 2;
            rsi6 = rsi6 + 2;
            __asm__("ucomisd xmm0, [rbp-0x18]");
            if (reinterpret_cast<uint16_t>(v5) <= reinterpret_cast<uint16_t>(0)) 
                goto addr_402512_12; else 
                goto addr_4024fa_38;
        }
        *reinterpret_cast<void***>(rdi23) = *reinterpret_cast<void***>(rsi6);
        rsi24 = rsi6 + 2;
        *reinterpret_cast<void***>(rdi23 + 2) = *reinterpret_cast<void***>(rsi24);
        rsi6 = rsi24 + 2;
        v5 = rax9;
        goto addr_402512_12;
        addr_4024de_27:
        __asm__("pxor xmm0, xmm0");
        *reinterpret_cast<void***>(rdi17) = *reinterpret_cast<void***>(rsi18);
        rdi23 = rdi17 + 2;
        rsi6 = rsi18 + 2;
        goto addr_4024e7_37;
        addr_402511_21:
        goto addr_402512_12;
    }
    addr_402526_51:
    return v5;
    addr_402412_11:
    v5 = rax9;
    goto addr_402526_51;
}

void** g6071d0 = reinterpret_cast<void**>(0);

void* g607190 = reinterpret_cast<void*>(0xffffffff);

void** fun_40252c(void** rdi) {
    void** v2;
    void** v3;
    uint32_t v4;
    void*** v5;
    void** rdi6;
    void** rsi7;
    void** rax8;
    void** rax9;
    void* edx10;
    uint32_t v11;
    void** rax12;
    void* edx13;
    void** rdx14;
    void* ecx15;
    int64_t rcx16;
    uint64_t rax17;

    v2 = *reinterpret_cast<void***>(rdi + 28);
    v3 = reinterpret_cast<void**>(0);
    v4 = 0;
    v5 = reinterpret_cast<void***>(0);
    while (reinterpret_cast<int32_t>(*reinterpret_cast<void****>(v2 + 40)) > reinterpret_cast<int32_t>(v5)) {
        rdi6 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(*reinterpret_cast<void****>(v2 + 44)) + (static_cast<int64_t>(reinterpret_cast<int32_t>(v5)) << 3));
        rax8 = fun_402329(rdi6, rsi7);
        if (reinterpret_cast<int32_t>(*reinterpret_cast<void****>(v2 + 42)) <= reinterpret_cast<int32_t>(v5)) {
            if (!*reinterpret_cast<void***>(v2 + 20)) {
                rax9 = g6071d0;
                edx10 = g607190;
                v11 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rax9 + 0x74)) + (static_cast<int64_t>(reinterpret_cast<int32_t>(edx10)) << 7) + 28) - reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax8 + 6));
            } else {
                rax12 = g6071d0;
                edx13 = g607190;
                rdx14 = g6071d0;
                ecx15 = g607190;
                __asm__("cdq ");
                *reinterpret_cast<uint32_t*>(&rcx16) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax8 + 6)) * 0x3e8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = 0;
                rax17 = reinterpret_cast<uint64_t>(rcx16) / reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v2 + 20));
                *reinterpret_cast<uint32_t*>(&rsi7) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rax12 + 0x74)) + (static_cast<int64_t>(reinterpret_cast<int32_t>(edx13)) << 7) + 28) * 0x3e8 / *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rdx14 + 0x74)) + (static_cast<int64_t>(reinterpret_cast<int32_t>(ecx15)) << 7) + 36) - *reinterpret_cast<uint32_t*>(&rax17);
                *reinterpret_cast<int32_t*>(&rsi7 + 2) = 0;
                v11 = *reinterpret_cast<uint32_t*>(&rsi7);
            }
        } else {
            v11 = 0;
        }
        if (reinterpret_cast<int32_t>(v11) < reinterpret_cast<int32_t>(0)) {
            v11 = -v11;
        }
        if (!v3 || reinterpret_cast<int32_t>(v11) < reinterpret_cast<int32_t>(v4)) {
            v3 = rax8;
            v4 = v11;
        }
        v5 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(v5) + 1);
    }
    return v3;
}

int32_t g60723c = 0;

int64_t g6071d8 = 0;

void** fun_4011e0(void** rdi, int64_t rsi);

uint32_t fun_402691(void** rdi, void** rsi) {
    int32_t eax3;
    uint32_t eax4;
    int64_t rdx5;
    void** rax6;
    void** rax7;

    eax3 = g60723c;
    if (!eax3) {
        eax4 = 0;
    } else {
        rdx5 = g6071d8;
        rax6 = g6071d0;
        rax7 = fun_4011e0(rax6, rdx5);
        eax4 = reinterpret_cast<uint1_t>(rax7 == *reinterpret_cast<void***>(rdi + 20));
    }
    return eax4;
}

int64_t XRRGetOutputPrimary = 0x4011e6;

void** fun_4011e0(void** rdi, int64_t rsi) {
    goto XRRGetOutputPrimary;
}

int64_t XRRGetCrtcGammaSize = 0x4010e6;

int32_t fun_4010e0(void** rdi, void** rsi) {
    goto XRRGetCrtcGammaSize;
}

int64_t log = 0x401166;

void fun_401160() {
    goto log;
}

int64_t exp = 0x4010c6;

void fun_4010c0() {
    goto exp;
}

void** fun_402196(void** rdi, void** rsi) {
    void* rbp3;
    uint64_t rax4;
    void** rdi5;
    void** rax6;
    uint64_t rcx7;

    rbp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax4 = g28;
    fun_401ad4(reinterpret_cast<int64_t>(rbp3) - 48, rsi);
    fun_401b15(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffffd0, rdi);
    rdi5 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffffd0);
    rax6 = fun_4020b2(rdi5, rdi);
    rcx7 = rax4 ^ g28;
    if (rcx7) {
        rax6 = fun_401110(rdi5, rdi);
    }
    return rax6;
}

struct s13 {
    int32_t f0;
    int32_t f4;
};

struct s12 {
    signed char[8] pad8;
    struct s13* f8;
    struct s13* f16;
    struct s13* f24;
};

struct s12* fun_4012c0(void** rdi, void** rsi);

int32_t fun_4026dd(struct s13* rdi, int32_t esi);

struct s14 {
    int32_t f0;
    int32_t f4;
};

struct s15 {
    int32_t f0;
    int32_t f4;
};

struct s16 {
    int32_t f0;
    int32_t f4;
};

struct s17 {
    int32_t f0;
    int32_t f4;
};

struct s18 {
    int32_t f0;
    int32_t f4;
};

struct s19 {
    int32_t f0;
    int32_t f4;
};

struct s20 {
    int32_t f0;
    int32_t f4;
};

struct s21 {
    int32_t f0;
    int32_t f4;
};

struct s22 {
    int32_t f0;
    int32_t f4;
};

struct s23 {
    int32_t f0;
    int32_t f4;
};

struct s24 {
    int32_t f0;
    int32_t f4;
};

struct s25 {
    int32_t f0;
    int32_t f4;
};

struct s26 {
    int32_t f0;
    int32_t f4;
};

struct s27 {
    int32_t f0;
    int32_t f4;
};

struct s28 {
    int32_t f0;
    int32_t f4;
};

struct s29 {
    int32_t f0;
    int32_t f4;
};

struct s30 {
    int32_t f0;
    int32_t f4;
};

struct s31 {
    int32_t f0;
    int32_t f4;
};

struct s32 {
    int32_t f0;
    int32_t f4;
};

struct s33 {
    int32_t f0;
    int32_t f4;
};

struct s34 {
    int32_t f0;
    int32_t f4;
};

struct s35 {
    int32_t f0;
    int32_t f4;
};

struct s36 {
    int32_t f0;
    int32_t f4;
};

struct s37 {
    int32_t f0;
    int32_t f4;
};

void** fun_401280(struct s12* rdi, int32_t* rsi);

void** fun_402722(void** rdi) {
    void** rax2;
    void** rdx3;
    void** rax4;
    int32_t eax5;
    void** rdx6;
    void** rax7;
    struct s12* rax8;
    struct s13* rdi9;
    int32_t eax10;
    struct s13* rdi11;
    int32_t eax12;
    struct s14* rsi13;
    struct s13* rdi14;
    int32_t eax15;
    struct s13* v16;
    int32_t v17;
    struct s15* rdi18;
    struct s16* rsi19;
    struct s17* rdi20;
    struct s18* rsi21;
    struct s19* rdi22;
    struct s20* rsi23;
    struct s21* rdi24;
    struct s22* rsi25;
    uint64_t rax26;
    struct s13* tmp64_27;
    struct s23* rdi28;
    struct s24* rsi29;
    struct s25* rdi30;
    struct s26* rsi31;
    struct s27* rdi32;
    int32_t* rsi33;
    struct s28* rdi34;
    int32_t* rsi35;
    struct s29* rdi36;
    int32_t* rsi37;
    struct s30* rdi38;
    int32_t* rsi39;
    struct s31* rdi40;
    int32_t* rsi41;
    struct s32* rdi42;
    int32_t* rsi43;
    struct s33* rdi44;
    int32_t* rsi45;
    struct s34* rdi46;
    int32_t* rsi47;
    struct s35* rdi48;
    int32_t* rsi49;
    struct s36* rdi50;
    int32_t* rsi51;
    struct s37* rdi52;
    int32_t* rsi53;
    struct s28* rdi54;
    int32_t* rsi55;
    struct s29* rdi56;
    int32_t* rsi57;
    struct s30* rdi58;
    int32_t* rsi59;
    struct s31* rdi60;
    int32_t* rsi61;
    struct s32* rdi62;
    int32_t* rsi63;
    struct s33* rdi64;
    int32_t* rsi65;
    struct s34* rdi66;
    int32_t* rsi67;
    int32_t* rsi68;
    void** rsi69;
    void** rcx70;
    int64_t r8_71;
    int64_t r9_72;
    void** rsi73;
    void** rcx74;
    int64_t r8_75;
    int64_t r9_76;

    rax2 = *reinterpret_cast<void***>(rdi + 48);
    if (rax2) {
        rdx3 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi + 48) + 8);
        rax4 = g6071d0;
        eax5 = fun_4010e0(rax4, rdx3);
        if (eax5) {
            rdx6 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi + 48) + 8);
            rax7 = g6071d0;
            rax8 = fun_4012c0(rax7, rdx6);
            if (rax8) {
                rdi9 = rax8->f8;
                eax10 = fun_4026dd(rdi9, eax5);
                rdi11 = rax8->f16;
                eax12 = fun_4026dd(rdi11, eax5);
                *reinterpret_cast<int32_t*>(&rsi13) = eax5;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = 0;
                rdi14 = rax8->f24;
                eax15 = fun_4026dd(rdi14, *reinterpret_cast<int32_t*>(&rsi13));
                v16 = rax8->f8;
                v17 = eax10;
                if (eax12 > v17) {
                    v17 = eax12;
                    v16 = rax8->f16;
                }
                if (eax15 > v17) {
                    v17 = eax15;
                    v16 = rax8->f24;
                }
                if (!v17) {
                    v17 = 1;
                }
                __asm__("pxor xmm0, xmm0");
                __asm__("cvtsi2sd xmm0, eax");
                __asm__("pxor xmm1, xmm1");
                __asm__("cvtsi2sd xmm1, dword [rbp-0x44]");
                __asm__("divsd xmm0, xmm1");
                rdi14->f0 = rsi13->f0;
                rdi18 = reinterpret_cast<struct s15*>(&rdi14->f4);
                rsi19 = reinterpret_cast<struct s16*>(&rsi13->f4);
                __asm__("pxor xmm0, xmm0");
                __asm__("cvtsi2sd xmm0, eax");
                rdi18->f0 = rsi19->f0;
                rdi20 = reinterpret_cast<struct s17*>(&rdi18->f4);
                rsi21 = reinterpret_cast<struct s18*>(&rsi19->f4);
                __asm__("divsd xmm0, xmm1");
                rdi20->f0 = rsi21->f0;
                rdi22 = reinterpret_cast<struct s19*>(&rdi20->f4);
                rsi23 = reinterpret_cast<struct s20*>(&rsi21->f4);
                __asm__("pxor xmm0, xmm0");
                __asm__("cvtsi2sd xmm0, eax");
                __asm__("pxor xmm1, xmm1");
                __asm__("cvtsi2sd xmm1, dword [rbp-0x44]");
                __asm__("divsd xmm0, xmm1");
                rdi22->f0 = rsi23->f0;
                rdi24 = reinterpret_cast<struct s21*>(&rdi22->f4);
                rsi25 = reinterpret_cast<struct s22*>(&rsi23->f4);
                rax26 = reinterpret_cast<uint64_t>(static_cast<int64_t>(v17));
                tmp64_27 = reinterpret_cast<struct s13*>(reinterpret_cast<uint64_t>(v16) + (rax26 + rax26));
                __asm__("pxor xmm0, xmm0");
                __asm__("cvtsi2sd xmm0, eax");
                rdi24->f0 = rsi25->f0;
                rdi28 = reinterpret_cast<struct s23*>(&rdi24->f4);
                rsi29 = reinterpret_cast<struct s24*>(&rsi25->f4);
                __asm__("divsd xmm0, xmm1");
                rdi28->f0 = rsi29->f0;
                rdi30 = reinterpret_cast<struct s25*>(&rdi28->f4);
                rsi31 = reinterpret_cast<struct s26*>(&rsi29->f4);
                rdi30->f0 = rsi31->f0;
                rdi32 = reinterpret_cast<struct s27*>(&rdi30->f4);
                rsi33 = &rsi31->f4;
                __asm__("ucomisd xmm0, [rbp-0x8]");
                if (reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(tmp64_27) < reinterpret_cast<uint64_t>(v16)) | reinterpret_cast<uint1_t>(tmp64_27 == 0)) {
                    if (v17 + 1 != eax5) {
                        rdi32->f0 = *rsi33;
                        rdi34 = reinterpret_cast<struct s28*>(&rdi32->f4);
                        rsi35 = rsi33 + 1;
                        fun_401160();
                        rdi34->f0 = *rsi35;
                        rdi36 = reinterpret_cast<struct s29*>(&rdi34->f4);
                        rsi37 = rsi35 + 1;
                        rdi36->f0 = *rsi37;
                        rdi38 = reinterpret_cast<struct s30*>(&rdi36->f4);
                        rsi39 = rsi37 + 1;
                        fun_401160();
                        __asm__("movapd xmm2, xmm0");
                        __asm__("mulsd xmm2, [rbp-0x60]");
                        rdi38->f0 = *rsi39;
                        rdi40 = reinterpret_cast<struct s31*>(&rdi38->f4);
                        rsi41 = rsi39 + 1;
                        rdi40->f0 = *rsi41;
                        rdi42 = reinterpret_cast<struct s32*>(&rdi40->f4);
                        rsi43 = rsi41 + 1;
                        fun_401160();
                        rdi42->f0 = *rsi43;
                        rdi44 = reinterpret_cast<struct s33*>(&rdi42->f4);
                        rsi45 = rsi43 + 1;
                        rdi44->f0 = *rsi45;
                        rdi46 = reinterpret_cast<struct s34*>(&rdi44->f4);
                        rsi47 = rsi45 + 1;
                        fun_401160();
                        __asm__("mulsd xmm0, [rbp-0x68]");
                        rdi46->f0 = *rsi47;
                        rdi48 = reinterpret_cast<struct s35*>(&rdi46->f4);
                        rsi49 = rsi47 + 1;
                        __asm__("subsd xmm2, xmm0");
                        rdi48->f0 = *rsi49;
                        rdi50 = reinterpret_cast<struct s36*>(&rdi48->f4);
                        rsi51 = rsi49 + 1;
                        rdi50->f0 = *rsi51;
                        rdi52 = reinterpret_cast<struct s37*>(&rdi50->f4);
                        rsi53 = rsi51 + 1;
                        __asm__("divsd xmm0, [rbp-0x10]");
                        fun_401160();
                        rdi52->f0 = *rsi53;
                        rdi32 = reinterpret_cast<struct s27*>(&rdi52->f4);
                        rsi33 = rsi53 + 1;
                        __asm__("divsd xmm2, xmm0");
                        __asm__("movapd xmm0, xmm2");
                        fun_4010c0();
                        __asm__("cvtsd2ss xmm0, xmm0");
                        __asm__("movss [rax+0x174], xmm0");
                    } else {
                        __asm__("cvtsd2ss xmm0, [rbp-0x8]");
                        __asm__("movss [rax+0x174], xmm0");
                    }
                    __asm__("pxor xmm0, xmm0");
                    __asm__("cvtsi2sd xmm0, eax");
                    __asm__("movss xmm1, [rax+0x174]");
                    __asm__("cvtss2sd xmm1, xmm1");
                    __asm__("divsd xmm0, xmm1");
                    rdi32->f0 = *rsi33;
                    rdi54 = reinterpret_cast<struct s28*>(&rdi32->f4);
                    rsi55 = rsi33 + 1;
                    __asm__("divsd xmm0, xmm1");
                    fun_401160();
                    rdi54->f0 = *rsi55;
                    rdi56 = reinterpret_cast<struct s29*>(&rdi54->f4);
                    rsi57 = rsi55 + 1;
                    __asm__("pxor xmm0, xmm0");
                    __asm__("cvtsi2sd xmm0, eax");
                    __asm__("pxor xmm1, xmm1");
                    __asm__("cvtsi2sd xmm1, dword [rbp-0x44]");
                    __asm__("divsd xmm0, xmm1");
                    fun_401160();
                    rdi56->f0 = *rsi57;
                    rdi58 = reinterpret_cast<struct s30*>(&rdi56->f4);
                    rsi59 = rsi57 + 1;
                    __asm__("divsd xmm3, xmm0");
                    __asm__("movapd xmm0, xmm3");
                    __asm__("cvtsd2ss xmm0, xmm0");
                    __asm__("movss [rax+0x168], xmm0");
                    __asm__("pxor xmm0, xmm0");
                    __asm__("cvtsi2sd xmm0, eax");
                    __asm__("movss xmm1, [rax+0x174]");
                    __asm__("cvtss2sd xmm1, xmm1");
                    __asm__("divsd xmm0, xmm1");
                    rdi58->f0 = *rsi59;
                    rdi60 = reinterpret_cast<struct s31*>(&rdi58->f4);
                    rsi61 = rsi59 + 1;
                    __asm__("divsd xmm0, xmm1");
                    fun_401160();
                    rdi60->f0 = *rsi61;
                    rdi62 = reinterpret_cast<struct s32*>(&rdi60->f4);
                    rsi63 = rsi61 + 1;
                    __asm__("pxor xmm0, xmm0");
                    __asm__("cvtsi2sd xmm0, eax");
                    __asm__("pxor xmm1, xmm1");
                    __asm__("cvtsi2sd xmm1, dword [rbp-0x44]");
                    __asm__("divsd xmm0, xmm1");
                    fun_401160();
                    rdi62->f0 = *rsi63;
                    rdi64 = reinterpret_cast<struct s33*>(&rdi62->f4);
                    rsi65 = rsi63 + 1;
                    __asm__("divsd xmm4, xmm0");
                    __asm__("movapd xmm0, xmm4");
                    __asm__("cvtsd2ss xmm0, xmm0");
                    __asm__("movss [rax+0x16c], xmm0");
                    __asm__("pxor xmm0, xmm0");
                    __asm__("cvtsi2sd xmm0, eax");
                    __asm__("movss xmm1, [rax+0x174]");
                    __asm__("cvtss2sd xmm1, xmm1");
                    __asm__("divsd xmm0, xmm1");
                    rdi64->f0 = *rsi65;
                    rdi66 = reinterpret_cast<struct s34*>(&rdi64->f4);
                    rsi67 = rsi65 + 1;
                    __asm__("divsd xmm0, xmm1");
                    fun_401160();
                    rdi66->f0 = *rsi67;
                    rsi68 = rsi67 + 1;
                    __asm__("pxor xmm0, xmm0");
                    __asm__("cvtsi2sd xmm0, eax");
                    __asm__("pxor xmm1, xmm1");
                    __asm__("cvtsi2sd xmm1, dword [rbp-0x44]");
                    __asm__("divsd xmm0, xmm1");
                    fun_401160();
                    rdi66->f4 = *rsi68;
                    rsi33 = rsi68 + 1;
                    __asm__("divsd xmm5, xmm0");
                    __asm__("movapd xmm0, xmm5");
                    __asm__("cvtsd2ss xmm0, xmm0");
                    __asm__("movss [rax+0x170], xmm0");
                } else {
                    __asm__("pxor xmm0, xmm0");
                    __asm__("movss [rax+0x174], xmm0");
                    __asm__("movss xmm0, [rip+0x3538]");
                    __asm__("movss [rax+0x168], xmm0");
                    __asm__("movss xmm0, [rip+0x3524]");
                    __asm__("movss [rax+0x16c], xmm0");
                    __asm__("movss xmm0, [rip+0x3510]");
                    __asm__("movss [rax+0x170], xmm0");
                }
                rax2 = fun_401280(rax8, rsi33);
            } else {
                rsi69 = *reinterpret_cast<void***>(rdi + 16);
                rax2 = fun_401436("Failed to get gamma for output %s\n", rsi69, rdx6, rcx70, r8_71, r9_72);
            }
        } else {
            rsi73 = *reinterpret_cast<void***>(rdi + 16);
            rax2 = fun_401436("Failed to get size of gamma for output %s\n", rsi73, rdx3, rcx74, r8_75, r9_76);
        }
    }
    return rax2;
}

void fun_401def(struct s11* rdi, void** rsi) {
    void** rcx3;
    void** rdx4;
    void** r8d5;

    rcx3 = *reinterpret_cast<void***>(rsi + 28);
    rdx4 = *reinterpret_cast<void***>(rsi + 20);
    r8d5 = *reinterpret_cast<void***>(rsi + 24);
    fun_401d43(rdi, rsi, rdx4, rcx3, r8d5);
    return;
}

int64_t printf = 0x401126;

void fun_401120(int64_t rdi, void** rsi, ...) {
    goto printf;
}

int64_t XRRGetScreenResourcesCurrent = 0x401246;

void** fun_401240(void** rdi, int64_t rsi) {
    goto XRRGetScreenResourcesCurrent;
}

int64_t memset = 0x401156;

void fun_401150(struct s11* rdi, void** rsi, void** rdx) {
    goto memset;
}

int64_t XRRGetPanning = 0x401236;

void** fun_401230(void** rdi, void** rsi, void** rdx) {
    goto XRRGetPanning;
}

int64_t memcmp = 0x401196;

int32_t fun_401190(void** rdi, void** rsi, void** rdx) {
    goto memcmp;
}

int64_t free = 0x401076;

void fun_401070(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, void* r9) {
    goto free;
}

int64_t XRRGetCrtcTransform = 0x401306;

int32_t fun_401300(void** rdi, void** rsi, void* rdx) {
    goto XRRGetCrtcTransform;
}

int64_t XFree = 0x401136;

void fun_401130(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    goto XFree;
}

int64_t realloc = 0x401266;

void*** fun_401260(void*** rdi, int64_t rsi) {
    goto realloc;
}

void fun_403766(void** rdi, void** rsi) {
    void*** rax3;
    uint32_t edx4;
    int64_t rsi5;
    void*** rdi6;
    void*** rax7;
    void*** rsi8;
    int64_t rax9;

    if (!*reinterpret_cast<void****>(rdi + 40)) {
        rax3 = fun_401210(8);
        *reinterpret_cast<void****>(rdi + 40) = rax3;
        *reinterpret_cast<void***>(rdi + 32) = *reinterpret_cast<void***>(rsi + 0x68);
        *reinterpret_cast<void***>(rdi + 34) = *reinterpret_cast<void***>(rsi + 0x6a);
        edx4 = *reinterpret_cast<uint16_t*>(rsi + 0x6c);
        *reinterpret_cast<void****>(rdi + 36) = *reinterpret_cast<void****>(&edx4);
        *reinterpret_cast<void***>(rdi + 24) = *reinterpret_cast<void***>(rsi + 76);
        fun_401def(rdi + 80, rsi + 0x94);
    } else {
        rsi5 = (reinterpret_cast<int32_t>(*reinterpret_cast<void****>(rdi + 44)) + 1) * 8;
        rdi6 = *reinterpret_cast<void****>(rdi + 40);
        rax7 = fun_401260(rdi6, rsi5);
        *reinterpret_cast<void****>(rdi + 40) = rax7;
    }
    rsi8 = *reinterpret_cast<void****>(rdi + 40);
    *reinterpret_cast<void****>(&rax9) = *reinterpret_cast<void****>(rdi + 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    *reinterpret_cast<void****>(rdi + 44) = reinterpret_cast<void***>(static_cast<int32_t>(rax9 + 1));
    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(rsi8) + (static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void****>(&rax9))) << 3)) = rsi;
    return;
}

int32_t g6071e8 = 0;

void** g6071f0 = reinterpret_cast<void**>(0);

void fun_4010f0(void** rdi, int64_t rsi, void** rdx);

void fun_4038b5(void** rdi, void** rsi) {
    int32_t eax3;
    void** rax4;
    void** v5;
    void** rdx6;
    int64_t rcx7;
    void** rax8;
    int64_t rcx9;
    void** rax10;

    eax3 = g6071e8;
    if (!eax3) {
        rax4 = g6071f0;
        v5 = rax4;
        while (v5) {
            if (reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v5 + 4)) & 0x1000) {
                if (*reinterpret_cast<uint32_t*>(v5 + 0xbc)) {
                    rdx6 = *reinterpret_cast<void***>(v5 + 20);
                    rcx7 = g6071d8;
                    rax8 = g6071d0;
                    fun_4010f0(rax8, rcx7, rdx6);
                }
            }
            v5 = *reinterpret_cast<void***>(v5);
        }
    } else {
        rcx9 = g6071d8;
        rax10 = g6071d0;
        fun_4010f0(rax10, rcx9, 0);
    }
    return;
}

int64_t XRRSetOutputPrimary = 0x4010f6;

void fun_4010f0(void** rdi, int64_t rsi, void** rdx) {
    goto XRRSetOutputPrimary;
}

int32_t g6071e0 = 0;

int32_t fun_401200(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, void* r9, void** a7, int64_t a8, void** a9, int64_t a10);

int32_t fun_40394b(void** rdi, void** rsi) {
    int32_t eax3;
    void** rsi4;
    void** rdx5;
    void** rsi6;
    void** rax7;
    int32_t eax8;

    eax3 = g6071e0;
    if (eax3) {
        rsi4 = *reinterpret_cast<void***>(rdi + 12);
        *reinterpret_cast<int32_t*>(&rsi4 + 2) = 0;
        fun_401120("crtc %d: disable\n", rsi4);
    }
    rdx5 = *reinterpret_cast<void***>(rdi + 8);
    rsi6 = g607208;
    rax7 = g6071d0;
    eax8 = fun_401200(rax7, rsi6, rdx5, 0, 0, 0, 0, 1, 0, 0);
    return eax8;
}

int64_t XRRSetCrtcConfig = 0x401206;

int32_t fun_401200(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, void* r9, void** a7, int64_t a8, void** a9, int64_t a10) {
    goto XRRSetCrtcConfig;
}

int32_t fun_4010b0(void** rdi, void** rsi, void** rdx);

void fun_4010d0(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, int64_t r9);

void** fun_4039b6(void** rdi, void** rsi) {
    void* rbp3;
    uint64_t rax4;
    void** rax5;
    void** rsi6;
    void** rdi7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    void** rcx11;
    void** rax12;
    int64_t r9_13;
    void** r8_14;
    void** rax15;

    rbp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax4 = g28;
    rax5 = g6071d0;
    rsi6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xfffffffffffffff0);
    rdi7 = rax5;
    fun_4010b0(rdi7, rsi6, reinterpret_cast<int64_t>(rbp3) + 0xfffffffffffffff4);
    if (v8 > 1 || v9 == 1 && v10 > 2) {
        rcx11 = *reinterpret_cast<void***>(rsi + 20);
        rsi6 = *reinterpret_cast<void***>(rdi + 8);
        rax12 = g6071d0;
        *reinterpret_cast<void***>(&r9_13) = *reinterpret_cast<void***>(rsi + 24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_13) + 4) = 0;
        r8_14 = *reinterpret_cast<void***>(rsi + 28);
        rdi7 = rax12;
        fun_4010d0(rdi7, rsi6, rsi, rcx11, r8_14, r9_13);
    }
    rax15 = reinterpret_cast<void**>(rax4 ^ g28);
    if (rax15) {
        rax15 = fun_401110(rdi7, rsi6, rdi7, rsi6);
    }
    return rax15;
}

int64_t XRRSetCrtcTransform = 0x4010d6;

void fun_4010d0(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, int64_t r9) {
    goto XRRSetCrtcTransform;
}

int32_t fun_401e2c(void** rdi, void** rsi);

int32_t fun_403a57(void** rdi) {
    void** v2;
    int32_t eax3;
    void** rsi4;
    int32_t eax5;
    int64_t r9_6;
    void** r8_7;
    uint32_t eax8;
    int64_t rdi9;
    void** rcx10;
    void** r11d11;
    void** r10d12;
    void** rdx13;
    void** rsi14;
    void** rax15;
    void* r9_16;
    int64_t r8_17;
    int32_t eax18;

    v2 = *reinterpret_cast<void***>(rdi + 20);
    eax3 = g6071e0;
    if (eax3) {
        rsi4 = *reinterpret_cast<void***>(rdi + 12);
        *reinterpret_cast<int32_t*>(&rsi4 + 2) = 0;
        fun_401120("crtc %d: revert\n", rsi4);
    }
    eax5 = fun_401e2c(rdi + 48, rdi + 80);
    if (!eax5) {
        fun_4039b6(rdi, rdi + 48);
    }
    *reinterpret_cast<int32_t*>(&r9_6) = *reinterpret_cast<int32_t*>(v2 + 18);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_6) + 4) = 0;
    r8_7 = *reinterpret_cast<void***>(v2 + 20);
    eax8 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v2 + 16));
    *reinterpret_cast<uint32_t*>(&rdi9) = *reinterpret_cast<uint16_t*>(&eax8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = 0;
    rcx10 = *reinterpret_cast<void***>(v2 + 12);
    r11d11 = *reinterpret_cast<void***>(v2 + 6);
    r10d12 = *reinterpret_cast<void***>(v2 + 4);
    rdx13 = *reinterpret_cast<void***>(rdi + 8);
    rsi14 = g607208;
    rax15 = g6071d0;
    *reinterpret_cast<void***>(&r9_16) = r11d11;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_16) + 4) = 0;
    *reinterpret_cast<void***>(&r8_17) = r10d12;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_17) + 4) = 0;
    eax18 = fun_401200(rax15, rsi14, rdx13, 0, r8_17, r9_16, rcx10, rdi9, r8_7, r9_6);
    return eax18;
}

int32_t fun_401e2c(void** rdi, void** rsi) {
    int32_t eax3;
    void** rsi4;
    void** rdi5;
    int32_t eax6;
    void** rdx7;
    void** rsi8;
    void** rdi9;
    int32_t eax10;
    int32_t eax11;

    eax3 = fun_401190(rdi, rsi, 36);
    if (!eax3) {
        rsi4 = *reinterpret_cast<void***>(rsi + 20);
        rdi5 = *reinterpret_cast<void***>(rdi + 20);
        eax6 = fun_4011b0(rdi5, rsi4);
        if (!eax6) {
            if (*reinterpret_cast<void***>(rdi + 24) == *reinterpret_cast<void***>(rsi + 24)) {
                rdx7 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rdi + 24)) * 4);
                rsi8 = *reinterpret_cast<void***>(rsi + 28);
                rdi9 = *reinterpret_cast<void***>(rdi + 28);
                eax10 = fun_401190(rdi9, rsi8, rdx7);
                if (!eax10) {
                    eax11 = 1;
                } else {
                    eax11 = 0;
                }
            } else {
                eax11 = 0;
            }
        } else {
            eax11 = 0;
        }
    } else {
        eax11 = 0;
    }
    return eax11;
}

int64_t putchar = 0x401086;

void fun_401080(int64_t rdi, void** rsi, void** rdx, int64_t rcx, int64_t r8) {
    goto putchar;
}

int64_t XRRSetPanning = 0x4012d6;

int32_t fun_4012d0(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, void* r9) {
    goto XRRSetPanning;
}

int64_t XRRSetScreenSize = 0x401176;

void fun_401170(void** rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    goto XRRSetScreenSize;
}

void* g607210 = reinterpret_cast<void*>(0);

void* g607214 = reinterpret_cast<void*>(0);

void* g607218 = reinterpret_cast<void*>(0);

void* g60721c = reinterpret_cast<void*>(0);

int32_t* g607220 = reinterpret_cast<int32_t*>(0);

void fun_403e4f(void** rdi, void** rsi) {
    void** rax3;
    void* edx4;
    void* eax5;
    void** rax6;
    void* edx7;
    void* eax8;
    void** rax9;
    void* edx10;
    void* eax11;
    void** rax12;
    void* edx13;
    void* eax14;
    int32_t eax15;
    int32_t* rsi16;
    int32_t* rdi17;
    void* eax18;
    void** rsi19;
    void* r8d20;
    void* edi21;
    int64_t rcx22;
    int64_t rdx23;
    int64_t rsi24;
    void** rax25;
    int64_t r9_26;
    int64_t r8_27;

    rax3 = g6071d0;
    edx4 = g607190;
    eax5 = g607210;
    if (*reinterpret_cast<void**>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rax3 + 0x74)) + (static_cast<int64_t>(reinterpret_cast<int32_t>(edx4)) << 7) + 24) != eax5 || ((rax6 = g6071d0, edx7 = g607190, eax8 = g607214, *reinterpret_cast<void**>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rax6 + 0x74)) + (static_cast<int64_t>(reinterpret_cast<int32_t>(edx7)) << 7) + 28) != eax8) || ((rax9 = g6071d0, edx10 = g607190, eax11 = g607218, *reinterpret_cast<void**>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rax9 + 0x74)) + (static_cast<int64_t>(reinterpret_cast<int32_t>(edx10)) << 7) + 32) != eax11) || (rax12 = g6071d0, edx13 = g607190, eax14 = g60721c, *reinterpret_cast<void**>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rax12 + 0x74)) + (static_cast<int64_t>(reinterpret_cast<int32_t>(edx13)) << 7) + 36) != eax14)))) {
        eax15 = g6071e0;
        if (eax15) {
            rsi16 = g607220;
            *reinterpret_cast<void**>(&rdi17) = g607218;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = 0;
            eax18 = g607190;
            *rdi17 = *rsi16;
            *reinterpret_cast<void**>(&rsi19) = eax18;
            *reinterpret_cast<int32_t*>(&rsi19 + 2) = 0;
            fun_401120("screen %d: %dx%d %dx%d mm %6.2fdpi\n", rsi19, "screen %d: %dx%d %dx%d mm %6.2fdpi\n", rsi19);
        }
        r8d20 = g60721c;
        edi21 = g607218;
        *reinterpret_cast<void**>(&rcx22) = g607214;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = 0;
        *reinterpret_cast<void**>(&rdx23) = g607210;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = 0;
        rsi24 = g6071d8;
        rax25 = g6071d0;
        *reinterpret_cast<void**>(&r9_26) = r8d20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_26) + 4) = 0;
        *reinterpret_cast<void**>(&r8_27) = edi21;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_27) + 4) = 0;
        fun_401170(rax25, rsi24, rdx23, rcx22, r8_27, r9_26);
    }
    return;
}

void fun_403d86(void** rdi) {
    int32_t eax2;
    void* eax3;
    void** rsi4;
    void** rax5;
    void* edx6;
    void** rax7;
    void* edx8;
    void** rax9;
    void* edx10;
    int64_t rcx11;
    void** rax12;
    void* edx13;
    int64_t rdx14;
    int64_t rsi15;
    void** rax16;
    int64_t r9_17;
    int64_t r8_18;

    eax2 = g6071e0;
    if (eax2) {
        eax3 = g607190;
        *reinterpret_cast<void**>(&rsi4) = eax3;
        *reinterpret_cast<int32_t*>(&rsi4 + 2) = 0;
        fun_401120("screen %d: revert\n", rsi4);
    }
    rax5 = g6071d0;
    edx6 = g607190;
    rax7 = g6071d0;
    edx8 = g607190;
    rax9 = g6071d0;
    edx10 = g607190;
    *reinterpret_cast<int32_t*>(&rcx11) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rax9 + 0x74)) + (static_cast<int64_t>(reinterpret_cast<int32_t>(edx10)) << 7) + 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
    rax12 = g6071d0;
    edx13 = g607190;
    *reinterpret_cast<int32_t*>(&rdx14) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rax12 + 0x74)) + (static_cast<int64_t>(reinterpret_cast<int32_t>(edx13)) << 7) + 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = 0;
    rsi15 = g6071d8;
    rax16 = g6071d0;
    *reinterpret_cast<int32_t*>(&r9_17) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rax5 + 0x74)) + (static_cast<int64_t>(reinterpret_cast<int32_t>(edx6)) << 7) + 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_17) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_18) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rax7 + 0x74)) + (static_cast<int64_t>(reinterpret_cast<int32_t>(edx8)) << 7) + 32);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_18) + 4) = 0;
    fun_401170(rax16, rsi15, rdx14, rcx11, r8_18, r9_17);
    return;
}

void** fun_4018ef(void** rdi, uint32_t esi, void** rdx, struct s0* rcx);

int32_t fun_403b32(void** rdi, void** rsi);

void fun_403f95(void** rdi, void** rsi);

void** fun_40402f(void** rdi, void** rsi, void** rdx) {
    void* rbp4;
    uint64_t rax5;
    uint64_t v6;
    void** v7;
    void** rax8;
    void** rdx9;
    int64_t rax10;
    void** v11;
    int32_t eax12;
    void** rax13;
    uint32_t eax14;
    void* v15;
    void* v16;
    void* v17;
    void* v18;
    void* eax19;
    void* v20;
    uint32_t v21;
    void* eax22;
    void* v23;
    uint32_t v24;
    void** v25;
    void** rax26;
    void** rdx27;
    int64_t rax28;
    int32_t eax29;
    void** rax30;

    rbp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax5 = g28;
    v6 = rax5;
    v7 = reinterpret_cast<void**>(0);
    while (rax8 = g607208, reinterpret_cast<int16_t>(*reinterpret_cast<void***>(rax8 + 8)) > reinterpret_cast<int16_t>(v7)) {
        rdx9 = g6071f8;
        rax10 = static_cast<int64_t>(reinterpret_cast<int32_t>(v7)) << 5;
        v11 = *reinterpret_cast<void***>(reinterpret_cast<uint16_t>(rax10 * 8 - rax10 + reinterpret_cast<uint16_t>(rdx9)) + 40);
        if (*reinterpret_cast<void***>(v11 + 12)) {
            if (!*reinterpret_cast<void***>(reinterpret_cast<uint16_t>(rax10 * 8 - rax10 + reinterpret_cast<uint16_t>(rdx9)) + 48)) {
                addr_40415a_6:
                rdi = reinterpret_cast<void**>(rax10 * 8 - rax10 + reinterpret_cast<uint16_t>(rdx9));
                eax12 = fun_40394b(rdi, rsi);
                if (eax12) 
                    goto addr_40416f_7;
            } else {
                rdi = *reinterpret_cast<void***>(v11 + 12);
                rax13 = fun_402329(rdi, rsi);
                if (!rax13) 
                    goto addr_4040c0_9;
                eax14 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v11 + 16));
                *reinterpret_cast<uint32_t*>(&rsi) = *reinterpret_cast<uint16_t*>(&eax14);
                *reinterpret_cast<int32_t*>(&rsi + 2) = 0;
                rdi = rax13;
                fun_4018ef(rdi, *reinterpret_cast<uint32_t*>(&rsi), reinterpret_cast<uint16_t>(rax10 * 8 - rax10 + reinterpret_cast<uint16_t>(rdx9)) + 96, reinterpret_cast<int64_t>(rbp4) - 32);
                v15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v16) + reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v11 + 4)));
                v17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v18) + reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v11 + 6)));
                eax19 = g607210;
                if (reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(v15) + (reinterpret_cast<int32_t>(v20) - v21)) > reinterpret_cast<int32_t>(eax19)) 
                    goto addr_40414f_11;
                eax22 = g607214;
                if (reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(v17) + (reinterpret_cast<int32_t>(v23) - v24)) <= reinterpret_cast<int32_t>(eax22)) 
                    goto addr_40417c_13; else 
                    goto addr_40414f_11;
            }
        }
        addr_40417d_14:
        v7 = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(v7) + 1);
        continue;
        addr_40414f_11:
        *reinterpret_cast<void***>(reinterpret_cast<uint16_t>(rax10 * 8 - rax10 + reinterpret_cast<uint16_t>(rdx9)) + 32) = reinterpret_cast<void**>(1);
        goto addr_40415a_6;
        addr_40417c_13:
        goto addr_40417d_14;
    }
    fun_403e4f(rdi, rsi);
    v25 = reinterpret_cast<void**>(0);
    while (rax26 = g607208, reinterpret_cast<int16_t>(*reinterpret_cast<void***>(rax26 + 8)) > reinterpret_cast<int16_t>(v25)) {
        rdx27 = g6071f8;
        rax28 = static_cast<int64_t>(reinterpret_cast<int32_t>(v25)) << 5;
        rdi = reinterpret_cast<void**>(rax28 * 8 - rax28 + reinterpret_cast<uint16_t>(rdx27));
        eax29 = fun_403b32(rdi, rsi);
        if (eax29) 
            goto addr_4041dc_18;
        v25 = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(v25) + 1);
    }
    fun_4038b5(rdi, rsi);
    addr_4041fb_21:
    rax30 = reinterpret_cast<void**>(v6 ^ g28);
    if (rax30) {
        rax30 = fun_401110(rdi, rsi);
    }
    return rax30;
    addr_4041dc_18:
    fun_403f95(rdi, rsi);
    goto addr_4041fb_21;
    addr_40416f_7:
    fun_403f95(rdi, rsi);
    goto addr_4041fb_21;
    addr_4040c0_9:
    fun_403f95(rdi, rsi);
    goto addr_4041fb_21;
}

void fun_403f95(void** rdi, void** rsi) {
    void** v3;
    void** rax4;
    void** rdx5;
    int64_t rax6;
    void** v7;
    void** rax8;
    void** rdx9;
    int64_t rax10;

    v3 = reinterpret_cast<void**>(0);
    while (rax4 = g607208, reinterpret_cast<int16_t>(*reinterpret_cast<void***>(rax4 + 8)) > reinterpret_cast<int16_t>(v3)) {
        rdx5 = g6071f8;
        rax6 = static_cast<int64_t>(reinterpret_cast<int32_t>(v3)) << 5;
        rdi = reinterpret_cast<void**>(rax6 * 8 - rax6 + reinterpret_cast<uint16_t>(rdx5));
        fun_40394b(rdi, rsi);
        v3 = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(v3) + 1);
    }
    fun_403d86(rdi);
    v7 = reinterpret_cast<void**>(0);
    while (rax8 = g607208, reinterpret_cast<int16_t>(*reinterpret_cast<void***>(rax8 + 8)) > reinterpret_cast<int16_t>(v7)) {
        rdx9 = g6071f8;
        rax10 = static_cast<int64_t>(reinterpret_cast<int32_t>(v7)) << 5;
        fun_403a57(rax10 * 8 - rax10 + reinterpret_cast<uint16_t>(rdx9));
        v7 = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(v7) + 1);
    }
    return;
}

void** fun_401320(void** rdi, void** rsi, void** rdx);

void** fun_401edc(void** rdi, void** rsi, void** rdx);

struct s38 {
    void** f0;
    signed char[6] pad8;
    int64_t f8;
    int64_t f16;
    int32_t f24;
};

struct s39 {
    uint32_t f0;
    signed char[4] pad8;
    int64_t f8;
    int64_t f16;
    int32_t f24;
};

void fun_401b86(struct s38* rdi, struct s39* rsi);

int32_t g6071e4 = 0;

void fun_401b6a(void*** rdi, void** rsi);

void fun_402c19(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void fun_4011d0(void** rdi, void** rsi, void** rdx, void** rcx);

void** fun_404211() {
    void* rbp1;
    uint64_t rax2;
    uint64_t v3;
    void** v4;
    void** rax5;
    void** rax6;
    void** rdx7;
    void** rcx8;
    void** rax9;
    void** rsi10;
    void** rdi11;
    void** rax12;
    void** rax13;
    void** rsi14;
    void** rdx15;
    void** rdi16;
    void** rax17;
    void** v18;
    void** rax19;
    int32_t eax20;
    uint32_t eax21;
    uint32_t eax22;
    void** rsi23;
    void** rsi24;
    uint32_t eax25;
    uint32_t eax26;
    void** rsi27;
    void** rsi28;
    void** rax29;
    void** rcx30;
    int64_t r8_31;
    int64_t r9_32;
    void** rax33;
    void** v34;
    void** rdx35;
    void** rax36;
    uint64_t rcx37;

    rbp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax2 = g28;
    v3 = rax2;
    v4 = reinterpret_cast<void**>(0);
    while (rax5 = g607208, reinterpret_cast<int16_t>(*reinterpret_cast<void***>(rax5 + 16)) > reinterpret_cast<int16_t>(v4)) {
        rax6 = g607208;
        rdx7 = *reinterpret_cast<void***>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax6 + 20)) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v4))) << 3));
        rcx8 = g607208;
        rax9 = g6071d0;
        rsi10 = rcx8;
        rdi11 = rax9;
        rax12 = fun_401320(rdi11, rsi10, rdx7);
        if (!rax12) 
            goto addr_404273_4;
        rax13 = g607208;
        rsi14 = *reinterpret_cast<void***>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax13 + 20)) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v4))) << 3));
        fun_401b15(reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffd0, rsi14);
        fun_401b41(reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffd0, v4);
        rdx15 = *reinterpret_cast<void***>(rax12 + 8);
        fun_401ae9(reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffd0, rdx15);
        rdi16 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffd0);
        rax17 = fun_401f43(rdi16, rdx15);
        v18 = rax17;
        if (!v18 && (rax19 = fun_401edc(rdi16, rdx15, rdx15), v18 = rax19, fun_401b86(v18 + 12, reinterpret_cast<int64_t>(rbp1) - 48), eax20 = g6071e4, !!eax20)) {
            eax21 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax12 + 24));
            eax22 = *reinterpret_cast<uint16_t*>(&eax21);
            if (!eax22) {
                rsi23 = *reinterpret_cast<void***>(rax12 + 8);
                fun_401120("output %s, connected.\n", rsi23);
                if (!*reinterpret_cast<void***>(rax12 + 4)) {
                    *reinterpret_cast<void***>(v18 + 4) = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v18 + 4)) | 64);
                    *reinterpret_cast<int32_t*>(v18 + 0x8c) = 1;
                }
            } else {
                if (eax22 == 1) {
                    rsi24 = *reinterpret_cast<void***>(rax12 + 8);
                    fun_401120("output %s, disconnected.\n", rsi24);
                    if (*reinterpret_cast<void***>(rax12 + 4)) {
                        *reinterpret_cast<void***>(v18 + 4) = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v18 + 4)) | 64);
                        *reinterpret_cast<int32_t*>(v18 + 0x8c) = 1;
                    }
                }
            }
        }
        *reinterpret_cast<int32_t*>(v18 + 0xbe) = 1;
        if (*reinterpret_cast<int32_t*>(v18 + 0x8c)) {
            eax25 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax12 + 24));
            eax26 = *reinterpret_cast<uint16_t*>(&eax25);
            if (eax26 == 1) {
                rsi27 = *reinterpret_cast<void***>(rax12 + 8);
                fun_401120("b output %s, disconnected.\n", rsi27);
                if (!(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v18 + 4)) & 2)) {
                    fun_401b15(v18 + 56, 0);
                    fun_401b15(v18 + 32, 0);
                    *reinterpret_cast<void***>(v18 + 4) = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v18 + 4)) | 2);
                    *reinterpret_cast<void***>(v18 + 4) = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v18 + 4)) | 1);
                }
            } else {
                if (eax26 == 2 || !eax26) {
                    rsi28 = *reinterpret_cast<void***>(rax12 + 8);
                    fun_401120("a output %s, connected.\n", rsi28);
                    if (!(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v18 + 4)) & 2)) {
                        fun_401b6a(v18 + 56, rsi28);
                        *reinterpret_cast<void***>(v18 + 4) = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v18 + 4)) | 2);
                    }
                }
            }
        }
        rax29 = g607208;
        rcx30 = *reinterpret_cast<void***>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax29 + 20)) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v4))) << 3));
        rsi10 = rcx30;
        rdi11 = v18;
        fun_402c19(rdi11, rsi10, rax12, rcx30, r8_31, r9_32);
        v4 = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(v4) + 1);
    }
    rax33 = g6071f0;
    v34 = rax33;
    while (v34) {
        if (!*reinterpret_cast<int32_t*>(v34 + 0xbe)) {
            rdx35 = *reinterpret_cast<void***>(v34 + 16);
            rax36 = stderr;
            *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>("warning: output %s not found; ignoring\n");
            *reinterpret_cast<int32_t*>(&rsi10 + 2) = 0;
            rdi11 = rax36;
            fun_4011d0(rdi11, "warning: output %s not found; ignoring\n", rdx35, rcx30);
        }
        rax33 = *reinterpret_cast<void***>(v34);
        v34 = rax33;
    }
    addr_404568_30:
    rcx37 = v3 ^ g28;
    if (rcx37) {
        rax33 = fun_401110(rdi11, rsi10, rdi11, rsi10);
    }
    return rax33;
    addr_404273_4:
    *reinterpret_cast<int32_t*>(&rax33) = 1;
    *reinterpret_cast<int32_t*>(&rax33 + 2) = 0;
    goto addr_404568_30;
}

void** fun_4011a0(int64_t rdi, void** rsi);

void** g6071b0 = reinterpret_cast<void**>(0x71f0);

void** fun_401edc(void** rdi, void** rsi, void** rdx) {
    void** rax4;
    void** rax5;

    rax4 = fun_4011a0(1, 0x180);
    *reinterpret_cast<void***>(rax4) = reinterpret_cast<void**>(0);
    *reinterpret_cast<int32_t*>(rax4 + 0xbe) = 0;
    __asm__("movss xmm0, [rip+0x3f5c]");
    __asm__("movss [rax+0x174], xmm0");
    rax5 = g6071b0;
    *reinterpret_cast<void***>(rax5) = rax4;
    g6071b0 = rax4;
    return rax4;
}

void fun_401b86(struct s38* rdi, struct s39* rsi) {
    if (rsi->f0 & 2) {
        rdi->f16 = rsi->f16;
    }
    if (rsi->f0 & 1) {
        rdi->f8 = rsi->f8;
    }
    if (rsi->f0 & 4) {
        rdi->f24 = rsi->f24;
    }
    rdi->f0 = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(rdi->f0) | rsi->f0);
    return;
}

void fun_401b6a(void*** rdi, void** rsi) {
    *rdi = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*rdi) | 8);
    return;
}

int64_t fprintf = 0x4011d6;

void fun_4011d0(void** rdi, void** rsi, void** rdx, void** rcx) {
    goto fprintf;
}

int32_t fun_404673(void** rdi, void** rsi) {
    void** v3;
    void** v4;
    int32_t v5;
    void** rax6;
    void** v7;
    void** v8;
    int32_t eax9;
    void** rdi10;
    void** rax11;
    uint32_t edx12;
    uint32_t eax13;
    int32_t eax14;
    uint32_t edx15;
    uint32_t eax16;

    v3 = rdi;
    v4 = rsi;
    v5 = 0;
    while (*reinterpret_cast<int32_t*>(*reinterpret_cast<void***>(v4 + 28) + 26) > v5) {
        if (*reinterpret_cast<void***>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v4 + 28) + 28)) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(v5)) << 3)) == *reinterpret_cast<void***>(v3 + 8)) 
            goto addr_4046cb_4;
        ++v5;
    }
    addr_4046cc_7:
    if (*reinterpret_cast<int32_t*>(*reinterpret_cast<void***>(v4 + 28) + 26) != v5) {
        rax6 = g6071f0;
        v7 = rax6;
        while (v7) {
            if (v7 != v4) {
                if (*reinterpret_cast<void***>(v7 + 76)) {
                    if (*reinterpret_cast<void***>(v7 + 48) == v3) {
                        v8 = reinterpret_cast<void**>(0);
                        while (reinterpret_cast<int16_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v4 + 28) + 32)) > reinterpret_cast<int16_t>(v8)) {
                            if (*reinterpret_cast<void***>(reinterpret_cast<uint16_t>(*reinterpret_cast<void****>(*reinterpret_cast<void***>(v4 + 28) + 36)) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v8))) << 3)) == *reinterpret_cast<void***>(v7 + 20)) 
                                goto addr_40476a_19;
                            v8 = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(v8) + 1);
                        }
                        goto addr_404768_21;
                    }
                }
            }
            addr_40478c_22:
            v7 = *reinterpret_cast<void***>(v7);
            continue;
            addr_404768_21:
            addr_40476b_23:
            if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(v4 + 28) + 32) != v8) 
                goto addr_40478c_22; else 
                goto addr_40477b_24;
            addr_40476a_19:
            goto addr_40476b_23;
        }
    } else {
        eax9 = 0;
        goto addr_40490e_26;
    }
    if (!*reinterpret_cast<void****>(v3 + 44)) {
        if (!*reinterpret_cast<int32_t*>(*reinterpret_cast<void***>(v3 + 20) + 18)) 
            goto addr_404909_29;
        rdi10 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v3 + 20) + 12);
        rax11 = fun_402329(rdi10, rsi);
        if (*reinterpret_cast<void***>(v4 + 76) != rax11) 
            goto addr_40489f_31;
    } else {
        if (*reinterpret_cast<void***>(v3 + 24) == *reinterpret_cast<void***>(v4 + 76)) {
            if (*reinterpret_cast<void***>(v3 + 32) == *reinterpret_cast<void***>(v4 + 0x68)) {
                if (*reinterpret_cast<void***>(v3 + 34) == *reinterpret_cast<void***>(v4 + 0x6a)) {
                    edx12 = reinterpret_cast<uint16_t>(*reinterpret_cast<void****>(v3 + 36));
                    eax13 = *reinterpret_cast<uint16_t*>(v4 + 0x6c);
                    if (*reinterpret_cast<int16_t*>(&edx12) == *reinterpret_cast<int16_t*>(&eax13)) {
                        eax14 = fun_401e2c(v3 + 48, v4 + 0x94);
                        if (eax14) 
                            goto addr_404909_29;
                        eax9 = 0;
                        goto addr_40490e_26;
                    } else {
                        eax9 = 0;
                        goto addr_40490e_26;
                    }
                } else {
                    eax9 = 0;
                    goto addr_40490e_26;
                }
            } else {
                eax9 = 0;
                goto addr_40490e_26;
            }
        } else {
            eax9 = 0;
            goto addr_40490e_26;
        }
    }
    if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(v3 + 20) + 4) == *reinterpret_cast<void***>(v4 + 0x68)) {
        if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(v3 + 20) + 6) == *reinterpret_cast<void***>(v4 + 0x6a)) {
            edx15 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v3 + 20) + 16));
            eax16 = *reinterpret_cast<uint16_t*>(v4 + 0x6c);
            if (*reinterpret_cast<int16_t*>(&edx15) == *reinterpret_cast<int16_t*>(&eax16)) {
                addr_404909_29:
                eax9 = 1;
            } else {
                eax9 = 0;
            }
        } else {
            eax9 = 0;
        }
    } else {
        eax9 = 0;
    }
    addr_40490e_26:
    return eax9;
    addr_40489f_31:
    eax9 = 0;
    goto addr_40490e_26;
    addr_40477b_24:
    eax9 = 0;
    goto addr_40490e_26;
    addr_4046cb_4:
    goto addr_4046cc_7;
}

void** fun_401f43(void** rdi, void** rsi) {
    void** v3;
    void** rax4;
    void** v5;
    uint32_t v6;
    void** rsi7;
    void** rdi8;
    int32_t eax9;

    v3 = rdi;
    rax4 = g6071f0;
    v5 = rax4;
    while (v5) {
        v6 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v5 + 12)) & reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v3));
        if (!(v6 & 2)) 
            goto addr_401f90_4;
        if (*reinterpret_cast<void***>(v3 + 8) == *reinterpret_cast<void***>(v5 + 20)) 
            goto addr_401fed_6;
        addr_401f90_4:
        if (!(v6 & 1)) 
            goto addr_401fb9_7;
        rsi7 = *reinterpret_cast<void***>(v5 + 16);
        rdi8 = *reinterpret_cast<void***>(v3 + 4);
        eax9 = fun_4011b0(rdi8, rsi7);
        if (!eax9) 
            goto addr_401ff0_9;
        addr_401fb9_7:
        if (!(v6 & 4)) 
            goto addr_401fd5_10;
        if (*reinterpret_cast<void***>(v3 + 12) == *reinterpret_cast<void***>(v5 + 24)) 
            goto addr_401ff3_12;
        addr_401fd5_10:
        v5 = *reinterpret_cast<void***>(v5);
    }
    addr_401ff4_14:
    return v5;
    addr_401fed_6:
    goto addr_401ff4_14;
    addr_401ff0_9:
    goto addr_401ff4_14;
    addr_401ff3_12:
    goto addr_401ff4_14;
}

int64_t fun_401571(void** rdi, uint32_t esi);

int64_t fun_401526(void** rdi, uint32_t esi);

void** fun_4018ef(void** rdi, uint32_t esi, void** rdx, struct s0* rcx) {
    uint32_t eax5;
    uint64_t rax6;
    void** rsi7;
    void** rax8;

    eax5 = esi;
    rax6 = g28;
    fun_401571(rdi, static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax5)));
    fun_401526(rdi, static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax5)));
    rsi7 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 0xffffffffffffffd0);
    fun_40175b(rdx, rsi7, 4, rcx);
    rax8 = reinterpret_cast<void**>(rax6 ^ g28);
    if (rax8) {
        rax8 = fun_401110(rdx, rsi7, rdx, rsi7);
    }
    return rax8;
}

void fun_404f65(void** rdi, void** rsi);

int32_t fun_404f90(void** rdi, void** rsi, ...) {
    void** v3;
    void** v4;
    int32_t eax5;
    int32_t v6;
    void** v7;
    int32_t v8;
    void** rdi9;
    void** rax10;
    int32_t eax11;
    int32_t v12;
    int32_t eax13;
    int32_t eax14;

    if (rdi) {
        v3 = rdi;
        v4 = *reinterpret_cast<void***>(rdi);
        *reinterpret_cast<void***>(v3 + 48) = reinterpret_cast<void**>(0);
        eax5 = fun_404f90(v4, rsi);
        v6 = eax5;
        if (*reinterpret_cast<void***>(v3 + 76)) {
            v7 = reinterpret_cast<void**>(0);
            v8 = 0;
            while (*reinterpret_cast<int32_t*>(*reinterpret_cast<void***>(v3 + 28) + 26) > v8) {
                rdi9 = *reinterpret_cast<void***>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v3 + 28) + 28)) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(v8)) << 3));
                rax10 = fun_402196(rdi9, rsi);
                fun_404f65(v4, rsi);
                rsi = v3;
                eax11 = fun_404673(rax10, rsi);
                if (eax11) {
                    v12 = 0x3e8;
                    if (*reinterpret_cast<void***>(v3 + 52) == rax10) {
                        v12 = 0x3e9;
                    }
                    *reinterpret_cast<void***>(v3 + 48) = rax10;
                    eax13 = fun_404f90(v4, rsi);
                    if (v12 + eax13 > v6) {
                        v7 = rax10;
                        v6 = v12 + eax13;
                    }
                }
                ++v8;
            }
            if (*reinterpret_cast<void***>(v3 + 48) != v7) 
                goto addr_4050cc_13;
        } else {
            eax14 = v6;
            goto addr_4050e7_15;
        }
    } else {
        eax14 = 0;
        goto addr_4050e7_15;
    }
    addr_4050d8_17:
    fun_404f90(v4, rsi);
    eax14 = v6;
    addr_4050e7_15:
    return eax14;
    addr_4050cc_13:
    *reinterpret_cast<void***>(v3 + 48) = v7;
    goto addr_4050d8_17;
}

void** fun_401ffa(void** rdi, void** rsi, void** rdx) {
    void* rbp4;
    uint64_t rax5;
    void** rdi6;
    void** rax7;
    uint64_t rcx8;

    rbp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax5 = g28;
    fun_401ad4(reinterpret_cast<int64_t>(rbp4) - 48, rsi);
    fun_401b15(reinterpret_cast<int64_t>(rbp4) + 0xffffffffffffffd0, rdi);
    rdi6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp4) + 0xffffffffffffffd0);
    rax7 = fun_401f43(rdi6, rdi);
    rcx8 = rax5 ^ g28;
    if (rcx8) {
        rax7 = fun_401110(rdi6, rdi);
    }
    return rax7;
}

int64_t fun_401100(void** rdi, void** rsi, void** rdx);

void** fun_4053bb(void*** rdi, void** rsi, void** rdx) {
    void*** v4;
    void** rax5;
    int64_t rdx6;
    void** rax7;
    void** rax8;
    void** v9;
    void** rax10;
    void** rax11;
    void** rdx12;
    void** rcx13;
    void** rax14;
    void** rax15;
    void** eax16;
    void** rdi17;
    int64_t rax18;
    void** rsi19;

    v4 = rdi;
    rax5 = g607208;
    if (!rax5) {
        rdx6 = g6071d8;
        rax7 = g6071d0;
        rax8 = fun_401240(rax7, rdx6);
        g607208 = rax8;
    }
    v9 = reinterpret_cast<void**>(0);
    while (rax10 = g607208, reinterpret_cast<int16_t>(*reinterpret_cast<void***>(rax10 + 16)) > reinterpret_cast<int16_t>(v9)) {
        rax11 = g607208;
        rdx12 = *reinterpret_cast<void***>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax11 + 20)) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v9))) << 3));
        rcx13 = g607208;
        rax14 = g6071d0;
        rax15 = fun_401320(rax14, rcx13, rdx12);
        if (reinterpret_cast<int32_t>(*reinterpret_cast<void****>(rax15 + 40)) <= 1) 
            goto addr_405487_6;
        if (reinterpret_cast<int32_t>(*reinterpret_cast<void****>(rax15 + 40)) <= 3) 
            goto addr_405456_8;
        addr_405487_6:
        v9 = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(v9) + 1);
    }
    eax16 = reinterpret_cast<void**>(1);
    addr_4054a3_10:
    return eax16;
    addr_405456_8:
    rdi17 = *reinterpret_cast<void***>(rax15 + 8);
    rax18 = fun_401100(rdi17, rcx13, rdx12);
    rsi19 = *reinterpret_cast<void***>(rax15 + 8);
    fun_4011f0(v4, rsi19, rax18);
    eax16 = reinterpret_cast<void**>(0);
    goto addr_4054a3_10;
}

int64_t strlen = 0x401106;

int64_t fun_401100(void** rdi, void** rsi, void** rdx) {
    goto strlen;
}

int64_t memcpy = 0x4011f6;

void fun_4011f0(void*** rdi, void** rsi, int64_t rdx) {
    goto memcpy;
}

int64_t XRRQueryExtension = 0x4010a6;

int32_t fun_4010a0(void** rdi, void* rsi, void* rdx) {
    goto XRRQueryExtension;
}

int64_t XRRQueryVersion = 0x4010b6;

int32_t fun_4010b0(void** rdi, void** rsi, void** rdx) {
    goto XRRQueryVersion;
}

struct s40 {
    signed char[24] pad24;
    int64_t f24;
};

struct s40* fun_401090(void** rdi, void** rsi, void** rdx);

void** fun_403352() {
    void* rbp1;
    uint64_t rax2;
    uint64_t v3;
    void** rax4;
    void** eax5;
    void** rsi6;
    void** rax7;
    void** rax8;
    void** v9;
    void** rax10;
    void** rax11;
    void** rax12;
    void** rdx13;
    void** rcx14;
    void** rax15;
    struct s40* rax16;
    void** v17;
    int32_t eax18;
    void** rax19;
    void** rdx20;
    void** rcx21;
    void** rax22;
    void** rax23;
    void** v24;
    void** rcx25;
    int32_t eax26;
    int64_t r8_27;
    void* r9_28;
    void** rax29;
    void** rcx30;
    int64_t rax31;
    void** rsi32;
    void** rdx33;
    int64_t rax34;
    void** rdx35;
    uint64_t rax36;
    void** rdx37;
    uint64_t rax38;
    void** rdx39;
    int64_t rax40;
    void** rdx41;
    int64_t rax42;
    void** rdx43;
    int64_t rax44;
    void** rdx45;
    int64_t rax46;
    void** rax47;
    void** rax48;
    void** rsi49;
    int32_t eax50;
    void** rdx51;
    int64_t rax52;
    void** rcx53;
    void** rdx54;
    void** rsi55;
    void** r8_56;
    int64_t rax57;
    void** rdx58;
    int64_t rax59;
    void** rcx60;
    int64_t rax61;
    void** rdi62;

    rbp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax2 = g28;
    v3 = rax2;
    rax4 = g607208;
    g607200 = *reinterpret_cast<void***>(rax4 + 8);
    eax5 = g607200;
    rsi6 = reinterpret_cast<void**>(0xe0);
    *reinterpret_cast<int32_t*>(&rsi6 + 2) = 0;
    rax7 = fun_4011a0(static_cast<int64_t>(reinterpret_cast<int32_t>(eax5)), 0xe0);
    g6071f8 = rax7;
    rax8 = g6071f8;
    if (rax8) {
        v9 = reinterpret_cast<void**>(0);
        while (rax10 = g607208, rax11 = *reinterpret_cast<void***>(rax10 + 8), reinterpret_cast<int16_t>(rax11) > reinterpret_cast<int16_t>(v9)) {
            rax12 = g607208;
            rdx13 = *reinterpret_cast<void***>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax12 + 12)) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v9))) << 3));
            rcx14 = g607208;
            rax15 = g6071d0;
            rax16 = fun_401090(rax15, rcx14, rdx13);
            v17 = reinterpret_cast<void**>(0);
            eax18 = g60723c;
            if (eax18 && (fun_401150(reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffc0, 0, 56), rax19 = g607208, rdx20 = *reinterpret_cast<void***>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax19 + 12)) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v9))) << 3)), rcx21 = g607208, rax22 = g6071d0, rax23 = fun_401230(rax22, rcx21, rdx20), v17 = rax23, v24 = *reinterpret_cast<void***>(v17), rcx25 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffc0), eax26 = fun_401190(v17, rcx25, 56), !eax26)) {
                fun_401070(v17, rcx25, 56, rcx25, r8_27, r9_28);
                v17 = reinterpret_cast<void**>(0);
            }
            rax29 = g607208;
            rcx30 = g6071f8;
            rax31 = static_cast<int64_t>(reinterpret_cast<int32_t>(v9)) << 5;
            rsi32 = *reinterpret_cast<void***>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax29 + 12)) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v9))) << 3));
            fun_401b15(rax31 * 8 - rax31 + reinterpret_cast<uint16_t>(rcx30), rsi32);
            rdx33 = g6071f8;
            rax34 = static_cast<int64_t>(reinterpret_cast<int32_t>(v9)) << 5;
            rsi6 = v9;
            *reinterpret_cast<int32_t*>(&rsi6 + 2) = 0;
            fun_401b41(rax34 * 8 - rax34 + reinterpret_cast<uint16_t>(rdx33), rsi6);
            if (!rax16) 
                goto addr_40350d_7;
            rdx35 = g6071f8;
            rax36 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v9))) << 5;
            *reinterpret_cast<struct s40**>(reinterpret_cast<uint16_t>(rdx35) + (rax36 * 8 - rax36) + 40) = rax16;
            rdx37 = g6071f8;
            rax38 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v9))) << 5;
            *reinterpret_cast<void***>(reinterpret_cast<uint16_t>(rdx37) + (rax38 * 8 - rax38) + 56) = v17;
            if (!rax16->f24) {
                rdx39 = g6071f8;
                rax40 = static_cast<int64_t>(reinterpret_cast<int32_t>(v9)) << 5;
                *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rax40 * 8 - rax40 + reinterpret_cast<uint16_t>(rdx39)) + 48) = 0;
                rdx41 = g6071f8;
                rax42 = static_cast<int64_t>(reinterpret_cast<int32_t>(v9)) << 5;
                *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax42 * 8 - rax42 + reinterpret_cast<uint16_t>(rdx41)) + 64) = 0;
                rdx43 = g6071f8;
                rax44 = static_cast<int64_t>(reinterpret_cast<int32_t>(v9)) << 5;
                *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax44 * 8 - rax44 + reinterpret_cast<uint16_t>(rdx43)) + 68) = 0;
                rdx45 = g6071f8;
                rax46 = static_cast<int64_t>(reinterpret_cast<int32_t>(v9)) << 5;
                *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rax46 * 8 - rax46 + reinterpret_cast<uint16_t>(rdx45)) + 72) = 1;
            }
            rax47 = g607208;
            rax48 = g6071d0;
            rsi49 = *reinterpret_cast<void***>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax47 + 12)) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v9))) << 3));
            eax50 = fun_401300(rax48, rsi49, reinterpret_cast<int64_t>(rbp1) - 64);
            if (!eax50 || !v24) {
                rdx51 = g6071f8;
                rax52 = static_cast<int64_t>(reinterpret_cast<int32_t>(v9)) << 5;
                fun_401cd1(reinterpret_cast<uint64_t>(rax52 * 8 - rax52 + reinterpret_cast<uint16_t>(rdx51)) + 96, rsi49);
            } else {
                rcx53 = *reinterpret_cast<void***>(v24 + 60);
                rdx54 = *reinterpret_cast<void***>(v24 + 52);
                rsi55 = v24 + 32;
                r8_56 = g6071f8;
                rax57 = static_cast<int64_t>(reinterpret_cast<int32_t>(v9)) << 5;
                r9_28 = reinterpret_cast<void*>(rax57 * 8 - rax57);
                *reinterpret_cast<void***>(&r8_27) = *reinterpret_cast<void***>(v24 + 56);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_27) + 4) = 0;
                fun_401d43(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9_28) + reinterpret_cast<uint16_t>(r8_56)) + 96, rsi55, rdx54, rcx53, *reinterpret_cast<void***>(&r8_27));
                fun_401130(v24, rsi55, rdx54, rcx53, r8_27);
            }
            rdx58 = g6071f8;
            rax59 = static_cast<int64_t>(reinterpret_cast<int32_t>(v9)) << 5;
            rcx60 = g6071f8;
            rax61 = static_cast<int64_t>(reinterpret_cast<int32_t>(v9)) << 5;
            rsi6 = reinterpret_cast<void**>(rax59 * 8 - rax59 + reinterpret_cast<uint16_t>(rdx58) + 96);
            fun_401def(reinterpret_cast<uint64_t>(rax61 * 8 - rax61 + reinterpret_cast<uint16_t>(rcx60)) + 0xa0, rsi6);
            v9 = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(v9) + 1);
        }
    } else {
        rax11 = reinterpret_cast<void**>(1);
    }
    addr_403750_15:
    rdi62 = reinterpret_cast<void**>(v3 ^ g28);
    if (rdi62) {
        rax11 = fun_401110(rdi62, rsi6);
    }
    return rax11;
    addr_40350d_7:
    rax11 = reinterpret_cast<void**>(1);
    goto addr_403750_15;
}

void** fun_404985() {
    void* rbp1;
    uint64_t rax2;
    uint64_t v3;
    int32_t v4;
    void** rax5;
    void** v6;
    void** rsi7;
    void** rdi8;
    void** rax9;
    int64_t rax10;
    void** ebx11;
    uint32_t eax12;
    int64_t rax13;
    int64_t rbx14;
    uint32_t eax15;
    int64_t rax16;
    void** ebx17;
    uint32_t eax18;
    int64_t rax19;
    int64_t rbx20;
    uint32_t eax21;
    int64_t rax22;
    void** v23;
    void** v24;
    void** rax25;
    void** v26;
    void** rax27;
    void** v28;
    void** rax29;

    rbp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax2 = g28;
    v3 = rax2;
    while (1) {
        v4 = 0;
        rax5 = g6071f0;
        v6 = rax5;
        while (v6) {
            if (reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v6 + 4)) & 4) {
                if (*reinterpret_cast<void***>(v6 + 76)) {
                    fun_401ad4(reinterpret_cast<int64_t>(rbp1) - 64, rsi7);
                    rsi7 = *reinterpret_cast<void***>(v6 + 100);
                    fun_401ae9(reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffc0, rsi7);
                    rdi8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffc0);
                    rax9 = fun_401f43(rdi8, rsi7);
                    if (*reinterpret_cast<void***>(rax9 + 76)) {
                        if (!(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax9 + 4)) & 4) || reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax9 + 4)) & 8) {
                            if (*reinterpret_cast<uint32_t*>(v6 + 96) <= 4) {
                                *reinterpret_cast<uint32_t*>(&rax10) = *reinterpret_cast<uint32_t*>(v6 + 96);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
                                switch (rax10) {
                                case 0:
                                    *reinterpret_cast<void***>(v6 + 0x6a) = *reinterpret_cast<void***>(rax9 + 0x6a);
                                    ebx11 = *reinterpret_cast<void***>(rax9 + 0x68);
                                    eax12 = *reinterpret_cast<uint16_t*>(v6 + 0x6c);
                                    *reinterpret_cast<uint32_t*>(&rsi7) = *reinterpret_cast<uint16_t*>(&eax12);
                                    *reinterpret_cast<int32_t*>(&rsi7 + 2) = 0;
                                    rdi8 = *reinterpret_cast<void***>(v6 + 76);
                                    rax13 = fun_401571(rdi8, *reinterpret_cast<uint32_t*>(&rsi7));
                                    *reinterpret_cast<void***>(v6 + 0x68) = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(ebx11) - *reinterpret_cast<uint32_t*>(&rax13));
                                    break;
                                case 1:
                                    *reinterpret_cast<void***>(v6 + 0x6a) = *reinterpret_cast<void***>(rax9 + 0x6a);
                                    *reinterpret_cast<void***>(&rbx14) = *reinterpret_cast<void***>(rax9 + 0x68);
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx14) + 4) = 0;
                                    eax15 = *reinterpret_cast<uint16_t*>(rax9 + 0x6c);
                                    *reinterpret_cast<uint32_t*>(&rsi7) = *reinterpret_cast<uint16_t*>(&eax15);
                                    *reinterpret_cast<int32_t*>(&rsi7 + 2) = 0;
                                    rdi8 = *reinterpret_cast<void***>(rax9 + 76);
                                    rax16 = fun_401571(rdi8, *reinterpret_cast<uint32_t*>(&rsi7));
                                    *reinterpret_cast<void***>(v6 + 0x68) = reinterpret_cast<void**>(static_cast<uint32_t>(rbx14 + rax16));
                                    break;
                                case 2:
                                    *reinterpret_cast<void***>(v6 + 0x68) = *reinterpret_cast<void***>(rax9 + 0x68);
                                    ebx17 = *reinterpret_cast<void***>(rax9 + 0x6a);
                                    eax18 = *reinterpret_cast<uint16_t*>(v6 + 0x6c);
                                    *reinterpret_cast<uint32_t*>(&rsi7) = *reinterpret_cast<uint16_t*>(&eax18);
                                    *reinterpret_cast<int32_t*>(&rsi7 + 2) = 0;
                                    rdi8 = *reinterpret_cast<void***>(v6 + 76);
                                    rax19 = fun_401526(rdi8, *reinterpret_cast<uint32_t*>(&rsi7));
                                    *reinterpret_cast<void***>(v6 + 0x6a) = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(ebx17) - *reinterpret_cast<uint32_t*>(&rax19));
                                    break;
                                case 3:
                                    *reinterpret_cast<void***>(v6 + 0x68) = *reinterpret_cast<void***>(rax9 + 0x68);
                                    *reinterpret_cast<void***>(&rbx20) = *reinterpret_cast<void***>(rax9 + 0x6a);
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx20) + 4) = 0;
                                    eax21 = *reinterpret_cast<uint16_t*>(rax9 + 0x6c);
                                    *reinterpret_cast<uint32_t*>(&rsi7) = *reinterpret_cast<uint16_t*>(&eax21);
                                    *reinterpret_cast<int32_t*>(&rsi7 + 2) = 0;
                                    rdi8 = *reinterpret_cast<void***>(rax9 + 76);
                                    rax22 = fun_401526(rdi8, *reinterpret_cast<uint32_t*>(&rsi7));
                                    *reinterpret_cast<void***>(v6 + 0x6a) = reinterpret_cast<void**>(static_cast<uint32_t>(rbx20 + rax22));
                                    break;
                                case 4:
                                    *reinterpret_cast<void***>(v6 + 0x68) = *reinterpret_cast<void***>(rax9 + 0x68);
                                    *reinterpret_cast<void***>(v6 + 0x6a) = *reinterpret_cast<void***>(rax9 + 0x6a);
                                }
                            }
                            *reinterpret_cast<void***>(v6 + 4) = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v6 + 4)) | 8);
                        } else {
                            v4 = 1;
                        }
                    } else {
                        *reinterpret_cast<void***>(v6 + 0x68) = reinterpret_cast<void**>(0);
                        *reinterpret_cast<void***>(v6 + 0x6a) = reinterpret_cast<void**>(0);
                        *reinterpret_cast<void***>(v6 + 4) = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v6 + 4)) | 8);
                    }
                }
            }
            v6 = *reinterpret_cast<void***>(v6);
        }
        if (!v4) 
            break;
    }
    v23 = reinterpret_cast<void**>(0x8000);
    v24 = reinterpret_cast<void**>(0x8000);
    rax25 = g6071f0;
    v26 = rax25;
    while (v26) {
        if (*reinterpret_cast<void***>(v26 + 76)) {
            if (reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v26 + 0x68)) < reinterpret_cast<int16_t>(v23)) {
                v23 = *reinterpret_cast<void***>(v26 + 0x68);
            }
            if (reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v26 + 0x6a)) < reinterpret_cast<int16_t>(v24)) {
                v24 = *reinterpret_cast<void***>(v26 + 0x6a);
            }
        }
        v26 = *reinterpret_cast<void***>(v26);
    }
    if (v23 || v24) {
        rax27 = g6071f0;
        v28 = rax27;
        while (v28) {
            if (*reinterpret_cast<void***>(v28 + 76)) {
                *reinterpret_cast<void***>(v28 + 0x68) = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v28 + 0x68)) - reinterpret_cast<uint16_t>(v23));
                *reinterpret_cast<void***>(v28 + 0x6a) = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v28 + 0x6a)) - reinterpret_cast<uint16_t>(v24));
                *reinterpret_cast<void***>(v28 + 4) = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v28 + 4)) | 8);
            }
            v28 = *reinterpret_cast<void***>(v28);
        }
    }
    rax29 = reinterpret_cast<void**>(v3 ^ g28);
    if (rax29) {
        rax29 = fun_401110(rdi8, rsi7);
    }
    return rax29;
}

void* g607228 = reinterpret_cast<void*>(0);

void* g607230 = reinterpret_cast<void*>(0);

void** fun_404d5d() {
    void* rbp1;
    uint64_t rax2;
    uint64_t v3;
    void** rax4;
    void** v5;
    void** v6;
    uint32_t eax7;
    void** rsi8;
    void** rdi9;
    void* v10;
    void* v11;
    void* v12;
    void* v13;
    void* eax14;
    void* v15;
    uint32_t v16;
    void* eax17;
    void* v18;
    uint32_t v19;
    void** rax20;
    void** v21;
    void* eax22;
    void* eax23;
    void* edx24;
    void* eax25;
    void* eax26;
    void* edx27;
    void* eax28;
    void* eax29;
    void** rax30;

    rbp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax2 = g28;
    v3 = rax2;
    rax4 = g6071f0;
    v5 = rax4;
    while (v5) {
        v6 = *reinterpret_cast<void***>(v5 + 76);
        if (v6) {
            eax7 = *reinterpret_cast<uint16_t*>(v5 + 0x6c);
            *reinterpret_cast<uint32_t*>(&rsi8) = *reinterpret_cast<uint16_t*>(&eax7);
            *reinterpret_cast<int32_t*>(&rsi8 + 2) = 0;
            rdi9 = v6;
            fun_4018ef(rdi9, *reinterpret_cast<uint32_t*>(&rsi8), v5 + 0x94, reinterpret_cast<int64_t>(rbp1) - 32);
            v10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v11) + reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v5 + 0x68)));
            v12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v13) + reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v5 + 0x6a)));
            eax14 = g607210;
            if (reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(v10) + (reinterpret_cast<int32_t>(v15) - v16)) > reinterpret_cast<int32_t>(eax14)) {
                g607210 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v15) - v16 + reinterpret_cast<uint32_t>(v10));
            }
            eax17 = g607214;
            if (reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(v12) + (reinterpret_cast<int32_t>(v18) - v19)) > reinterpret_cast<int32_t>(eax17)) {
                g607214 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v18) - v19 + reinterpret_cast<uint32_t>(v12));
            }
            if (!(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v5 + 4)) & 0x400)) {
                if (!*reinterpret_cast<void***>(v5 + 48)) {
                    *reinterpret_cast<int32_t*>(&rax20) = 0;
                    *reinterpret_cast<int32_t*>(&rax20 + 2) = 0;
                } else {
                    rax20 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v5 + 48) + 28);
                }
                v21 = rax20;
            } else {
                v21 = v5 + 0x70;
            }
            if (v21 && (eax22 = g607210, reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v21 + 4)) + reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v21 + 8)) > reinterpret_cast<uint32_t>(eax22))) {
                g607210 = reinterpret_cast<void*>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v21 + 8)) + reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v21 + 4)));
            }
            if (v21 && (eax23 = g607214, reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v21 + 6)) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(v21 + 10)) > reinterpret_cast<uint32_t>(eax23))) {
                g607214 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(v21 + 10)) + reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v21 + 6)));
            }
        }
        v5 = *reinterpret_cast<void***>(v5);
    }
    edx24 = g607210;
    eax25 = g607228;
    if (reinterpret_cast<int32_t>(edx24) < reinterpret_cast<int32_t>(eax25)) {
        eax26 = g607228;
        g607210 = eax26;
    }
    edx27 = g607214;
    eax28 = g607230;
    if (reinterpret_cast<int32_t>(edx27) < reinterpret_cast<int32_t>(eax28)) {
        eax29 = g607230;
        g607214 = eax29;
    }
    rax30 = reinterpret_cast<void**>(v3 ^ g28);
    if (rax30) {
        rax30 = fun_401110(rdi9, rsi8);
    }
    return rax30;
}

void** fun_404910(void** rdi);

struct s41 {
    signed char[36] pad36;
    int32_t f36;
};

struct s42 {
    signed char[36] pad36;
    int32_t f36;
};

struct s43 {
    signed char[36] pad36;
    int32_t f36;
};

void** fun_4050e9() {
    uint64_t rax1;
    uint64_t v2;
    void** eax3;
    void** rdi4;
    int64_t rax5;
    void** rdx6;
    void* rsp7;
    int32_t* v8;
    void** rax9;
    void** v10;
    int64_t* rsp11;
    void** rax12;
    int64_t* rsp13;
    void** rax14;
    void** rax15;
    void** v16;
    void** v17;
    void** eax18;
    void** rdx19;
    int64_t rax20;
    void** rdx21;
    int64_t rax22;
    void** rax23;
    void** v24;
    void** eax25;
    void** rdx26;
    int64_t rax27;
    void** rax28;
    void** v29;
    void** rax30;

    rax1 = g28;
    v2 = rax1;
    eax3 = g607200;
    *reinterpret_cast<int32_t*>(&rdi4) = 0;
    *reinterpret_cast<int32_t*>(&rdi4 + 2) = 0;
    rax5 = 15 + ((static_cast<int64_t>(reinterpret_cast<int32_t>(eax3)) << 2) + 3);
    rdx6 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax5) % reinterpret_cast<uint16_t>(16));
    rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 56 - reinterpret_cast<uint64_t>(rax5) / reinterpret_cast<uint16_t>(16) * 16);
    v8 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsp7) + 3 >> 2 << 2);
    rax9 = g6071f0;
    v10 = rax9;
    while (v10) {
        if (*reinterpret_cast<void***>(v10 + 4) && *reinterpret_cast<void***>(v10 + 76)) {
            if (!*reinterpret_cast<void***>(v10 + 48)) {
                rdi4 = v10;
                rsp11 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp7) - 8);
                *rsp11 = 0x4051fe;
                rax12 = fun_404910(rdi4);
                rsp7 = reinterpret_cast<void*>(rsp11 + 1);
                rdx6 = rax12;
                *reinterpret_cast<void***>(v10 + 48) = rdx6;
                if (!*reinterpret_cast<void***>(v10 + 48)) 
                    goto addr_40522e_6;
            } else {
                if (!(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v10 + 48) + 20) + 18) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v10 + 48) + 20) + 18) == 0))) {
                    if (*reinterpret_cast<int32_t*>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v10 + 48) + 20) + 18) > 1) 
                        goto addr_40522f_9;
                    rdi4 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v10 + 48) + 20) + 20));
                    rsp13 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp7) - 8);
                    *rsp13 = 0x4051ea;
                    rax14 = fun_401ffa(rdi4, 16, rdx6);
                    rsp7 = reinterpret_cast<void*>(rsp13 + 1);
                    if (rax14 != v10) 
                        goto addr_40522f_9;
                }
            }
        }
        v10 = *reinterpret_cast<void***>(v10);
    }
    addr_40522f_9:
    if (v10) {
        rax15 = g6071f0;
        v16 = rax15;
        while (v16) {
            *reinterpret_cast<void***>(v16 + 52) = *reinterpret_cast<void***>(v16 + 48);
            v16 = *reinterpret_cast<void***>(v16);
        }
        v17 = reinterpret_cast<void**>(0);
        while (eax18 = g607200, reinterpret_cast<int16_t>(v17) < reinterpret_cast<int16_t>(eax18)) {
            rdx19 = g6071f8;
            rax20 = static_cast<int64_t>(reinterpret_cast<int32_t>(v17)) << 5;
            v8[reinterpret_cast<int32_t>(v17)] = (*reinterpret_cast<struct s41**>(reinterpret_cast<uint64_t>(rax20 * 8 - rax20 + reinterpret_cast<uint16_t>(rdx19)) + 40))->f36;
            rdx21 = g6071f8;
            rax22 = static_cast<int64_t>(reinterpret_cast<int32_t>(v17)) << 5;
            (*reinterpret_cast<struct s42**>(reinterpret_cast<uint64_t>(rax22 * 8 - rax22 + reinterpret_cast<uint16_t>(rdx21)) + 40))->f36 = 0;
            v17 = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(v17) + 1);
        }
        rax23 = g6071f0;
        rdi4 = rax23;
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp7) - 8) = 0x4052f7;
        fun_404f90(rdi4, 16, rdi4, 16);
        v24 = reinterpret_cast<void**>(0);
        while (eax25 = g607200, reinterpret_cast<int16_t>(v24) < reinterpret_cast<int16_t>(eax25)) {
            rdx26 = g6071f8;
            rax27 = static_cast<int64_t>(reinterpret_cast<int32_t>(v24)) << 5;
            (*reinterpret_cast<struct s43**>(reinterpret_cast<uint64_t>(rax27 * 8 - rax27 + reinterpret_cast<uint16_t>(rdx26)) + 40))->f36 = v8[reinterpret_cast<int32_t>(v24)];
            v24 = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(v24) + 1);
        }
        rax28 = g6071f0;
        v29 = rax28;
        while (v29) {
            if (!*reinterpret_cast<void***>(v29 + 4) && *reinterpret_cast<void***>(v29 + 48) != *reinterpret_cast<void***>(v29 + 52)) {
                *reinterpret_cast<void***>(v29 + 4) = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v29 + 4)) | 1);
            }
            v29 = *reinterpret_cast<void***>(v29);
        }
    }
    rax30 = reinterpret_cast<void**>(v2 ^ g28);
    if (rax30) {
        rax30 = fun_401110(rdi4, 16, rdi4, 16);
    }
    return rax30;
    addr_40522e_6:
    goto addr_40522f_9;
}

void fun_403861() {
    void** rax1;
    void** v2;
    void** rdi3;

    rax1 = g6071f0;
    v2 = rax1;
    while (v2) {
        if (*reinterpret_cast<void***>(v2 + 76)) {
            rdi3 = *reinterpret_cast<void***>(v2 + 48);
            fun_403766(rdi3, v2);
        }
        v2 = *reinterpret_cast<void***>(v2);
    }
    return;
}

struct s45 {
    signed char[36] pad36;
    int32_t f36;
    void*** f40;
};

struct s46 {
    signed char[8] pad8;
    int32_t f8;
};

struct s44 {
    signed char[32] pad32;
    int32_t f32;
    signed char[4] pad40;
    struct s45* f40;
    signed char[32] pad80;
    struct s46** f80;
    int32_t f88;
};

void fun_40457e() {
    void** v1;
    void** eax2;
    void** rdx3;
    int64_t rax4;
    struct s44* v5;
    int32_t v6;
    void** rdx7;
    void** rdi8;
    void** rsi9;
    void** rax10;
    int32_t v11;
    struct s46* v12;

    v1 = reinterpret_cast<void**>(0);
    while (eax2 = g607200, reinterpret_cast<int16_t>(v1) < reinterpret_cast<int16_t>(eax2)) {
        rdx3 = g6071f8;
        rax4 = static_cast<int64_t>(reinterpret_cast<int32_t>(v1)) << 5;
        v5 = reinterpret_cast<struct s44*>(rax4 * 8 - rax4 + reinterpret_cast<uint16_t>(rdx3));
        v6 = 0;
        while (v5->f40->f36 > v6) {
            rdx7 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(static_cast<int64_t>(v6)) << 3);
            rdi8 = *reinterpret_cast<void***>(reinterpret_cast<int64_t>(v5->f40->f40) + reinterpret_cast<uint16_t>(rdx7));
            rax10 = fun_401ffa(rdi8, rsi9, rdx7);
            if (*reinterpret_cast<void***>(rax10 + 4)) {
                v5->f32 = 1;
            }
            ++v6;
        }
        v11 = 0;
        while (v5->f88 > v11) {
            v12 = *reinterpret_cast<struct s46**>(reinterpret_cast<int64_t>(v5->f80) + (static_cast<int64_t>(v11) << 3));
            if (v12->f8) {
                v5->f32 = 1;
            }
            ++v11;
        }
        v1 = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(v1) + 1);
    }
    return;
}

int64_t XSync = 0x401256;

void fun_401250(void** rdi, void** rsi, void** rdx) {
    goto XSync;
}

int64_t fun_401526(void** rdi, uint32_t esi) {
    uint32_t eax3;
    uint32_t eax4;
    int64_t rax5;

    eax3 = esi;
    eax4 = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax3)) & 15;
    if (eax4 == 2) 
        goto addr_401561_2;
    if (reinterpret_cast<int32_t>(eax4) > reinterpret_cast<int32_t>(2)) {
        if (eax4 == 4) {
            addr_401558_5:
            *reinterpret_cast<void***>(&rax5) = *reinterpret_cast<void***>(rdi + 6);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
        } else {
            if (eax4 == 8) {
                addr_401561_2:
                *reinterpret_cast<void***>(&rax5) = *reinterpret_cast<void***>(rdi + 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
            } else {
                goto addr_40156a_8;
            }
        }
    } else {
        if (eax4 == 1) 
            goto addr_401558_5;
        goto addr_40156a_8;
    }
    addr_40156f_11:
    return rax5;
    addr_40156a_8:
    *reinterpret_cast<void***>(&rax5) = reinterpret_cast<void**>(0);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    goto addr_40156f_11;
}

int64_t strdup = 0x4012e6;

int64_t fun_4012e0(void** rdi) {
    goto strdup;
}

int64_t malloc = 0x401216;

void*** fun_401210(int64_t rdi) {
    goto malloc;
}

int32_t fun_4026dd(struct s13* rdi, int32_t esi) {
    struct s13* v3;
    int32_t v4;
    uint64_t rax5;
    uint32_t eax6;
    int32_t eax7;

    v3 = rdi;
    v4 = esi - 1;
    while (v4 > 0) {
        rax5 = reinterpret_cast<uint64_t>(static_cast<int64_t>(v4));
        eax6 = *reinterpret_cast<uint16_t*>(reinterpret_cast<uint64_t>(v3) + (rax5 + rax5));
        if (*reinterpret_cast<int16_t*>(&eax6) != -1) 
            goto addr_40270c_4;
        --v4;
    }
    eax7 = 0;
    addr_402720_7:
    return eax7;
    addr_40270c_4:
    eax7 = v4;
    goto addr_402720_7;
}

int64_t XRRGetCrtcGamma = 0x4012c6;

struct s12* fun_4012c0(void** rdi, void** rsi) {
    goto XRRGetCrtcGamma;
}

int32_t g607194 = -1;

struct s47 {
    void** f0;
    signed char[2] pad4;
    void** f4;
};

struct s48 {
    void** f0;
    signed char[2] pad4;
    void** f4;
};

struct s49 {
    void** f0;
    signed char[2] pad4;
    void** f4;
};

struct s50 {
    void** f0;
    signed char[2] pad4;
    void** f4;
};

struct s51 {
    void** f0;
    signed char[2] pad4;
    void** f4;
};

struct s52 {
    void** f0;
    signed char[2] pad4;
    void** f4;
};

void fun_402c19(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    void** v7;
    void** v8;
    uint32_t eax9;
    void** rdx10;
    void** rax11;
    void** rax12;
    void** rax13;
    void** v14;
    void** rdi15;
    void** rax16;
    void** rax17;
    int32_t eax18;
    uint64_t rax19;
    uint64_t rax20;
    void** rdi21;
    void** rsi22;
    uint64_t rax23;
    uint64_t rax24;
    void** rdi25;
    void** rsi26;
    int32_t eax27;
    void** rax28;
    void** v29;
    struct s11* rax30;
    int1_t zf31;
    struct s47* rdi32;
    void** rsi33;
    struct s48* rdi34;
    void** rsi35;
    struct s49* rdi36;
    void** rsi37;
    struct s50* rdi38;
    void** rsi39;
    struct s51* rdi40;
    uint32_t eax41;
    struct s52* rdi42;

    v7 = rdi;
    v8 = rsi;
    eax9 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdx + 24));
    if (*reinterpret_cast<int16_t*>(&eax9) != 1 && !*reinterpret_cast<void****>(rdx + 40)) {
        rsi = *reinterpret_cast<void***>(rdx + 8);
        *reinterpret_cast<int32_t*>(&rdi) = reinterpret_cast<int32_t>("Output %s is not disconnected but has no modes\n");
        *reinterpret_cast<int32_t*>(&rdi + 2) = 0;
        fun_401436("Output %s is not disconnected but has no modes\n", rsi, rdx, rcx, r8, r9);
    }
    if (!(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v7 + 12)) & 2)) {
        rsi = v8;
        rdi = v7 + 12;
        fun_401b15(rdi, rsi);
    }
    if (!(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v7 + 12)) & 1)) {
        rsi = *reinterpret_cast<void***>(rdx + 8);
        rdi = v7 + 12;
        fun_401ae9(rdi, rsi);
    }
    rdx10 = rdx;
    *reinterpret_cast<void***>(v7 + 28) = rdx10;
    if (!(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v7 + 4)) & 1)) {
        rdx10 = v7 + 32;
        rsi = *reinterpret_cast<void***>(rdx + 4);
        rdi = rdx10;
        fun_401b15(rdi, rsi);
    }
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v7 + 32) == 2) || *reinterpret_cast<void****>(v7 + 40)) {
        rdi = v7 + 32;
        rax11 = fun_4020b2(rdi, rsi);
        rdx10 = rax11;
        *reinterpret_cast<void***>(v7 + 48) = rdx10;
    } else {
        *reinterpret_cast<void***>(v7 + 48) = reinterpret_cast<void**>(0);
    }
    if (reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v7 + 4)) & 2) {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v7 + 56) == 2) || *reinterpret_cast<void***>(v7 + 64)) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v7 + 56) == 8)) {
                rsi = v7 + 56;
                rdi = v7;
                rax12 = fun_402389(rdi, rsi);
                rdx10 = rax12;
                *reinterpret_cast<void***>(v7 + 76) = rdx10;
            } else {
                rdi = v7;
                rax13 = fun_40252c(rdi);
                rdx10 = rax13;
                *reinterpret_cast<void***>(v7 + 76) = rdx10;
            }
        } else {
            *reinterpret_cast<void***>(v7 + 76) = reinterpret_cast<void**>(0);
        }
    } else {
        v14 = reinterpret_cast<void**>(0);
        if (*reinterpret_cast<void***>(rdx + 4)) {
            rdi15 = *reinterpret_cast<void***>(rdx + 4);
            rax16 = fun_402196(rdi15, rsi);
            v14 = rax16;
        }
        if (!v14 || !*reinterpret_cast<void***>(v14 + 20)) {
            if (!*reinterpret_cast<void***>(v7 + 48)) {
                *reinterpret_cast<int32_t*>(&rsi) = 0;
                *reinterpret_cast<int32_t*>(&rsi + 2) = 0;
                rdi = v7 + 56;
                fun_401b15(rdi, 0);
            } else {
                rdx10 = v7 + 56;
                rsi = *reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v7 + 48) + 20) + 12);
                rdi = rdx10;
                fun_401b15(rdi, rsi);
            }
        } else {
            rdx10 = v7 + 56;
            rsi = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v14 + 20) + 12);
            rdi = rdx10;
            fun_401b15(rdi, rsi);
        }
        if (!*reinterpret_cast<void***>(v7 + 64)) {
            *reinterpret_cast<void***>(v7 + 76) = reinterpret_cast<void**>(0);
        } else {
            rdi = *reinterpret_cast<void***>(v7 + 64);
            rax17 = fun_402329(rdi, rsi);
            rdx10 = rax17;
            *reinterpret_cast<void***>(v7 + 76) = rdx10;
        }
    }
    if (!(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v7 + 4)) & 8)) {
        if (!*reinterpret_cast<void***>(v7 + 48)) {
            *reinterpret_cast<void***>(v7 + 0x68) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(v7 + 0x6a) = reinterpret_cast<void**>(0);
        } else {
            *reinterpret_cast<void***>(v7 + 0x68) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v7 + 48) + 20) + 4);
            rdx10 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v7 + 48) + 20) + 6);
            *reinterpret_cast<void***>(v7 + 0x6a) = rdx10;
        }
    }
    if (!(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v7 + 4)) & 16)) {
        rdx10 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(v7 + 0x6c)) & 0xfffffff0);
        *reinterpret_cast<uint16_t*>(v7 + 0x6c) = *reinterpret_cast<uint16_t*>(&rdx10);
        if (!*reinterpret_cast<void***>(v7 + 48)) {
            *reinterpret_cast<uint16_t*>(v7 + 0x6c) = 1;
        } else {
            rdx10 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v7 + 48) + 20) + 16))) & 15 | static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(v7 + 0x6c)));
            *reinterpret_cast<uint16_t*>(v7 + 0x6c) = *reinterpret_cast<uint16_t*>(&rdx10);
        }
    }
    if (!(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v7 + 4)) & 32) && (rdx10 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(v7 + 0x6c)) & 0xffffffcf), *reinterpret_cast<uint16_t*>(v7 + 0x6c) = *reinterpret_cast<uint16_t*>(&rdx10), !!*reinterpret_cast<void***>(v7 + 48))) {
        rdx10 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v7 + 48) + 20) + 16))) & 48 | static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(v7 + 0x6c)));
        *reinterpret_cast<uint16_t*>(v7 + 0x6c) = *reinterpret_cast<uint16_t*>(&rdx10);
    }
    if (!(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v7 + 4)) & 0x800)) {
        rdi = v7;
        fun_402722(rdi);
    }
    if (!(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v7 + 4)) & 0x200)) {
        if (!*reinterpret_cast<void***>(v7 + 48)) {
            fun_401cd1(v7 + 0x94, rsi);
            goto addr_40323e_43;
        } else {
            rsi = *reinterpret_cast<void***>(v7 + 48) + 48;
            fun_401def(v7 + 0x94, rsi);
            goto addr_40323e_43;
        }
    }
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(v7 + 0x8e) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(v7 + 0x8e) == 0) || !*reinterpret_cast<void***>(v7 + 76)) {
        addr_40323e_43:
        if (reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v7 + 4)) & 0x2000) {
            eax18 = g607194;
            *reinterpret_cast<int64_t*>(v7 + 0xa8) = *reinterpret_cast<int64_t*>(eax18 * 8 + 0x6071a0);
        }
    } else {
        __asm__("pxor xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, eax");
        *reinterpret_cast<void***>(&rax19) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v7 + 76) + 4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = 0;
        if (reinterpret_cast<int64_t>(rax19) < reinterpret_cast<int64_t>(0)) {
            *reinterpret_cast<uint32_t*>(&rax20) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(&rax19)) & 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = 0;
            rdx10 = reinterpret_cast<void**>(rax19 >> 1 | rax20);
            __asm__("pxor xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, rdx");
            __asm__("addsd xmm0, xmm0");
        } else {
            __asm__("pxor xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, rax");
        }
        __asm__("divsd xmm1, xmm0");
        __asm__("movapd xmm0, xmm1");
        *reinterpret_cast<void***>(rdi) = *reinterpret_cast<void***>(rsi);
        rdi21 = rdi + 2;
        rsi22 = rsi + 2;
        __asm__("pxor xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, eax");
        *reinterpret_cast<void***>(&rax23) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v7 + 76) + 6);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax23) + 4) = 0;
        if (reinterpret_cast<int64_t>(rax23) < reinterpret_cast<int64_t>(0)) {
            *reinterpret_cast<uint32_t*>(&rax24) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(&rax23)) & 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = 0;
            rdx10 = reinterpret_cast<void**>(rax23 >> 1 | rax24);
            __asm__("pxor xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, rdx");
            __asm__("addsd xmm0, xmm0");
        } else {
            __asm__("pxor xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, rax");
        }
        __asm__("divsd xmm1, xmm0");
        __asm__("movapd xmm0, xmm1");
        *reinterpret_cast<void***>(rdi21) = *reinterpret_cast<void***>(rsi22);
        rdi25 = rdi21 + 2;
        rsi26 = rsi22 + 2;
        eax27 = g6071e0;
        if (eax27) {
            rax28 = *reinterpret_cast<void***>(v7 + 16);
            *reinterpret_cast<void***>(rdi25) = *reinterpret_cast<void***>(rsi26);
            rdx10 = v29;
            __asm__("movapd xmm1, xmm0");
            *reinterpret_cast<void***>(rdi25 + 2) = *reinterpret_cast<void***>(rsi26 + 2);
            rsi26 = rax28;
            fun_401120("scaling %s by %lfx%lf\n", rsi26);
        }
        rax30 = reinterpret_cast<struct s11*>(v7 + 0x94);
        zf31 = rax30 == 0;
        fun_401cd1(rax30, rsi26);
        rax30->f0 = *reinterpret_cast<void***>(rsi26);
        rdi32 = reinterpret_cast<struct s47*>(&rax30->f4);
        rsi33 = rsi26 + 2;
        rdi32->f0 = *reinterpret_cast<void***>(rsi33);
        rdi34 = reinterpret_cast<struct s48*>(&rdi32->f4);
        rsi35 = rsi33 + 2;
        __asm__("mulsd xmm0, xmm1");
        __asm__("cvttsd2si edx, xmm0");
        *reinterpret_cast<void***>(v7 + 0x94) = rdx10;
        rdi34->f0 = *reinterpret_cast<void***>(rsi35);
        rdi36 = reinterpret_cast<struct s49*>(&rdi34->f4);
        rsi37 = rsi35 + 2;
        rdi36->f0 = *reinterpret_cast<void***>(rsi37);
        rdi38 = reinterpret_cast<struct s50*>(&rdi36->f4);
        rsi39 = rsi37 + 2;
        __asm__("mulsd xmm0, xmm1");
        __asm__("cvttsd2si edx, xmm0");
        *reinterpret_cast<void***>(v7 + 0x9c) = rdx10;
        *reinterpret_cast<int32_t*>(v7 + 0xa4) = 0x10000;
        rdi38->f0 = *reinterpret_cast<void***>(rsi39);
        rdi40 = reinterpret_cast<struct s51*>(&rdi38->f4);
        rsi = rsi39 + 2;
        __asm__("ucomisd xmm0, [rbp-0x10]");
        if (__intrinsic()) 
            goto addr_403201_83; else 
            goto addr_4031d4_84;
    }
    if (!(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v7 + 4)) & 0x1000)) {
        eax41 = fun_402691(v7, rsi);
        *reinterpret_cast<uint32_t*>(v7 + 0xbc) = eax41;
    }
    return;
    addr_403201_83:
    *reinterpret_cast<int64_t*>(v7 + 0xa8) = reinterpret_cast<int64_t>("bilinear");
    addr_403221_88:
    *reinterpret_cast<int32_t*>(v7 + 0xac) = 0;
    *reinterpret_cast<int64_t*>(v7 + 0xb0) = 0;
    goto addr_40323e_43;
    addr_4031d4_84:
    rdi40->f0 = *reinterpret_cast<void***>(rsi);
    rdi42 = reinterpret_cast<struct s52*>(&rdi40->f4);
    rsi = rsi + 2;
    __asm__("ucomisd xmm0, [rbp-0x10]");
    if (!zf31) 
        goto addr_403201_83;
    rdi42->f0 = *reinterpret_cast<void***>(rsi);
    rsi = rsi + 2;
    __asm__("ucomisd xmm0, [rbp-0x8]");
    if (__intrinsic()) 
        goto addr_403201_83;
    rdi42->f4 = *reinterpret_cast<void***>(rsi);
    rsi = rsi + 2;
    __asm__("ucomisd xmm0, [rbp-0x8]");
    if (!zf31) 
        goto addr_403201_83;
    *reinterpret_cast<int64_t*>(v7 + 0xa8) = reinterpret_cast<int64_t>("nearest");
    goto addr_403221_88;
}

int64_t XRRFreeGamma = 0x401286;

void** fun_401280(struct s12* rdi, int32_t* rsi) {
    goto XRRFreeGamma;
}

int32_t g607238 = 0;

void fun_401270(void** rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9);

void** fun_401140(void** rdi, int64_t rsi);

int32_t fun_403294(int32_t edi) {
    int32_t eax2;
    void** rax3;
    int64_t rsi4;
    void** rax5;
    int64_t rdx6;
    void** rax7;
    void** rax8;
    int64_t rdx9;
    void** rax10;
    void** rax11;
    void** rax12;

    eax2 = g607238;
    if (eax2) {
        rax3 = g607208;
        if (!rax3) {
            rsi4 = g6071d8;
            rax5 = g6071d0;
            fun_401270(rax5, rsi4, 0x607228, 0x607230, 0x60722c, 0x607234);
            if (!edi) {
                rdx6 = g6071d8;
                rax7 = g6071d0;
                rax8 = fun_401140(rax7, rdx6);
                g607208 = rax8;
            } else {
                rdx9 = g6071d8;
                rax10 = g6071d0;
                rax11 = fun_401240(rax10, rdx9);
                g607208 = rax11;
            }
            rax12 = g607208;
            if (!rax12) {
                *reinterpret_cast<int32_t*>(&rax12) = 1;
            }
        } else {
            *reinterpret_cast<int32_t*>(&rax12) = 0;
        }
    } else {
        *reinterpret_cast<int32_t*>(&rax12) = 1;
    }
    return *reinterpret_cast<int32_t*>(&rax12);
}

int64_t XRRGetScreenSizeRange = 0x401276;

void fun_401270(void** rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    goto XRRGetScreenSizeRange;
}

int64_t XRRGetScreenResources = 0x401146;

void** fun_401140(void** rdi, int64_t rsi) {
    goto XRRGetScreenResources;
}

int32_t fun_403b32(void** rdi, void** rsi) {
    void** v3;
    int32_t eax4;
    int64_t rdi5;
    void** rax6;
    void** v7;
    void*** v8;
    void** v9;
    int32_t eax10;
    int32_t eax11;
    int64_t rdi12;
    uint32_t eax13;
    int64_t rcx14;
    void* r9_15;
    int64_t r8_16;
    void** rdx17;
    void** rsi18;
    void** rax19;
    void** rcx20;
    int32_t eax21;
    int32_t v22;
    int32_t eax23;
    void** rax24;
    int32_t eax25;
    void** r12d26;
    void** ebx27;
    void** rdi28;
    void** rdx29;
    int64_t r8_30;
    int64_t rcx31;
    void** rsi32;
    void*** v33;

    v3 = rdi;
    if (!*reinterpret_cast<void***>(v3 + 16) || !*reinterpret_cast<void***>(v3 + 24)) {
        eax4 = 0;
    } else {
        rdi5 = reinterpret_cast<int32_t>(*reinterpret_cast<void****>(v3 + 44));
        rax6 = fun_4011a0(rdi5, 8);
        v7 = rax6;
        if (v7) {
            v8 = reinterpret_cast<void***>(0);
            while (reinterpret_cast<int32_t>(*reinterpret_cast<void****>(v3 + 44)) > reinterpret_cast<int32_t>(v8)) {
                *reinterpret_cast<void***>(v7 + reinterpret_cast<int32_t>(v8) * 4) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(*reinterpret_cast<void****>(v3 + 40)) + (static_cast<int64_t>(reinterpret_cast<int32_t>(v8)) << 3)) + 20);
                v8 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(v8) + 1);
            }
            v9 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v3 + 24));
            eax10 = g6071e0;
            if (!eax10) 
                goto addr_403c98_8; else 
                goto addr_403bff_9;
        } else {
            eax4 = 11;
        }
    }
    addr_403d7d_11:
    return eax4;
    addr_403c98_8:
    eax11 = fun_401e2c(v3 + 48, v3 + 80);
    if (!eax11) {
        fun_4039b6(v3, v3 + 80);
    }
    *reinterpret_cast<void****>(&rdi12) = *reinterpret_cast<void****>(v3 + 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = 0;
    eax13 = reinterpret_cast<uint16_t>(*reinterpret_cast<void****>(v3 + 36));
    *reinterpret_cast<uint32_t*>(&rcx14) = *reinterpret_cast<uint16_t*>(&eax13);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = 0;
    *reinterpret_cast<void***>(&r9_15) = *reinterpret_cast<void***>(v3 + 34);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_15) + 4) = 0;
    *reinterpret_cast<void***>(&r8_16) = *reinterpret_cast<void***>(v3 + 32);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_16) + 4) = 0;
    rdx17 = *reinterpret_cast<void***>(v3 + 8);
    rsi18 = g607208;
    rax19 = g6071d0;
    *reinterpret_cast<int32_t*>(&rcx20) = 0;
    *reinterpret_cast<int32_t*>(&rcx20 + 2) = 0;
    eax21 = fun_401200(rax19, rsi18, rdx17, 0, r8_16, r9_15, v9, rcx14, v7, rdi12);
    v22 = eax21;
    if (!v22 && (*reinterpret_cast<void***>(v3 + 28) && (eax23 = g60723c, !!eax23))) {
        rcx20 = *reinterpret_cast<void***>(v3 + 28);
        rdx17 = *reinterpret_cast<void***>(v3 + 8);
        rsi18 = g607208;
        rax24 = g6071d0;
        eax25 = fun_4012d0(rax24, rsi18, rdx17, rcx20, r8_16, r9_15);
        v22 = eax25;
    }
    fun_401070(v7, rsi18, rdx17, rcx20, r8_16, r9_15);
    eax4 = v22;
    goto addr_403d7d_11;
    addr_403bff_9:
    r12d26 = *reinterpret_cast<void***>(v3 + 34);
    ebx27 = *reinterpret_cast<void***>(v3 + 32);
    rdi28 = *reinterpret_cast<void***>(v3 + 24);
    fun_4019a9(rdi28, 8);
    rdx29 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v3 + 24) + 28);
    *reinterpret_cast<void***>(&r8_30) = r12d26;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_30) + 4) = 0;
    *reinterpret_cast<void***>(&rcx31) = ebx27;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = 0;
    rsi32 = *reinterpret_cast<void***>(v3 + 12);
    *reinterpret_cast<int32_t*>(&rsi32 + 2) = 0;
    fun_401120("crtc %d: %12s %6.2f +%d+%d", rsi32, "crtc %d: %12s %6.2f +%d+%d", rsi32);
    v33 = reinterpret_cast<void***>(0);
    while (reinterpret_cast<int32_t>(*reinterpret_cast<void****>(v3 + 44)) > reinterpret_cast<int32_t>(v33)) {
        rdx29 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v33))) << 3);
        rsi32 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(*reinterpret_cast<void****>(v3 + 40)) + reinterpret_cast<uint16_t>(rdx29)) + 16);
        fun_401120(" \"%s\"", rsi32);
        v33 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(v33) + 1);
    }
    fun_401080(10, rsi32, rdx29, rcx31, r8_30);
    goto addr_403c98_8;
}

int64_t calloc = 0x4011a6;

void** fun_4011a0(int64_t rdi, void** rsi) {
    goto calloc;
}

void** fun_404910(void** rdi) {
    void** v2;
    int32_t v3;
    void** rdi4;
    void** rsi5;
    void** rax6;
    int32_t eax7;
    void** rax8;

    v2 = rdi;
    v3 = 0;
    while (*reinterpret_cast<int32_t*>(*reinterpret_cast<void***>(v2 + 28) + 26) > v3) {
        rdi4 = *reinterpret_cast<void***>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v2 + 28) + 28)) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(v3)) << 3));
        rax6 = fun_402196(rdi4, rsi5);
        rsi5 = v2;
        eax7 = fun_404673(rax6, rsi5);
        if (eax7) 
            goto addr_404964_4;
        ++v3;
    }
    *reinterpret_cast<int32_t*>(&rax8) = 0;
    *reinterpret_cast<int32_t*>(&rax8 + 2) = 0;
    addr_404983_7:
    return rax8;
    addr_404964_4:
    rax8 = rax6;
    goto addr_404983_7;
}

int64_t fun_401571(void** rdi, uint32_t esi) {
    uint32_t eax3;
    uint32_t eax4;
    int64_t rax5;

    eax3 = esi;
    eax4 = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax3)) & 15;
    if (eax4 == 2) 
        goto addr_4015ac_2;
    if (reinterpret_cast<int32_t>(eax4) > reinterpret_cast<int32_t>(2)) {
        if (eax4 == 4) {
            addr_4015a3_5:
            *reinterpret_cast<void***>(&rax5) = *reinterpret_cast<void***>(rdi + 4);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
        } else {
            if (eax4 == 8) {
                addr_4015ac_2:
                *reinterpret_cast<void***>(&rax5) = *reinterpret_cast<void***>(rdi + 6);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
            } else {
                goto addr_4015b5_8;
            }
        }
    } else {
        if (eax4 == 1) 
            goto addr_4015a3_5;
        goto addr_4015b5_8;
    }
    addr_4015ba_11:
    return rax5;
    addr_4015b5_8:
    *reinterpret_cast<void***>(&rax5) = reinterpret_cast<void**>(0);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    goto addr_4015ba_11;
}

void fun_404f65(void** rdi, void** rsi) {
    void** v3;

    v3 = rdi;
    while (v3) {
        *reinterpret_cast<void***>(v3 + 48) = reinterpret_cast<void**>(0);
        v3 = *reinterpret_cast<void***>(v3);
    }
    return;
}

int64_t XRRGetOutputInfo = 0x401326;

void** fun_401320(void** rdi, void** rsi, void** rdx) {
    goto XRRGetOutputInfo;
}

void** fun_4011c0(int64_t rdi);

int32_t g607240 = 0;

int32_t g607244 = 0;

void fun_4012f0(void** rdi, void** rsi, void** rdx, void** rcx);

void** g1;

void** fun_4054a5(void** rdi) {
    void* rbp2;
    uint64_t rax3;
    void** v4;
    void** rax5;
    void** rax6;
    void* eax7;
    void** rax8;
    void** rax9;
    void* eax10;
    void** rax11;
    void** rdi12;
    void** rax13;
    void** rax14;
    void* edx15;
    void** rdx16;
    void** rsi17;
    void** eax18;
    void** rdi19;
    void** rax20;
    void** v21;
    void** rax22;
    int32_t eax23;
    void** rax24;
    void** rcx25;
    int32_t eax26;
    void** rax27;
    int32_t v28;
    int32_t v29;
    int32_t v30;
    int32_t v31;
    int32_t v32;
    int32_t v33;
    int32_t v34;
    int32_t v35;
    int32_t v36;
    int32_t v37;
    int32_t v38;
    int32_t v39;
    void** rdi40;
    int32_t eax41;
    void** rax42;
    void** rax43;
    void** rsi44;
    void** eax45;
    void* eax46;
    void* eax47;
    void** rax48;
    void* edx49;
    void* eax50;
    int1_t cf51;
    void** rax52;
    void* edx53;
    void* eax54;
    int1_t zf55;
    void** v56;
    void** rax57;
    void** v58;
    void** rdi59;
    void*** rsi60;
    void** rdi61;
    void* edx62;
    void* eax63;
    void** rdi64;
    void** rdi65;
    void* eax66;
    void** v67;
    void** rdi68;
    void** v69;
    void** rax70;
    void* edx71;
    void** rax72;
    void* edx73;
    void** rax74;
    void** rax75;

    rbp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax3 = g28;
    v4 = reinterpret_cast<void**>(0);
    rax5 = fun_4011c0(0);
    g6071d0 = rax5;
    rax6 = g6071d0;
    if (rax6) {
        eax7 = g607190;
        if (reinterpret_cast<int32_t>(eax7) < reinterpret_cast<int32_t>(0)) {
            rax8 = g6071d0;
            g607190 = *reinterpret_cast<void**>(rax8 + 0x70);
        }
        rax9 = g6071d0;
        eax10 = g607190;
        if (reinterpret_cast<int32_t>(*reinterpret_cast<void**>(rax9 + 0x72)) <= reinterpret_cast<int32_t>(eax10)) 
            goto addr_40555e_5;
    } else {
        rax11 = stderr;
        *reinterpret_cast<int32_t*>(&rdi12) = reinterpret_cast<int32_t>("Can't open display\n");
        *reinterpret_cast<int32_t*>(&rdi12 + 2) = 0;
        fun_4012b0("Can't open display\n", 1, 19, rax11);
        rax13 = reinterpret_cast<void**>(1);
        *reinterpret_cast<int32_t*>(&rax13 + 2) = 0;
        goto addr_4059fe_7;
    }
    rax14 = g6071d0;
    edx15 = g607190;
    g6071d8 = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rax14 + 0x74)) + (static_cast<int64_t>(reinterpret_cast<int32_t>(edx15)) << 7) + 16);
    fun_403294(1);
    *reinterpret_cast<void**>(&rdx16) = reinterpret_cast<void*>(0x80);
    *reinterpret_cast<int32_t*>(&rdx16 + 2) = 0;
    *reinterpret_cast<int32_t*>(&rsi17) = 0;
    *reinterpret_cast<int32_t*>(&rsi17 + 2) = 0;
    fun_401150(reinterpret_cast<int64_t>(rbp2) + 0xffffffffffffff70, 0, 0x80);
    eax18 = fun_4053bb(reinterpret_cast<int64_t>(rbp2) - 0x90, 0, 0x80);
    v4 = eax18;
    if (!reinterpret_cast<int1_t>(v4 == 1)) {
        rdi19 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp2) + 0xffffffffffffff70);
        rax20 = fun_402056(rdi19, 0, 0x80);
        v21 = rax20;
        if (v21) {
            addr_405673_10:
            fun_401bfe(v21 + 56, rdi, 3);
            *reinterpret_cast<void***>(v21 + 4) = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v21 + 4)) | 2);
            rax22 = g6071d0;
            eax23 = fun_4010a0(rax22, reinterpret_cast<int64_t>(rbp2) - 0xb0, reinterpret_cast<int64_t>(rbp2) - 0xac);
            if (!eax23 || (rax24 = g6071d0, rdx16 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp2) + 0xffffffffffffff5c), rcx25 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp2) + 0xffffffffffffff58), rsi17 = rcx25, eax26 = fun_4010b0(rax24, rsi17, rdx16), !eax26)) {
                rax27 = stderr;
                rcx25 = rax27;
                *reinterpret_cast<void**>(&rdx16) = reinterpret_cast<void*>(24);
                *reinterpret_cast<int32_t*>(&rdx16 + 2) = 0;
                *reinterpret_cast<int32_t*>(&rsi17) = 1;
                *reinterpret_cast<int32_t*>(&rsi17 + 2) = 0;
                fun_4012b0("RandR extension missing\n", 1, 24, rcx25);
            } else {
                if (v28 > 1 || v29 == 1 && v30 > 1) {
                    g607238 = 1;
                }
                if (v31 > 1 || v32 == 1 && v33 > 2) {
                    g60723c = 1;
                }
                if (v34 > 1 || v35 == 1 && v36 > 3) {
                    g607240 = 1;
                }
                if (v37 > 1 || v38 == 1 && v39 > 4) {
                    g607244 = 1;
                }
                *reinterpret_cast<int32_t*>(&rdi40) = 1;
                *reinterpret_cast<int32_t*>(&rdi40 + 2) = 0;
                eax41 = fun_403294(1);
                if (eax41 == 1) 
                    goto addr_4059e5_21; else 
                    goto addr_4057d8_22;
            }
        } else {
            rax42 = fun_401edc(rdi19, 0, 0x80);
            v21 = rax42;
            if (v21) {
                fun_401bfe(v21 + 12, reinterpret_cast<int64_t>(rbp2) + 0xffffffffffffff70, 3);
                goto addr_405673_10;
            }
        }
    } else {
        rsi17 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp2) + 0xffffffffffffff70);
        fun_401120("cannot find target output:%s.\n", rsi17, "cannot find target output:%s.\n", rsi17);
    }
    addr_4059e9_27:
    rax43 = g6071d0;
    rdi12 = rax43;
    fun_4012f0(rdi12, rsi17, rdx16, rcx25);
    rax13 = v4;
    *reinterpret_cast<int32_t*>(&rax13 + 2) = 0;
    addr_4059fe_7:
    rsi44 = reinterpret_cast<void**>(rax3 ^ g28);
    if (rsi44) {
        rax13 = fun_401110(rdi12, rsi44, rdi12, rsi44);
    }
    return rax13;
    addr_4059e5_21:
    goto addr_4059e9_27;
    addr_4057d8_22:
    eax45 = fun_403352();
    if (eax45 == 1) {
        goto addr_4059e9_27;
    } else {
        fun_404211();
        fun_404985();
        fun_404d5d();
        fun_4050e9();
        fun_403861();
        fun_40457e();
        eax46 = g607218;
        if (!eax46 || (eax47 = g60721c, !eax47)) {
            rax48 = g6071d0;
            edx49 = g607190;
            *reinterpret_cast<void**>(&rdx16) = *reinterpret_cast<void**>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rax48 + 0x74)) + (static_cast<int64_t>(reinterpret_cast<int32_t>(edx49)) << 7) + 24);
            *reinterpret_cast<int32_t*>(&rdx16 + 2) = 0;
            eax50 = g607210;
            cf51 = reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rdx16)) < reinterpret_cast<uint32_t>(eax50);
            if (*reinterpret_cast<void**>(&rdx16) != eax50 || (rax52 = g6071d0, edx53 = g607190, *reinterpret_cast<void**>(&rdx16) = *reinterpret_cast<void**>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rax52 + 0x74)) + (static_cast<int64_t>(reinterpret_cast<int32_t>(edx53)) << 7) + 28), *reinterpret_cast<int32_t*>(&rdx16 + 2) = 0, eax54 = g607214, cf51 = reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rdx16)) < reinterpret_cast<uint32_t>(eax54), zf55 = *reinterpret_cast<void**>(&rdx16) == eax54, !zf55)) {
                addr_405892_33:
            } else {
                g1 = v56;
                rdi40 = reinterpret_cast<void**>(5);
                rsi17 = rsi17 + 2;
                __asm__("pxor xmm1, xmm1");
                __asm__("ucomisd xmm0, xmm1");
                if (__intrinsic()) 
                    goto addr_405892_33;
                __asm__("pxor xmm1, xmm1");
                __asm__("ucomisd xmm0, xmm1");
                if (zf55) 
                    goto addr_405970_39; else 
                    goto addr_405892_33;
            }
        } else {
            addr_4059be_40:
            fun_40402f(rdi40, rsi17, rdx16);
            if (!0) {
                rax57 = g6071d0;
                *reinterpret_cast<int32_t*>(&rsi17) = 0;
                *reinterpret_cast<int32_t*>(&rsi17 + 2) = 0;
                fun_401250(rax57, 0, rdx16);
                goto addr_4059e9_27;
            }
        }
    }
    *reinterpret_cast<void***>(rdi40) = v58;
    rdi59 = rdi40 + 2;
    rsi60 = reinterpret_cast<void***>(rsi17 + 2);
    __asm__("pxor xmm0, xmm0");
    __asm__("ucomisd xmm0, xmm1");
    if (!cf51) {
        __asm__("pxor xmm0, xmm0");
        __asm__("cvtsi2sd xmm0, eax");
        *reinterpret_cast<void***>(rdi59) = v4;
        rdi61 = rdi59 + 2;
        __asm__("mulsd xmm0, xmm1");
        edx62 = g607190;
        rdx16 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(edx62))) << 7);
        __asm__("pxor xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, eax");
        __asm__("divsd xmm0, xmm1");
        *reinterpret_cast<void***>(rdi61) = reinterpret_cast<void**>(0);
        rdi59 = rdi61 + 2;
        rsi60 = rsi60 + 2 + 2;
    }
    eax63 = g607210;
    __asm__("pxor xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, eax");
    *reinterpret_cast<void***>(rdi59) = v21;
    rdi64 = rdi59 + 2;
    __asm__("mulsd xmm0, xmm1");
    *reinterpret_cast<void***>(rdi64) = (&v21)[2];
    rdi65 = rdi64 + 2;
    __asm__("divsd xmm0, xmm1");
    __asm__("cvttsd2si eax, xmm0");
    g607218 = eax63;
    eax66 = g607214;
    __asm__("pxor xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, eax");
    *reinterpret_cast<void***>(rdi65) = v67;
    rdi68 = rdi65 + 2;
    __asm__("mulsd xmm0, xmm1");
    *reinterpret_cast<void***>(rdi68) = v69;
    rdi40 = rdi68 + 2;
    rsi17 = reinterpret_cast<void**>(rsi60 + 2 + 2 + 2 + 2);
    __asm__("divsd xmm0, xmm1");
    __asm__("cvttsd2si eax, xmm0");
    g60721c = eax66;
    goto addr_4059be_40;
    addr_405970_39:
    rax70 = g6071d0;
    edx71 = g607190;
    g607218 = *reinterpret_cast<void**>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rax70 + 0x74)) + (static_cast<int64_t>(reinterpret_cast<int32_t>(edx71)) << 7) + 32);
    rax72 = g6071d0;
    edx73 = g607190;
    rdx16 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(edx73))) << 7);
    g60721c = *reinterpret_cast<void**>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rax72 + 0x74)) + reinterpret_cast<uint16_t>(rdx16)) + 36);
    goto addr_4059be_40;
    addr_40555e_5:
    rax74 = g6071d0;
    *reinterpret_cast<void**>(&rcx25) = *reinterpret_cast<void**>(rax74 + 0x72);
    *reinterpret_cast<int32_t*>(&rcx25 + 2) = 0;
    *reinterpret_cast<void**>(&rdx16) = g607190;
    *reinterpret_cast<int32_t*>(&rdx16 + 2) = 0;
    rax75 = stderr;
    *reinterpret_cast<int32_t*>(&rsi17) = reinterpret_cast<int32_t>("Invalid screen number %d (display has %d)\n");
    *reinterpret_cast<int32_t*>(&rsi17 + 2) = 0;
    fun_4011d0(rax75, "Invalid screen number %d (display has %d)\n", rdx16, rcx25);
    goto addr_4059e9_27;
}

int64_t XCloseDisplay = 0x4012f6;

void fun_4012f0(void** rdi, void** rsi, void** rdx, void** rcx) {
    goto XCloseDisplay;
}

int64_t XOpenDisplay = 0x4011c6;

void** fun_4011c0(int64_t rdi) {
    goto XOpenDisplay;
}

int64_t XRRGetCrtcInfo = 0x401096;

struct s40* fun_401090(void** rdi, void** rsi, void** rdx) {
    goto XRRGetCrtcInfo;
}

struct s53 {
    signed char[8] pad8;
    void** f8;
};

int64_t fun_405a14(int32_t edi, struct s53* rsi);

void fun_405a40(int32_t edi, int64_t rsi, int64_t rdx);

void fun_405ab0();

void fun_401340() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    fun_401180(fun_405a14, __return_address(), rsp1, fun_405a40, fun_405ab0, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void _fini() {
    return;
}

void fun_4013e5() {
    int64_t v1;

    goto v1;
}

int64_t g606de0 = 0;

void XRRGetOutputInfo();

void fun_401410() {
    int1_t zf1;

    zf1 = g606de0 == 0;
    if (!(zf1 || 1)) {
        XRRGetOutputInfo();
    }
    if (1) 
        goto 0x4013e8;
    if (1) 
        goto 0x4013e8;
    goto 0;
}

int64_t fun_405a14(int32_t edi, struct s53* rsi) {
    void** rdi3;

    rdi3 = rsi->f8;
    fun_4054a5(rdi3);
    return 0;
}

void fun_405ab0() {
    return;
}

int64_t g607010 = 0;

void fun_401186() {
    goto g607010;
}

signed char g6071c8 = 0;

int64_t fun_4013f0() {
    int1_t zf1;
    int64_t rax2;

    zf1 = g6071c8 == 0;
    if (zf1) {
        rax2 = fun_401370();
        g6071c8 = 1;
    }
    return rax2;
}

void fun_4012b6() {
    goto 0x401060;
}

void fun_401296() {
    goto 0x401060;
}

void fun_401116() {
    goto 0x401060;
}

void fun_4012a6() {
    goto 0x401060;
}

void fun_401316() {
    goto 0x401060;
}

void fun_401226() {
    goto 0x401060;
}

void fun_4011b6() {
    goto 0x401060;
}

void fun_4011e6() {
    goto 0x401060;
}

void fun_4010e6() {
    goto 0x401060;
}

void fun_401166() {
    goto 0x401060;
}

void fun_4010c6() {
    goto 0x401060;
}

void fun_401126() {
    goto 0x401060;
}

void fun_401246() {
    goto 0x401060;
}

void fun_401156() {
    goto 0x401060;
}

void fun_401236() {
    goto 0x401060;
}

void fun_401196() {
    goto 0x401060;
}

void fun_401076() {
    goto 0x401060;
}

void fun_401306() {
    goto 0x401060;
}

void fun_401136() {
    goto 0x401060;
}

void fun_401266() {
    goto 0x401060;
}

void fun_4010f6() {
    goto 0x401060;
}

void fun_401206() {
    goto 0x401060;
}

void fun_4010d6() {
    goto 0x401060;
}

void fun_401086() {
    goto 0x401060;
}

void fun_4012d6() {
    goto 0x401060;
}

void fun_401176() {
    goto 0x401060;
}

void fun_4011d6() {
    goto 0x401060;
}

void fun_401106() {
    goto 0x401060;
}

void fun_4011f6() {
    goto 0x401060;
}

void fun_4010a6() {
    goto 0x401060;
}

void fun_4010b6() {
    goto 0x401060;
}

void fun_401256() {
    goto 0x401060;
}

void fun_405a40(int32_t edi, int64_t rsi, int64_t rdx) {
    int32_t r15d4;
    int64_t r14_5;
    int64_t r13_6;
    int64_t rbx7;
    int64_t rdi8;

    r15d4 = edi;
    r14_5 = rsi;
    r13_6 = rdx;
    _init();
    if (!0) {
        *reinterpret_cast<int32_t*>(&rbx7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r15d4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x606dd0 + rbx7 * 8)(rdi8, r14_5, r13_6);
            ++rbx7;
        } while (rbx7 != 1);
    }
    return;
}

void fun_4012e6() {
    goto 0x401060;
}

void fun_401216() {
    goto 0x401060;
}

void fun_4012c6() {
    goto 0x401060;
}

void fun_401286() {
    goto 0x401060;
}

void fun_401276() {
    goto 0x401060;
}

void fun_401146() {
    goto 0x401060;
}

void fun_4011a6() {
    goto 0x401060;
}

void fun_401326() {
    goto 0x401060;
}

void fun_4012f6() {
    goto 0x401060;
}

void fun_4011c6() {
    goto 0x401060;
}

void fun_401096() {
    goto 0x401060;
}
