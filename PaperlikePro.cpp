
int64_t __gmon_start__ = 0;

void fun_403080();

void _init() {
    int64_t rax1;

    rax1 = __gmon_start__;
    if (rax1) {
        fun_403080();
    }
    return;
}

void fun_403080() {
    goto __gmon_start__;
}

int64_t __libc_start_main = 0x402a26;

void fun_402a20(int64_t rdi, int64_t rsi, void* rdx, int64_t rcx, int64_t r8, int64_t r9, void** a7, int64_t a8) {
    goto __libc_start_main;
}

int64_t fun_4030c0() {
    int64_t rax1;

    rax1 = 7;
    if (1 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

uint64_t g28;

void** fun_4028d0(void** rdi, void** rsi);

void** g8;

void** stderr = reinterpret_cast<void**>(0);

void fun_402ff0(void** rdi, void** rsi, void** rdx, ...);

void** fun_402f80(void** rdi, void** rsi, void** rdx);

void** fun_402e20(void** rdi, void** rsi, ...);

void** fun_403186(void** rdi, void** rsi, void** rdx, void** rcx) {
    uint64_t rax5;
    void** rsi6;
    void** rdi7;
    void** rax8;
    void** rdx9;
    void** rax10;
    uint64_t rcx11;

    rax5 = g28;
    rsi6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 0xffffffffffffffe8);
    rdi7 = rdi;
    rax8 = fun_4028d0(rdi7, rsi6);
    if (!rax8) {
        rdx9 = g8;
        rax10 = stderr;
        *reinterpret_cast<int32_t*>(&rsi6) = reinterpret_cast<int32_t>("%s\n");
        *reinterpret_cast<int32_t*>(&rsi6 + 4) = 0;
        fun_402ff0(rax10, "%s\n", rdx9);
        rdi7 = reinterpret_cast<void**>(0);
        rax8 = fun_402f80(0, "%s\n", rdx9);
    }
    rcx11 = rax5 ^ g28;
    if (rcx11) {
        rax8 = fun_402e20(rdi7, rsi6, rdi7, rsi6);
    }
    return rax8;
}

int64_t fprintf = 0x402ff6;

void fun_402ff0(void** rdi, void** rsi, void** rdx, ...) {
    goto fprintf;
}

int64_t g_error_free = 0x402f86;

void** fun_402f80(void** rdi, void** rsi, void** rdx) {
    goto g_error_free;
}

int64_t __stack_chk_fail = 0x402e26;

void** fun_402e20(void** rdi, void** rsi, ...) {
    goto __stack_chk_fail;
}

int64_t gtk_button_get_type = 0x402d46;

void** fun_402d40(void** rdi, void** rsi) {
    goto gtk_button_get_type;
}

int64_t g_type_check_instance_cast = 0x402e06;

void** fun_402e00(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9, void** a7, ...) {
    goto g_type_check_instance_cast;
}

int64_t gtk_button_set_label = 0x402db6;

void fun_402db0(void** rdi, void** rsi) {
    goto gtk_button_set_label;
}

int64_t gtk_window_get_type = 0x402c26;

void** fun_402c20(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, ...) {
    goto gtk_window_get_type;
}

int64_t gtk_message_dialog_new = 0x402a96;

void** fun_402a90(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    goto gtk_message_dialog_new;
}

int64_t gtk_dialog_get_type = 0x402a66;

void** fun_402a60(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    goto gtk_dialog_get_type;
}

int64_t gtk_dialog_run = 0x402e36;

int32_t fun_402e30(void** rdi, void** rsi) {
    goto gtk_dialog_run;
}

int64_t gtk_widget_destroy = 0x4029b6;

void** fun_4029b0(void** rdi, void** rsi) {
    goto gtk_widget_destroy;
}

void fun_402a40(int64_t rdi);

void fun_40506e(void** rdi, void** rsi) {
    fun_402a40("ResChange 1600x1200");
    return;
}

void fun_40507f(void** rdi, void** rsi) {
    fun_402a40("ResChange 800x600");
    return;
}

int64_t gtk_window_set_position = 0x402ca6;

void fun_402ca0(void** rdi, void** rsi) {
    goto gtk_window_set_position;
}

int64_t usleep = 0x402c76;

void fun_402c70(void** rdi, void** rsi, ...) {
    goto usleep;
}

int64_t gtk_main_quit = 0x402dc6;

void fun_402dc0(void** rdi, void** rsi) {
    goto gtk_main_quit;
}

void** fun_4028a0(void** rdi);

void** g60f4f8 = reinterpret_cast<void**>(0);

void fun_402df0(void** rdi, void** rsi);

void** fun_402b60(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void fun_403050(void** rdi, void** rsi);

void fun_402bf0(void** rdi, void** rsi);

void fun_402d10(void** rdi, void** rsi);

void fun_402de0(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9, void** a7);

void fun_40346c(void** rdi, void** rsi);

void** fun_402930(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void** g60f550 = reinterpret_cast<void**>(0);

void fun_402e50(void** rdi, void** rsi);

void** fun_402d70(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void** g60f540 = reinterpret_cast<void**>(0);

void** fun_402890(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void fun_402ea0(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void fun_402e10(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void** fun_402d30(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void** fun_4037f0(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void** fun_403030(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void** fun_402e60(void** rdi, void** rsi);

void** g60f548 = reinterpret_cast<void**>(0);

void** fun_402f30(int64_t rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void** g60f508 = reinterpret_cast<void**>(0);

void** fun_403bf3(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void** g60f500 = reinterpret_cast<void**>(0);

void** fun_403ab7(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void** g60f510 = reinterpret_cast<void**>(0);

void** fun_403d2f(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void** g60f518 = reinterpret_cast<void**>(0);

void fun_403e48(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void** g60f528 = reinterpret_cast<void**>(0);

void fun_403e65(int64_t rdi, int64_t rsi);

void** g60f530 = reinterpret_cast<void**>(0);

void** fun_403f29(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void** fun_402910(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void** g60f538 = reinterpret_cast<void**>(0);

void fun_4036a3(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9, void** a7, ...);

void fun_402ef0(int64_t rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

int64_t fun_403663(int64_t rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void fun_402b20(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void** fun_403fda(int64_t rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9, void** a7) {
    void** rax8;
    void** rax9;
    void** rax10;
    void** v11;
    void** rax12;
    void** rax13;
    void** rax14;
    void** v15;
    void** rax16;
    void** rax17;
    void** rax18;
    void** v19;
    void** rax20;
    void** rax21;
    void** rax22;
    void** v23;
    void** rax24;
    void** rax25;
    void** rax26;
    void** v27;
    void** rax28;
    void** rbx29;
    void** rax30;
    void** rax31;
    void** v32;
    void** rax33;
    void** rax34;
    void** rbx35;
    void** rax36;
    void** rax37;
    void** v38;
    void** rax39;
    void** rax40;
    void** rax41;
    void** rax42;
    void** v43;
    void** rax44;
    void** v45;
    void** rax46;
    void** rax47;
    void** v48;
    void** rax49;
    void** rax50;
    void** rax51;
    void** rbx52;
    void** rax53;
    void** rax54;
    void** v55;
    void** rax56;
    void** rax57;
    void** rax58;
    void** rbx59;
    void** rax60;
    void** v61;
    void** rax62;
    void** v63;
    void** rbx64;
    void** rax65;
    void** rax66;
    void** v67;
    void** rax68;
    void** rax69;
    void** rbx70;
    void** rax71;
    void** v72;
    void** rax73;
    void** v74;
    void** rbx75;
    void** rax76;
    void** rax77;
    void** v78;
    void** rax79;
    void** rax80;
    void** rbx81;
    void** rax82;
    void** v83;
    void** rax84;
    void** v85;
    void** rbx86;
    void** rax87;
    void** rax88;
    void** v89;
    void** rax90;
    void** rax91;
    void** rbx92;
    void** rax93;
    void** v94;
    void** rax95;
    void** v96;
    void** rbx97;
    void** rax98;
    void** rax99;
    void** v100;
    void** rax101;
    void** rax102;
    void** rbx103;
    void** rax104;
    void** v105;
    void** rax106;
    void** v107;
    void** rbx108;
    void** rax109;
    void** rax110;
    void** v111;
    void** rax112;
    void** rax113;
    void** rbx114;
    void** rax115;
    void** v116;
    void** rax117;
    void** v118;
    void** rbx119;
    void** rax120;
    void** rax121;
    void** v122;
    void** rax123;
    void** rax124;
    void** rbx125;
    void** rax126;
    void** rax127;
    void** v128;
    void** rax129;
    void** v130;
    void** rax131;
    void** rax132;
    void** v133;
    void** rax134;
    void** v135;
    void** rax136;
    void** rax137;

    rax8 = fun_4028a0(0);
    g60f4f8 = rax8;
    rax9 = fun_402c20(0, rsi, rdx, rcx, r8);
    rax10 = g60f4f8;
    rax12 = fun_402e00(rax10, rax9, rax9, rcx, r8, r9, v11);
    fun_402df0(rax12, 0);
    rax13 = fun_402b60(rax12, 0, rax9, rcx, r8, r9);
    rax14 = g60f4f8;
    rax16 = fun_402e00(rax14, rax13, rax13, rcx, r8, r9, v15);
    fun_403050(rax16, 8);
    rax17 = fun_402c20(rax16, 8, rax13, rcx, r8);
    rax18 = g60f4f8;
    rax20 = fun_402e00(rax18, rax17, rax17, rcx, r8, r9, v19);
    fun_402bf0(rax20, "Paperlike Pro");
    rax21 = fun_402c20(rax20, "Paperlike Pro", rax17, rcx, r8);
    rax22 = g60f4f8;
    rax24 = fun_402e00(rax22, rax21, rax21, rcx, r8, r9, v23);
    fun_402ca0(rax24, 1);
    rax25 = g60f4f8;
    fun_402d10(rax25, 1);
    rax26 = g60f4f8;
    fun_402de0(rax26, "destroy", fun_40346c, 0, 0, 0, v27);
    rax28 = fun_402930(1, 5, fun_40346c, 0, 0, 0);
    g60f550 = rax28;
    rbx29 = g60f550;
    rax30 = fun_402b60(1, 5, fun_40346c, 0, 0, 0);
    rax31 = g60f4f8;
    rax33 = fun_402e00(rax31, rax30, rax30, 0, 0, 0, v32);
    fun_402e50(rax33, rbx29);
    rax34 = fun_402d70(0, 0x40cab7, rax30, 0, 0, 0);
    g60f540 = rax34;
    rbx35 = g60f540;
    rax36 = fun_402890(0, 0x40cab7, rax30, 0, 0, 0);
    rax37 = g60f550;
    rax39 = fun_402e00(rax37, rax36, rax36, 0, 0, 0, v38);
    fun_402ea0(rax39, rbx35, 1, 1, 0, 0);
    rax40 = g60f540;
    fun_402e10(rax40, rbx35, 1, 1, 0, 0);
    rax41 = fun_402d30(rax40, rbx35, 1, 1, 0, 0);
    rax42 = g60f540;
    rax44 = fun_402e00(rax42, rax41, rax41, 1, 0, 0, v43);
    fun_402de0(rax44, "clicked", fun_4037f0, 0, 0, 0, v45);
    rax46 = fun_403030(rax44, "clicked", fun_4037f0, 0, 0, 0);
    rax47 = g60f540;
    rax49 = fun_402e00(rax47, rax46, rax46, 0, 0, 0, v48);
    rax50 = fun_402e60(rax49, rax46);
    rax51 = fun_402d70(rax50, 0x40cb86, rax46, 0, 0, 0);
    g60f548 = rax51;
    rbx52 = g60f548;
    rax53 = fun_402890(rax50, 0x40cb86, rax46, 0, 0, 0);
    rax54 = g60f550;
    rax56 = fun_402e00(rax54, rax53, rax53, 0, 0, 0, v55);
    fun_402ea0(rax56, rbx52, 1, 1, 0, 0);
    rax57 = g60f548;
    fun_402e10(rax57, rbx52, 1, 1, 0, 0);
    rax58 = fun_402f30("A5", rbx52, 1, 1, 0, 0);
    g60f508 = rax58;
    rbx59 = g60f4f8;
    rax60 = g60f508;
    rax62 = fun_402e00(rax60, 80, 1, 1, 0, 0, v61);
    fun_402de0(rax62, "clicked", fun_403bf3, rbx59, 0, 0, v63);
    rbx64 = g60f508;
    rax65 = fun_402890(rax62, "clicked", fun_403bf3, rbx59, 0, 0);
    rax66 = g60f550;
    rax68 = fun_402e00(rax66, rax65, rax65, rbx59, 0, 0, v67);
    fun_402ea0(rax68, rbx64, 1, 1, 0, 0);
    rax69 = fun_402f30("A2", rbx64, 1, 1, 0, 0);
    g60f500 = rax69;
    rbx70 = g60f4f8;
    rax71 = g60f500;
    rax73 = fun_402e00(rax71, 80, 1, 1, 0, 0, v72);
    fun_402de0(rax73, "clicked", fun_403ab7, rbx70, 0, 0, v74);
    rbx75 = g60f500;
    rax76 = fun_402890(rax73, "clicked", fun_403ab7, rbx70, 0, 0);
    rax77 = g60f550;
    rax79 = fun_402e00(rax77, rax76, rax76, rbx70, 0, 0, v78);
    fun_402ea0(rax79, rbx75, 1, 1, 0, 0);
    rax80 = fun_402f30("A16", rbx75, 1, 1, 0, 0);
    g60f510 = rax80;
    rbx81 = g60f4f8;
    rax82 = g60f510;
    rax84 = fun_402e00(rax82, 80, 1, 1, 0, 0, v83);
    fun_402de0(rax84, "clicked", fun_403d2f, rbx81, 0, 0, v85);
    rbx86 = g60f510;
    rax87 = fun_402890(rax84, "clicked", fun_403d2f, rbx81, 0, 0);
    rax88 = g60f550;
    rax90 = fun_402e00(rax88, rax87, rax87, rbx81, 0, 0, v89);
    fun_402ea0(rax90, rbx86, 1, 1, 0, 0);
    rax91 = fun_402f30("Settings", rbx86, 1, 1, 0, 0);
    g60f518 = rax91;
    rbx92 = g60f4f8;
    rax93 = g60f518;
    rax95 = fun_402e00(rax93, 80, 1, 1, 0, 0, v94);
    fun_402de0(rax95, "clicked", fun_403e48, rbx92, 0, 0, v96);
    rbx97 = g60f518;
    rax98 = fun_402890(rax95, "clicked", fun_403e48, rbx92, 0, 0);
    rax99 = g60f550;
    rax101 = fun_402e00(rax99, rax98, rax98, rbx92, 0, 0, v100);
    fun_402ea0(rax101, rbx97, 1, 1, 0, 0);
    rax102 = fun_402f30("Help", rbx97, 1, 1, 0, 0);
    g60f528 = rax102;
    rbx103 = g60f4f8;
    rax104 = g60f528;
    rax106 = fun_402e00(rax104, 80, 1, 1, 0, 0, v105);
    fun_402de0(rax106, "clicked", fun_403e65, rbx103, 0, 0, v107);
    rbx108 = g60f528;
    rax109 = fun_402890(rax106, "clicked", fun_403e65, rbx103, 0, 0);
    rax110 = g60f550;
    rax112 = fun_402e00(rax110, rax109, rax109, rbx103, 0, 0, v111);
    fun_402ea0(rax112, rbx108, 1, 1, 0, 0);
    rax113 = fun_402f30("Exit", rbx108, 1, 1, 0, 0);
    g60f530 = rax113;
    rbx114 = g60f4f8;
    rax115 = g60f530;
    rax117 = fun_402e00(rax115, 80, 1, 1, 0, 0, v116);
    fun_402de0(rax117, "clicked", fun_403f29, rbx114, 0, 0, v118);
    rbx119 = g60f530;
    rax120 = fun_402890(rax117, "clicked", fun_403f29, rbx114, 0, 0);
    rax121 = g60f550;
    rax123 = fun_402e00(rax121, rax120, rax120, rbx114, 0, 0, v122);
    fun_402ea0(rax123, rbx119, 1, 1, 0, 0);
    rax124 = fun_402910("Paperlike Pro v1.0.5", rbx119, 1, 1, 0, 0);
    g60f538 = rax124;
    rbx125 = g60f538;
    rax126 = fun_402890("Paperlike Pro v1.0.5", rbx119, 1, 1, 0, 0);
    rax127 = g60f550;
    rax129 = fun_402e00(rax127, rax126, rax126, 1, 0, 0, v128);
    fun_402ea0(rax129, rbx125, 1, 1, 0, 0);
    fun_4036a3(rax129, rbx125, 1, 1, 0, 0, v130);
    rax131 = fun_402d30(rax129, rbx125, 1, 1, 0, 0);
    rax132 = g60f548;
    rax134 = fun_402e00(rax132, rax131, rax131, 1, 0, 0, v133);
    fun_402de0(rax134, "clicked", fun_4037f0, 0, 0, 0, v135);
    fun_402ef0(fun_403663, 0, fun_4037f0, 0, 0, 0);
    rax136 = g60f4f8;
    fun_402b20(rax136, 0, fun_4037f0, 0, 0, 0);
    rax137 = g60f4f8;
    return rax137;
}

int64_t perror = 0x402fe6;

void fun_402fe0(void** rdi, void** rsi, ...) {
    goto perror;
}

int64_t close = 0x4028b6;

int32_t fun_4028b0(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    goto close;
}

int64_t puts = 0x402906;

void fun_402900(void** rdi) {
    goto puts;
}

int64_t bzero = 0x402af6;

void fun_402af0(void* rdi, int64_t rsi, void** rdx, void** rcx) {
    goto bzero;
}

int64_t vfprintf = 0x402b06;

void fun_402b00(void** rdi, void** rsi, void** rdx) {
    goto vfprintf;
}

int64_t strerror = 0x402c86;

void** fun_402c80(int64_t rdi, void** rsi, void** rdx) {
    goto strerror;
}

void** g60f460 = reinterpret_cast<void**>(0xf0);

void** fun_402950();

int32_t fun_4028e0(void** rdi, void** rsi, void** rdx);

uint32_t fun_4028c0(void** rdi, void** rsi, void** rdx, ...);

void fun_4048f7(int32_t edi, int32_t esi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    void* rsp7;
    signed char al8;
    void** rdx9;
    void** rax10;
    void** rax11;
    void** rdx12;
    void** rsi13;
    void* rsp14;
    int64_t rdi15;
    void** rax16;
    void** rax17;
    uint64_t rax18;
    void** rdi19;
    int32_t eax20;
    void** rdx21;
    uint32_t eax22;
    uint64_t rcx23;

    rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    if (al8) {
        __asm__("movaps [rbp-0x80], xmm0");
        __asm__("movaps [rbp-0x70], xmm1");
        __asm__("movaps [rbp-0x60], xmm2");
        __asm__("movaps [rbp-0x50], xmm3");
        __asm__("movaps [rbp-0x40], xmm4");
        __asm__("movaps [rbp-0x30], xmm5");
        __asm__("movaps [rbp-0x20], xmm6");
        __asm__("movaps [rbp-0x10], xmm7");
    }
    rdx9 = g60f460;
    rax10 = stderr;
    fun_402ff0(rax10, "%s: ", rdx9);
    rax11 = stderr;
    rdx12 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp7) + 0xffffffffffffff30);
    rsi13 = rdx;
    fun_402b00(rax11, rsi13, rdx12);
    rsp14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp7) - 0xe0 - 8 + 8 - 8 + 8);
    if (esi > 0) {
        *reinterpret_cast<int32_t*>(&rdi15) = esi;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = 0;
        rax16 = fun_402c80(rdi15, rsi13, rdx12);
        rdx12 = rax16;
        rax17 = stderr;
        *reinterpret_cast<int32_t*>(&rsi13) = reinterpret_cast<int32_t>(": %s\n");
        *reinterpret_cast<int32_t*>(&rsi13 + 4) = 0;
        fun_402ff0(rax17, ": %s\n", rdx12);
        rsp14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp14) - 8 + 8 - 8 + 8);
    }
    fun_402950();
    rax18 = g28;
    *reinterpret_cast<int32_t*>(&rdi19) = edi;
    *reinterpret_cast<int32_t*>(&rdi19 + 4) = 0;
    eax20 = fun_4028e0(rdi19, rsi13, rdx12);
    if (!eax20 || ((rdx21 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp14) - 8 + 8 - 8 + 0xfffffffffffffff7), *reinterpret_cast<int32_t*>(&rsi13) = 0x4b33, *reinterpret_cast<int32_t*>(&rsi13 + 4) = 0, *reinterpret_cast<int32_t*>(&rdi19) = edi, *reinterpret_cast<int32_t*>(&rdi19 + 4) = 0, eax22 = fun_4028c0(rdi19, 0x4b33, rdx21, rdi19, 0x4b33, rdx21), !!eax22) || static_cast<int1_t>(!0))) {
    }
    rcx23 = rax18 ^ g28;
    if (rcx23) {
        fun_402e20(rdi19, rsi13, rdi19, rsi13);
    }
    goto rdx;
}

int64_t ioctl = 0x4028c6;

uint32_t fun_4028c0(void** rdi, void** rsi, void** rdx, ...) {
    goto ioctl;
}

void** fun_403060(void** rdi, void** rsi, void** rdx);

void** fun_404a86(void** rdi, void** rsi, void** rdx) {
    void** eax4;
    void** v5;
    void** eax6;
    void** eax7;
    void** eax8;

    eax4 = fun_403060(rdi, 2, rdx);
    v5 = eax4;
    if (reinterpret_cast<signed char>(v5) < reinterpret_cast<signed char>(0)) {
        eax6 = fun_403060(rdi, 1, rdx);
        v5 = eax6;
    }
    if (reinterpret_cast<signed char>(v5) < reinterpret_cast<signed char>(0)) {
        eax7 = fun_403060(rdi, 0, rdx);
        v5 = eax7;
    }
    if (reinterpret_cast<signed char>(v5) >= reinterpret_cast<signed char>(0)) {
        eax8 = v5;
    } else {
        eax8 = reinterpret_cast<void**>(0xffffffff);
    }
    return eax8;
}

int64_t open = 0x403066;

void** fun_403060(void** rdi, void** rsi, void** rdx) {
    goto open;
}

int32_t fun_404a0c(void** edi, void** rsi, void** rdx) {
    uint64_t rax4;
    void** rdi5;
    int32_t eax6;
    uint32_t eax7;
    void** rax8;
    uint64_t rcx9;

    rax4 = g28;
    rdi5 = edi;
    *reinterpret_cast<int32_t*>(&rdi5 + 4) = 0;
    eax6 = fun_4028e0(rdi5, rsi, rdx);
    if (!eax6 || ((*reinterpret_cast<int32_t*>(&rsi) = 0x4b33, *reinterpret_cast<int32_t*>(&rsi + 4) = 0, rdi5 = edi, *reinterpret_cast<int32_t*>(&rdi5 + 4) = 0, eax7 = fun_4028c0(rdi5, 0x4b33, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 0xfffffffffffffff7), !!eax7) || static_cast<int1_t>(!0))) {
        *reinterpret_cast<int32_t*>(&rax8) = 0;
    } else {
        *reinterpret_cast<int32_t*>(&rax8) = 1;
    }
    rcx9 = rax4 ^ g28;
    if (rcx9) {
        rax8 = fun_402e20(rdi5, rsi, rdi5, rsi);
    }
    return *reinterpret_cast<int32_t*>(&rax8);
}

int64_t fwrite = 0x402fa6;

void fun_402fa0(void** rdi, void** rsi, int64_t rdx, void** rcx) {
    goto fwrite;
}

int64_t exit = 0x402956;

void** fun_402950() {
    goto exit;
}

int64_t __errno_location = 0x402da6;

int32_t* fun_402da0(void** rdi, void** rsi, void** rdx) {
    goto __errno_location;
}

void** fun_4047d3(int32_t edi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    signed char al7;
    uint64_t rax8;
    void** rdx9;
    void** rax10;
    void** rax11;
    void** rdx12;
    void** rsi13;
    void** rdi14;
    int64_t rdi15;
    void** rax16;
    void** rax17;
    void** rax18;

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
    rdx9 = g60f460;
    rax10 = stderr;
    fun_402ff0(rax10, "%s: ", rdx9, rax10, "%s: ", rdx9);
    rax11 = stderr;
    rdx12 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 0xffffffffffffff30);
    rsi13 = rsi;
    rdi14 = rax11;
    fun_402b00(rdi14, rsi13, rdx12);
    if (edi > 0) {
        *reinterpret_cast<int32_t*>(&rdi15) = edi;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = 0;
        rax16 = fun_402c80(rdi15, rsi13, rdx12);
        rax17 = stderr;
        *reinterpret_cast<int32_t*>(&rsi13) = reinterpret_cast<int32_t>(": %s\n");
        *reinterpret_cast<int32_t*>(&rsi13 + 4) = 0;
        rdi14 = rax17;
        fun_402ff0(rdi14, ": %s\n", rax16, rdi14, ": %s\n", rax16);
    }
    rax18 = reinterpret_cast<void**>(rax8 ^ g28);
    if (rax18) {
        rax18 = fun_402e20(rdi14, rsi13, rdi14, rsi13);
    }
    return rax18;
}

int64_t tcgetattr = 0x402cf6;

int32_t fun_402cf0(void** rdi, void** rsi) {
    goto tcgetattr;
}

int64_t tcsetattr = 0x402836;

int32_t fun_402830(void** rdi, void** rsi, void** rdx) {
    goto tcsetattr;
}

int64_t read = 0x4029d6;

int64_t fun_4029d0(void** rdi, void** rsi, void** rdx) {
    goto read;
}

int64_t fputc = 0x402b56;

void fun_402b50(int64_t rdi, void** rsi, ...) {
    goto fputc;
}

void fun_405151(void** rdi, void** rsi, void** rdx, uint32_t ecx) {
    void** v5;
    void** v6;
    uint32_t v7;
    uint32_t v8;
    void** rdx9;
    uint32_t v10;
    uint32_t eax11;
    void** rdx12;
    uint32_t v13;
    uint32_t eax14;
    uint32_t eax15;
    uint32_t eax16;
    uint32_t eax17;
    int64_t rdi18;

    v5 = rdi;
    v6 = rdx;
    v7 = ecx;
    if (rsi) {
        if (reinterpret_cast<int32_t>(v7) <= reinterpret_cast<int32_t>(16)) {
            fun_402ff0(v5, "%s: ", rsi);
        } else {
            fun_402ff0(v5, "%s:\n", rsi);
        }
    }
    v8 = 0;
    while (reinterpret_cast<int32_t>(v8) < reinterpret_cast<int32_t>(v7)) {
        if (reinterpret_cast<int32_t>(v7) > reinterpret_cast<int32_t>(16)) {
            *reinterpret_cast<uint32_t*>(&rdx9) = v8;
            *reinterpret_cast<int32_t*>(&rdx9 + 4) = 0;
            fun_402ff0(v5, "%04x: ", rdx9, v5, "%04x: ", rdx9);
        }
        v10 = 0;
        while (reinterpret_cast<int32_t>(v10) <= reinterpret_cast<int32_t>(15)) {
            if (reinterpret_cast<int32_t>(v8 + v10) >= reinterpret_cast<int32_t>(v7)) {
                fun_402fa0("   ", 1, 3, v5);
            } else {
                eax11 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v8 + v10))));
                *reinterpret_cast<uint32_t*>(&rdx12) = *reinterpret_cast<unsigned char*>(&eax11);
                *reinterpret_cast<int32_t*>(&rdx12 + 4) = 0;
                fun_402ff0(v5, "%02x ", rdx12, v5, "%02x ", rdx12);
            }
            ++v10;
        }
        fun_402fa0("| ", 1, 2, v5);
        v13 = 0;
        while (reinterpret_cast<int32_t>(v13) <= reinterpret_cast<int32_t>(15)) {
            if (reinterpret_cast<int32_t>(v8 + v13) >= reinterpret_cast<int32_t>(v7)) {
                fun_402b50(32, v5);
            } else {
                eax14 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v8 + v13))));
                if (*reinterpret_cast<unsigned char*>(&eax14) <= 31 || (eax15 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v8 + v13)))), *reinterpret_cast<unsigned char*>(&eax15) > 0x7e)) {
                    eax16 = 46;
                } else {
                    eax17 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v8 + v13))));
                    eax16 = *reinterpret_cast<unsigned char*>(&eax17);
                }
                *reinterpret_cast<uint32_t*>(&rdi18) = eax16;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = 0;
                fun_402b50(rdi18, v5);
            }
            ++v13;
        }
        fun_402b50(10, v5, 10, v5);
        v8 = v8 + 16;
    }
    return;
}

int32_t g60f55c = 0;

uint32_t fun_407fc1(void** edi, int32_t esi, int32_t edx, void** rcx, uint32_t r8d);

uint32_t fun_4054a6(void** rdi, int32_t esi, void** rdx, uint32_t ecx) {
    void** rsi2;
    void** v5;
    int32_t v6;
    uint32_t eax7;
    uint64_t rax8;
    void** rdx9;
    uint32_t eax10;
    int32_t eax11;
    void** rax12;
    void** rax13;
    int32_t eax14;
    void** rax15;
    void** rdx16;
    uint64_t rcx17;

    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    v5 = rdi;
    v6 = *reinterpret_cast<int32_t*>(&rsi2);
    eax7 = ecx;
    rax8 = g28;
    if (!*reinterpret_cast<int32_t*>(v5 + 0x840)) {
        rdx9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 0xffffffffffffffd0);
        *reinterpret_cast<int32_t*>(&rsi2) = 0x707;
        *reinterpret_cast<int32_t*>(&rsi2 + 4) = 0;
        rdi = *reinterpret_cast<void***>(v5);
        *reinterpret_cast<int32_t*>(&rdi + 4) = 0;
        eax10 = fun_4028c0(rdi, 0x707, rdx9, rdi, 0x707, rdx9);
        if (reinterpret_cast<int32_t>(eax10) >= reinterpret_cast<int32_t>(0)) {
            eax11 = g60f55c;
            if (eax11 > 1) {
                rax12 = stderr;
                *reinterpret_cast<int32_t*>(&rsi2) = reinterpret_cast<int32_t>("Recv");
                *reinterpret_cast<int32_t*>(&rsi2 + 4) = 0;
                rdi = rax12;
                fun_405151(rdi, "Recv", rdx, eax10);
            }
            *reinterpret_cast<uint32_t*>(&rax13) = eax10;
        } else {
            if (!*reinterpret_cast<int32_t*>(v5 + 0x844) || (eax14 = g60f55c, !!eax14)) {
                fun_402fe0("ioctl()", 0x707, "ioctl()", 0x707);
                rax15 = stderr;
                *reinterpret_cast<uint32_t*>(&rdx16) = eax10;
                *reinterpret_cast<int32_t*>(&rdx16 + 4) = 0;
                *reinterpret_cast<int32_t*>(&rsi2) = reinterpret_cast<int32_t>("ioctl returned %d\n");
                *reinterpret_cast<int32_t*>(&rsi2 + 4) = 0;
                rdi = rax15;
                fun_402ff0(rdi, "ioctl returned %d\n", rdx16, rdi, "ioctl returned %d\n", rdx16);
            }
            *reinterpret_cast<uint32_t*>(&rax13) = 0xffffffff;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(v5 + 0x840) == 1) {
            *reinterpret_cast<int32_t*>(&rsi2) = *reinterpret_cast<int32_t*>(v5 + 12);
            *reinterpret_cast<int32_t*>(&rsi2 + 4) = 0;
            rdi = *reinterpret_cast<void***>(v5 + 8);
            *reinterpret_cast<int32_t*>(&rdi + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rax13) = fun_407fc1(rdi, *reinterpret_cast<int32_t*>(&rsi2), v6, rdx, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax7)));
        } else {
            *reinterpret_cast<uint32_t*>(&rax13) = 0xffffffff;
        }
    }
    rcx17 = rax8 ^ g28;
    if (rcx17) {
        rax13 = fun_402e20(rdi, rsi2, rdi, rsi2);
    }
    return *reinterpret_cast<uint32_t*>(&rax13);
}

int32_t fun_402990(void** rdi, void** rsi);

struct s0 {
    signed char[1] pad1;
    void** f1;
};

void** fun_4055e9(void** rdi, int32_t esi) {
    uint64_t rax3;
    void** rdi4;
    int32_t eax5;
    void* v6;
    uint64_t v7;
    int64_t v8;
    uint64_t v9;
    uint64_t rax10;
    void** v11;
    void* v12;
    void** v13;
    struct s0* v14;
    void** rax15;

    rax3 = g28;
    rdi4 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 0xffffffffffffffe0);
    eax5 = fun_402990(rdi4, 0);
    if (!eax5) {
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdi + 32)) >= reinterpret_cast<signed char>(reinterpret_cast<int64_t>(v6) - 1) && ((v7 = (v8 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 32))) * 0x989680 + v9 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 40)), v7 <= 0xafc7) && (rax10 = v7, *reinterpret_cast<int32_t*>(&rdi4) = 0xafc8 - *reinterpret_cast<int32_t*>(&rax10), *reinterpret_cast<int32_t*>(&rdi4 + 4) = 0, fun_402c70(rdi4, 0), v11 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(v12) - v7 + 0xafc8), reinterpret_cast<signed char>(v11) > reinterpret_cast<signed char>(0xf4240)))) {
            v11 = v11 - 0xf4240;
            v13 = reinterpret_cast<void**>(&v14->f1);
        }
        if (esi) {
            *reinterpret_cast<void***>(rdi + 32) = v13;
            *reinterpret_cast<void***>(rdi + 40) = v11;
        }
    } else {
        *reinterpret_cast<int32_t*>(&rdi4) = 0xafc8;
        *reinterpret_cast<int32_t*>(&rdi4 + 4) = 0;
        fun_402c70(0xafc8, 0);
    }
    rax15 = reinterpret_cast<void**>(rax3 ^ g28);
    if (rax15) {
        rax15 = fun_402e20(rdi4, 0);
    }
    return rax15;
}

void** fun_405362(void** rdi, int32_t esi, void** rdx, uint32_t ecx);

void** fun_4056fd(void** rdi, void** rsi, int32_t edx, ...) {
    void* rbp4;
    void** v5;
    void** v6;
    int32_t eax7;
    unsigned char v8;
    uint64_t rax9;
    uint64_t v10;
    int32_t eax11;
    uint32_t eax12;
    int32_t v13;
    uint32_t ecx14;
    uint32_t eax15;
    uint32_t v16;
    int64_t rax17;
    int32_t edx18;
    int64_t rax19;
    void** rdx20;
    uint32_t ecx21;
    uint32_t eax22;
    int64_t rax23;
    uint32_t edx24;
    int32_t eax25;
    void** rsi26;
    void** rax27;
    void** rdi28;

    rbp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    v5 = rdi;
    v6 = rsi;
    eax7 = edx;
    v8 = *reinterpret_cast<unsigned char*>(&eax7);
    rax9 = g28;
    v10 = rax9;
    eax11 = *reinterpret_cast<int32_t*>(v5 + 4);
    eax12 = *reinterpret_cast<unsigned char*>(&eax11);
    v13 = 2;
    ecx14 = static_cast<uint32_t>(v8) | 0xffffff80;
    eax15 = *reinterpret_cast<unsigned char*>(&ecx14);
    v16 = eax12 + eax12 ^ 81 ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax15));
    while (*reinterpret_cast<uint32_t*>(&rax17) = v8, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = 0, edx18 = static_cast<int32_t>(rax17 - 1), v8 = *reinterpret_cast<unsigned char*>(&edx18), !!*reinterpret_cast<signed char*>(&rax17)) {
        *reinterpret_cast<int32_t*>(&rax19) = v13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = 0;
        v13 = static_cast<int32_t>(rax19 + 1);
        rdx20 = v6;
        v6 = rdx20 + 1;
        ecx21 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx20));
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp4) + *reinterpret_cast<int32_t*>(&rax19) - 0x90) = *reinterpret_cast<signed char*>(&ecx21);
        eax22 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rbp4) + *reinterpret_cast<int32_t*>(&rax19) - 0x90);
        v16 = v16 ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax22));
    }
    *reinterpret_cast<int32_t*>(&rax23) = v13;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax23) + 4) = 0;
    edx24 = v16;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp4) + *reinterpret_cast<int32_t*>(&rax23) - 0x90) = *reinterpret_cast<signed char*>(&edx24);
    fun_4055e9(v5, 1);
    eax25 = static_cast<int32_t>(rax23 + 1);
    *reinterpret_cast<int32_t*>(&rsi26) = *reinterpret_cast<int32_t*>(v5 + 4);
    *reinterpret_cast<int32_t*>(&rsi26 + 4) = 0;
    rax27 = fun_405362(v5, *reinterpret_cast<int32_t*>(&rsi26), reinterpret_cast<int64_t>(rbp4) + 0xffffffffffffff70, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax25)));
    rdi28 = reinterpret_cast<void**>(v10 ^ g28);
    if (rdi28) {
        rax27 = fun_402e20(rdi28, rsi26, rdi28, rsi26);
    }
    return rax27;
}

void** fun_408053(void** edi, int32_t esi, int32_t edx, void** rcx, uint32_t r8d);

void** fun_405362(void** rdi, int32_t esi, void** rdx, uint32_t ecx) {
    void** rsi2;
    void** v5;
    int32_t v6;
    uint32_t eax7;
    uint64_t rax8;
    void** rdx9;
    uint32_t eax10;
    int32_t eax11;
    void** rax12;
    void** rax13;
    int32_t eax14;
    void** rax15;
    void** rdx16;
    uint64_t rcx17;

    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    v5 = rdi;
    v6 = *reinterpret_cast<int32_t*>(&rsi2);
    eax7 = ecx;
    rax8 = g28;
    if (!*reinterpret_cast<int32_t*>(v5 + 0x840)) {
        rdx9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 0xffffffffffffffd0);
        *reinterpret_cast<int32_t*>(&rsi2) = 0x707;
        *reinterpret_cast<int32_t*>(&rsi2 + 4) = 0;
        rdi = *reinterpret_cast<void***>(v5);
        *reinterpret_cast<int32_t*>(&rdi + 4) = 0;
        eax10 = fun_4028c0(rdi, 0x707, rdx9, rdi, 0x707, rdx9);
        if (reinterpret_cast<int32_t>(eax10) >= reinterpret_cast<int32_t>(0)) {
            eax11 = g60f55c;
            if (eax11 > 1) {
                rax12 = stderr;
                *reinterpret_cast<int32_t*>(&rsi2) = reinterpret_cast<int32_t>("Send");
                *reinterpret_cast<int32_t*>(&rsi2 + 4) = 0;
                rdi = rax12;
                fun_405151(rdi, "Send", rdx, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax7)));
            }
            *reinterpret_cast<uint32_t*>(&rax13) = eax10;
            *reinterpret_cast<int32_t*>(&rax13 + 4) = 0;
        } else {
            if (!*reinterpret_cast<int32_t*>(v5 + 0x844) || (eax14 = g60f55c, !!eax14)) {
                fun_402fe0("ioctl()", 0x707, "ioctl()", 0x707);
                rax15 = stderr;
                *reinterpret_cast<uint32_t*>(&rdx16) = eax10;
                *reinterpret_cast<int32_t*>(&rdx16 + 4) = 0;
                *reinterpret_cast<int32_t*>(&rsi2) = reinterpret_cast<int32_t>("ioctl returned %d\n");
                *reinterpret_cast<int32_t*>(&rsi2 + 4) = 0;
                rdi = rax15;
                fun_402ff0(rdi, "ioctl returned %d\n", rdx16, rdi, "ioctl returned %d\n", rdx16);
            }
            *reinterpret_cast<uint32_t*>(&rax13) = 0xffffffff;
            *reinterpret_cast<int32_t*>(&rax13 + 4) = 0;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(v5 + 0x840) == 1) {
            *reinterpret_cast<int32_t*>(&rsi2) = *reinterpret_cast<int32_t*>(v5 + 12);
            *reinterpret_cast<int32_t*>(&rsi2 + 4) = 0;
            rdi = *reinterpret_cast<void***>(v5 + 8);
            *reinterpret_cast<int32_t*>(&rdi + 4) = 0;
            rax13 = fun_408053(rdi, *reinterpret_cast<int32_t*>(&rsi2), v6, rdx, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax7)));
        } else {
            *reinterpret_cast<uint32_t*>(&rax13) = 0xffffffff;
            *reinterpret_cast<int32_t*>(&rax13 + 4) = 0;
        }
    }
    rcx17 = rax8 ^ g28;
    if (rcx17) {
        rax13 = fun_402e20(rdi, rsi2, rdi, rsi2);
    }
    return rax13;
}

int32_t fun_405b45(void** rdi, signed char sil, int32_t edx, int32_t ecx) {
    uint64_t rax5;
    void** rsi6;
    void** rdi7;
    void** rax8;
    void** rax9;
    uint64_t rdx10;

    rax5 = g28;
    rsi6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 0xfffffffffffffff0);
    rdi7 = rdi;
    rax8 = fun_4056fd(rdi7, rsi6, 4);
    if (ecx <= 0) {
        if (ecx < 0) {
            *reinterpret_cast<int32_t*>(&rdi7) = 0x13880;
            *reinterpret_cast<int32_t*>(&rdi7 + 4) = 0;
            fun_402c70(0x13880, rsi6, 0x13880, rsi6);
        }
    } else {
        *reinterpret_cast<int32_t*>(&rdi7) = ecx * 0x3e8;
        *reinterpret_cast<int32_t*>(&rdi7 + 4) = 0;
        fun_402c70(rdi7, rsi6, rdi7, rsi6);
    }
    *reinterpret_cast<int32_t*>(&rax9) = *reinterpret_cast<int32_t*>(&rax8);
    rdx10 = rax5 ^ g28;
    if (rdx10) {
        rax9 = fun_402e20(rdi7, rsi6, rdi7, rsi6);
    }
    return *reinterpret_cast<int32_t*>(&rax9);
}

uint32_t fun_405879(void** rdi, void** rsi, uint32_t edx, ...);

uint32_t fun_405be6(void** rdi, signed char sil, void** rdx, int32_t ecx) {
    int32_t eax5;
    uint64_t rax6;
    void** rsi7;
    void** rax8;
    uint32_t edx9;
    void** rax10;
    void** rdi11;

    eax5 = ecx;
    rax6 = g28;
    rsi7 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 0xfffffffffffffff0);
    rax8 = fun_4056fd(rdi, rsi7, 2, rdi, rsi7, 2);
    if (*reinterpret_cast<int32_t*>(&rax8) >= 0) {
        edx9 = *reinterpret_cast<unsigned char*>(&eax5);
        rsi7 = rdx;
        *reinterpret_cast<uint32_t*>(&rax10) = fun_405879(rdi, rsi7, edx9, rdi, rsi7, edx9);
    } else {
        *reinterpret_cast<uint32_t*>(&rax10) = 0xffffffff;
    }
    rdi11 = reinterpret_cast<void**>(rax6 ^ g28);
    if (rdi11) {
        rax10 = fun_402e20(rdi11, rsi7, rdi11, rsi7);
    }
    return *reinterpret_cast<uint32_t*>(&rax10);
}

int32_t fun_4029f0(void** rdi, void** rsi, void** rdx);

void fun_402b70(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8);

int64_t fun_402cc0(void** rdi, void** rsi, void** rdx);

void** fun_402a00(void** rdi, void** rsi, void** rdx);

void** fun_402fb0(void** rdi, void** rsi);

void** fun_405d33(void** rdi, void** rsi, int32_t edx) {
    void* rbp4;
    void** v5;
    void** v6;
    int32_t v7;
    uint64_t rax8;
    uint64_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;
    int32_t v13;
    int32_t v14;
    int32_t v15;
    int32_t v16;
    uint32_t eax17;
    uint32_t eax18;
    uint32_t eax19;
    uint32_t eax20;
    int32_t eax21;
    int32_t eax22;
    void** rdx23;
    void** rdi24;
    void** rcx25;
    int64_t r8_26;
    void** rdx27;
    void** rdi28;
    int64_t r8_29;
    int64_t rax30;
    uint32_t eax31;
    unsigned char* v32;
    void** rax33;
    int32_t v34;
    uint32_t eax35;
    uint32_t eax36;
    uint32_t edx37;
    int64_t rax38;
    int64_t v39;
    uint32_t eax40;
    unsigned char* v41;
    int32_t v42;
    void** v43;
    void* rdx44;
    uint32_t eax45;
    int64_t rax46;
    void** rcx47;
    int64_t rax48;
    void* rax49;
    void* rdx50;
    uint32_t eax51;
    void** rbx52;
    void* rax53;
    void** rax54;
    int64_t rax55;
    int64_t rdx56;
    int32_t eax57;
    int32_t eax58;
    int32_t eax59;
    void** rdx60;
    void** rdi61;
    int64_t r8_62;
    void** rdx63;
    int64_t r8_64;
    void** rax65;
    uint64_t rbx66;

    rbp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    v5 = rdi;
    v6 = rsi;
    v7 = edx;
    rax8 = g28;
    v9 = rax8;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = -1;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    while (eax17 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint64_t>(static_cast<int64_t>(v16))), !!*reinterpret_cast<signed char*>(&eax17)) {
        eax18 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint64_t>(static_cast<int64_t>(v16)));
        if (*reinterpret_cast<signed char*>(&eax18) == 40) {
            ++v10;
            goto addr_4064a2_5;
        }
        eax19 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint64_t>(static_cast<int64_t>(v16)));
        if (*reinterpret_cast<signed char*>(&eax19) == 41) {
            --v10;
            if (v10 == 1) {
                v11 = 0;
                v12 = 0;
                goto addr_4064a2_5;
            }
        }
        eax20 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint64_t>(static_cast<int64_t>(v16)));
        if (*reinterpret_cast<signed char*>(&eax20) == 32) 
            goto addr_4064a2_5;
        if (v10 == 1) 
            goto addr_405e5a_11;
        if (v12 == 1 && v10 == 2) {
            *reinterpret_cast<int32_t*>(&rsi) = reinterpret_cast<int32_t>("lcd");
            *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
            rdi = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint64_t>(static_cast<int64_t>(v16)));
            eax21 = fun_4029f0(rdi, "lcd", 3);
            if (eax21) {
                *reinterpret_cast<int32_t*>(&rsi) = reinterpret_cast<int32_t>("crt");
                *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
                rdi = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint64_t>(static_cast<int64_t>(v16)));
                eax22 = fun_4029f0(rdi, "crt", 3);
                if (!eax22) {
                    *reinterpret_cast<int32_t*>(v6 + 0x800) = 2;
                    v16 = v16 + 2;
                }
            } else {
                *reinterpret_cast<int32_t*>(v6 + 0x800) = 1;
                v16 = v16 + 2;
            }
            goto addr_4064a2_5;
        }
        if (v11 == 1 && v10 == 2) {
            if (!v7 && ((v14 == 1 || *reinterpret_cast<void***>(v6 + v13 * 8) && !*reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + v13 * 8))) && *reinterpret_cast<void***>(v6 + v13 * 8))) {
                if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + v13 * 8) + 8)) {
                    rdx23 = reinterpret_cast<void**>(static_cast<int64_t>(v13));
                    rdi24 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + reinterpret_cast<unsigned char>(rdx23) * 8) + 8);
                    fun_402b70(rdi24, rsi, rdx23, rcx25, r8_26);
                }
                rdx27 = reinterpret_cast<void**>(static_cast<int64_t>(v13));
                rdi28 = *reinterpret_cast<void***>(v6 + reinterpret_cast<unsigned char>(rdx27) * 8);
                fun_402b70(rdi28, rsi, rdx27, rcx25, r8_29);
                *reinterpret_cast<void***>(v6 + v13 * 8) = reinterpret_cast<void**>(0);
            }
            ++v16;
            rcx25 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp4) + 0xffffffffffffff50);
            rsi = rcx25;
            rdi = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp4) + 0xffffffffffffff60);
            rax30 = fun_402cc0(rdi, rsi, 16);
            v13 = *reinterpret_cast<int32_t*>(&rax30);
            eax31 = *v32;
            if (*reinterpret_cast<signed char*>(&eax31)) 
                goto addr_40611c_24;
            if (!v7) {
                v14 = 1;
            } else {
                *reinterpret_cast<int32_t*>(&rdi) = 16;
                *reinterpret_cast<int32_t*>(&rdi + 4) = 0;
                rax33 = fun_402a00(16, rsi, 16);
                rcx25 = rax33;
                *reinterpret_cast<void***>(v6 + v13 * 8) = rcx25;
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + v13 * 8)) = reinterpret_cast<void**>(0xffffffff);
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + v13 * 8) + 8) = reinterpret_cast<void**>(0);
            }
            ++v15;
            goto addr_4064a2_5;
        }
        if (v11 != 1 || v10 != 3) {
            addr_4064a2_5:
            ++v16;
            continue;
        } else {
            v34 = 0;
            while ((eax35 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint64_t>(static_cast<int64_t>(v34 + v16))), *reinterpret_cast<signed char*>(&eax35) != 32) && (eax36 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint64_t>(static_cast<int64_t>(v34 + v16))), *reinterpret_cast<signed char*>(&eax36) != 41)) {
                edx37 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint64_t>(static_cast<int64_t>(v34 + v16)));
                *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp4) + v34 - 0xa0) = *reinterpret_cast<signed char*>(&edx37);
                ++v34;
            }
            *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp4) + v34 - 0xa0) = 0;
            rcx25 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp4) + 0xffffffffffffff50);
            rsi = rcx25;
            rdi = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp4) + 0xffffffffffffff60);
            rax38 = fun_402cc0(rdi, rsi, 16);
            v39 = rax38;
            eax40 = *v41;
            if (*reinterpret_cast<signed char*>(&eax40)) 
                goto addr_40627f_34;
            if (v7) 
                goto addr_406296_36;
        }
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + v13 * 8))) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + v13 * 8)) == 0))) {
            v14 = 0;
            v42 = 0;
            v43 = reinterpret_cast<void**>(0);
            while (reinterpret_cast<signed char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + v13 * 8))) > reinterpret_cast<signed char>(v43)) {
                rdx44 = reinterpret_cast<void*>(static_cast<int64_t>(reinterpret_cast<int32_t>(v43)));
                eax45 = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + v13 * 8) + 8)) + (reinterpret_cast<uint64_t>(rdx44) + reinterpret_cast<uint64_t>(rdx44)));
                *reinterpret_cast<uint32_t*>(&rax46) = *reinterpret_cast<uint16_t*>(&eax45);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax46) + 4) = 0;
                if (rax46 != v39) {
                    rcx47 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + v13 * 8) + 8);
                    *reinterpret_cast<int32_t*>(&rax48) = v42;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax48) + 4) = 0;
                    v42 = static_cast<int32_t>(rax48 + 1);
                    rax49 = reinterpret_cast<void*>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax48)));
                    rcx25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rcx47) + (reinterpret_cast<uint64_t>(rax49) + reinterpret_cast<uint64_t>(rax49)));
                    rdx50 = reinterpret_cast<void*>(static_cast<int64_t>(reinterpret_cast<int32_t>(v43)));
                    eax51 = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + v13 * 8) + 8)) + (reinterpret_cast<uint64_t>(rdx50) + reinterpret_cast<uint64_t>(rdx50)));
                    *reinterpret_cast<void***>(rcx25) = *reinterpret_cast<void***>(&eax51);
                }
                ++v43;
            }
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + v13 * 8)) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + v13 * 8)) - 1;
            goto addr_4064a2_5;
        }
        addr_406296_36:
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + v13 * 8)) == 0xffffffff)) {
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + v13 * 8)) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + v13 * 8)) + 1;
        } else {
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + v13 * 8)) = reinterpret_cast<void**>(1);
        }
        rbx52 = *reinterpret_cast<void***>(v6 + v13 * 8);
        rax53 = reinterpret_cast<void*>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + v13 * 8)))));
        rsi = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax53) + reinterpret_cast<uint64_t>(rax53));
        rdi = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + v13 * 8) + 8);
        rax54 = fun_402fb0(rdi, rsi);
        *reinterpret_cast<void***>(rbx52 + 8) = rax54;
        rcx25 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + v13 * 8) + 8);
        rax55 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + v13 * 8)));
        rdx56 = v39;
        *reinterpret_cast<int16_t*>(rax55 + rax55 - 2 + reinterpret_cast<unsigned char>(rcx25)) = *reinterpret_cast<int16_t*>(&rdx56);
        goto addr_4064a2_5;
        addr_405e5a_11:
        *reinterpret_cast<int32_t*>(&rsi) = reinterpret_cast<int32_t>("vcp(");
        *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
        rdi = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint64_t>(static_cast<int64_t>(v16)));
        eax57 = fun_4029f0(rdi, "vcp(", 4);
        if (!eax57 || (*reinterpret_cast<int32_t*>(&rsi) = reinterpret_cast<int32_t>("vcp "), *reinterpret_cast<int32_t*>(&rsi + 4) = 0, rdi = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint64_t>(static_cast<int64_t>(v16))), eax58 = fun_4029f0(rdi, "vcp ", 4), !eax58)) {
            v11 = 1;
            v16 = v16 + 2;
            goto addr_4064a2_5;
        } else {
            *reinterpret_cast<int32_t*>(&rsi) = reinterpret_cast<int32_t>("type");
            *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
            rdi = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint64_t>(static_cast<int64_t>(v16)));
            eax59 = fun_4029f0(rdi, "type", 4);
            if (!eax59) {
                v12 = 1;
                v16 = v16 + 3;
                goto addr_4064a2_5;
            }
        }
    }
    if (!v7 && ((v14 == 1 || *reinterpret_cast<void***>(v6 + v13 * 8) && !*reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + v13 * 8))) && *reinterpret_cast<void***>(v6 + v13 * 8))) {
        if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + v13 * 8) + 8)) {
            rdx60 = reinterpret_cast<void**>(static_cast<int64_t>(v13));
            rdi61 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + reinterpret_cast<unsigned char>(rdx60) * 8) + 8);
            fun_402b70(rdi61, rsi, rdx60, rcx25, r8_62);
        }
        rdx63 = reinterpret_cast<void**>(static_cast<int64_t>(v13));
        rdi = *reinterpret_cast<void***>(v6 + reinterpret_cast<unsigned char>(rdx63) * 8);
        fun_402b70(rdi, rsi, rdx63, rcx25, r8_64);
        *reinterpret_cast<void***>(v6 + v13 * 8) = reinterpret_cast<void**>(0);
    }
    *reinterpret_cast<int32_t*>(&rax65) = v15;
    *reinterpret_cast<int32_t*>(&rax65 + 4) = 0;
    addr_4065a8_55:
    rbx66 = v9 ^ g28;
    if (rbx66) {
        rax65 = fun_402e20(rdi, rsi, rdi, rsi);
    }
    return rax65;
    addr_40627f_34:
    *reinterpret_cast<int32_t*>(&rax65) = -1;
    *reinterpret_cast<int32_t*>(&rax65 + 4) = 0;
    goto addr_4065a8_55;
    addr_40611c_24:
    *reinterpret_cast<int32_t*>(&rax65) = -1;
    *reinterpret_cast<int32_t*>(&rax65 + 4) = 0;
    goto addr_4065a8_55;
}

int64_t strncmp = 0x4029f6;

int32_t fun_4029f0(void** rdi, void** rsi, void** rdx) {
    goto strncmp;
}

int64_t free = 0x402b76;

void fun_402b70(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    goto free;
}

int64_t malloc = 0x402a06;

void** fun_402a00(void** rdi, void** rsi, void** rdx) {
    goto malloc;
}

int64_t strtol = 0x402cc6;

int64_t fun_402cc0(void** rdi, void** rsi, void** rdx) {
    goto strtol;
}

uint32_t fun_4065c6(void** rdi, uint32_t esi, void** rdx, int32_t ecx) {
    int32_t eax5;
    uint64_t rax6;
    void** rsi7;
    void** rdi8;
    void** rax9;
    uint32_t edx10;
    void** rax11;
    void** rsi12;

    eax5 = ecx;
    rax6 = g28;
    rsi7 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 0xfffffffffffffff0);
    rdi8 = rdi;
    rax9 = fun_4056fd(rdi8, rsi7, 3, rdi8, rsi7, 3);
    if (*reinterpret_cast<int32_t*>(&rax9) >= 0) {
        edx10 = *reinterpret_cast<unsigned char*>(&eax5);
        rdi8 = rdi;
        *reinterpret_cast<uint32_t*>(&rax11) = fun_405879(rdi8, rdx, edx10, rdi8, rdx, edx10);
    } else {
        *reinterpret_cast<uint32_t*>(&rax11) = 0xffffffff;
    }
    rsi12 = reinterpret_cast<void**>(rax6 ^ g28);
    if (rsi12) {
        rax11 = fun_402e20(rdi8, rsi12, rdi8, rsi12);
    }
    return *reinterpret_cast<uint32_t*>(&rax11);
}

void** fun_4068da(void** rdi, int32_t esi) {
    uint64_t rax3;
    void** rsi4;
    void** rax5;
    uint64_t rdx6;

    rax3 = g28;
    rsi4 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 0xfffffffffffffff7);
    rax5 = fun_4056fd(rdi, rsi4, 1);
    rdx6 = rax3 ^ g28;
    if (rdx6) {
        rax5 = fun_402e20(rdi, rsi4);
    }
    return rax5;
}

void fun_402880(void** rdi, void** rsi, void** rdx, ...);

int32_t fun_40692f(void** rdi, int32_t esi) {
    void* rbp3;
    uint64_t rax4;
    void** rsi5;
    void** rax6;
    uint32_t eax7;
    int32_t eax8;
    void** rax9;
    void** rdx10;
    void** rax11;
    uint32_t eax12;
    unsigned char v13;
    uint32_t eax14;
    unsigned char v15;
    uint32_t eax16;
    unsigned char v17;
    uint32_t eax18;
    unsigned char v19;
    uint32_t eax20;
    unsigned char v21;
    uint32_t eax22;
    unsigned char v23;
    uint32_t eax24;
    unsigned char v25;
    int32_t eax26;
    void** rax27;
    void** rdx28;
    int32_t eax29;
    int32_t eax30;
    uint32_t edx31;
    unsigned char v32;
    void** rdi33;

    rbp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax4 = g28;
    *reinterpret_cast<int32_t*>(&rsi5) = esi;
    *reinterpret_cast<int32_t*>(&rsi5 + 4) = 0;
    rax6 = fun_405362(rdi, *reinterpret_cast<int32_t*>(&rsi5), reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70, 1);
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax6) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax6) == 0) || (*reinterpret_cast<int32_t*>(&rsi5) = esi, *reinterpret_cast<int32_t*>(&rsi5 + 4) = 0, eax7 = fun_4054a6(rdi, *reinterpret_cast<int32_t*>(&rsi5), reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70, 0x80), reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax7) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax7 == 0))) {
        if (!*reinterpret_cast<int32_t*>(rdi + 0x844) || (eax8 = g60f55c, !!eax8)) {
            rax9 = stderr;
            *reinterpret_cast<int32_t*>(&rdx10) = esi;
            *reinterpret_cast<int32_t*>(&rdx10 + 4) = 0;
            *reinterpret_cast<int32_t*>(&rsi5) = reinterpret_cast<int32_t>("Reading EDID 0x%02x failed.\n");
            *reinterpret_cast<int32_t*>(&rsi5 + 4) = 0;
            fun_402ff0(rax9, "Reading EDID 0x%02x failed.\n", rdx10, rax9, "Reading EDID 0x%02x failed.\n", rdx10);
        }
        *reinterpret_cast<int32_t*>(&rax11) = -1;
    } else {
        if ((eax12 = v13, *reinterpret_cast<signed char*>(&eax12) != -1) || ((eax14 = v15, *reinterpret_cast<signed char*>(&eax14) != -1) || ((eax16 = v17, *reinterpret_cast<signed char*>(&eax16) != -1) || ((eax18 = v19, *reinterpret_cast<signed char*>(&eax18) != -1) || ((eax20 = v21, *reinterpret_cast<signed char*>(&eax20) != -1) || ((eax22 = v23, *reinterpret_cast<signed char*>(&eax22) != -1) || (eax24 = v25, !!*reinterpret_cast<signed char*>(&eax24)))))))) {
            if (!*reinterpret_cast<int32_t*>(rdi + 0x844) || (eax26 = g60f55c, !!eax26)) {
                rax27 = stderr;
                *reinterpret_cast<int32_t*>(&rdx28) = esi;
                *reinterpret_cast<int32_t*>(&rdx28 + 4) = 0;
                *reinterpret_cast<int32_t*>(&rsi5) = reinterpret_cast<int32_t>("Corrupted EDID at 0x%02x.\n");
                *reinterpret_cast<int32_t*>(&rsi5 + 4) = 0;
                fun_402ff0(rax27, "Corrupted EDID at 0x%02x.\n", rdx28, rax27, "Corrupted EDID at 0x%02x.\n", rdx28);
            }
            *reinterpret_cast<int32_t*>(&rax11) = -1;
        } else {
            fun_402880(rdi + 16, 8, "%c%c%c%02X%02X");
            if (!*reinterpret_cast<int32_t*>(rdi + 0x844) && (eax29 = g60f55c, !!eax29)) {
            }
            *reinterpret_cast<int32_t*>(&rsi5) = reinterpret_cast<int32_t>("DASUNG");
            *reinterpret_cast<int32_t*>(&rsi5 + 4) = 0;
            eax30 = fun_4029f0(reinterpret_cast<int64_t>(rbp3) - 0x90 + 95, "DASUNG", 6);
            if (!eax30) {
                *reinterpret_cast<int32_t*>(rdi + 0x84c) = 1;
            }
            edx31 = static_cast<uint32_t>(v32) & 0xffffff80;
            *reinterpret_cast<void***>(rdi + 24) = *reinterpret_cast<void***>(&edx31);
            *reinterpret_cast<int32_t*>(&rax11) = 0;
        }
    }
    rdi33 = reinterpret_cast<void**>(rax4 ^ g28);
    if (rdi33) {
        rax11 = fun_402e20(rdi33, rsi5, rdi33, rsi5);
    }
    return *reinterpret_cast<int32_t*>(&rax11);
}

void fun_402870(void** rdi, void** rsi, int64_t rdx, ...);

int32_t fun_402940(void** rdi, int64_t rsi, void*** rdx, int32_t* rcx);

int32_t fun_407f42(void** edi, int32_t esi);

int32_t fun_406c23(void** rdi, void** rsi, int32_t edx, int32_t ecx, int32_t r8d) {
    uint64_t rax6;
    int32_t eax7;
    int32_t eax8;
    void** rax9;
    void** rsi10;
    void** rdi11;
    void** rax12;
    int32_t eax13;
    int32_t esi14;
    void** edi15;
    int32_t eax16;
    void** rax17;
    void** rax18;
    void** eax19;
    int32_t eax20;
    uint64_t rcx21;
    int32_t eax22;

    rax6 = g28;
    fun_402870(rdi, 0, 0x850);
    *reinterpret_cast<int32_t*>(rdi + 0x844) = r8d;
    eax7 = fun_4029f0(rsi, "dev:", 4);
    if (eax7) {
        eax8 = fun_4029f0(rsi, "adl:", 4);
        if (eax8) {
            rax9 = stderr;
            *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>("Invalid filename (%s).\n");
            *reinterpret_cast<int32_t*>(&rsi10 + 4) = 0;
            rdi11 = rax9;
            fun_402ff0(rdi11, "Invalid filename (%s).\n", rsi);
            *reinterpret_cast<int32_t*>(&rax12) = -3;
        } else {
            *reinterpret_cast<void***>(rdi + 8) = reinterpret_cast<void**>(0xffffffff);
            *reinterpret_cast<int32_t*>(rdi + 12) = -1;
            eax13 = fun_402940(rsi, "adl:%d:%d", rdi + 8, rdi + 12);
            if (eax13 == 2) {
                esi14 = *reinterpret_cast<int32_t*>(rdi + 12);
                edi15 = *reinterpret_cast<void***>(rdi + 8);
                eax16 = fun_407f42(edi15, esi14);
                if (!eax16) {
                    *reinterpret_cast<int32_t*>(rdi + 0x840) = 1;
                    goto addr_406de7_7;
                } else {
                    rax17 = stderr;
                    *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>("ADL display not found (%s).\n");
                    *reinterpret_cast<int32_t*>(&rsi10 + 4) = 0;
                    rdi11 = rax17;
                    fun_402ff0(rdi11, "ADL display not found (%s).\n", rsi, rdi11, "ADL display not found (%s).\n", rsi);
                    *reinterpret_cast<int32_t*>(&rax12) = -3;
                }
            } else {
                rax18 = stderr;
                *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>("Invalid filename (%s).\n");
                *reinterpret_cast<int32_t*>(&rsi10 + 4) = 0;
                rdi11 = rax18;
                fun_402ff0(rdi11, "Invalid filename (%s).\n", rsi, rdi11, "Invalid filename (%s).\n", rsi);
                *reinterpret_cast<int32_t*>(&rax12) = -3;
            }
        }
    } else {
        *reinterpret_cast<int32_t*>(&rsi10) = 2;
        *reinterpret_cast<int32_t*>(&rsi10 + 4) = 0;
        rdi11 = rsi + 4;
        eax19 = fun_403060(rdi11, 2, 4);
        *reinterpret_cast<void***>(rdi) = eax19;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdi)) >= reinterpret_cast<signed char>(0)) {
            *reinterpret_cast<int32_t*>(rdi + 0x840) = 0;
            goto addr_406de7_7;
        } else {
            if (!r8d || (eax20 = g60f55c, !!eax20)) {
                rdi11 = rsi;
                fun_402fe0(rdi11, 2);
            }
            *reinterpret_cast<int32_t*>(&rax12) = -3;
        }
    }
    addr_406e12_15:
    rcx21 = rax6 ^ g28;
    if (rcx21) {
        rax12 = fun_402e20(rdi11, rsi10, rdi11, rsi10);
    }
    return *reinterpret_cast<int32_t*>(&rax12);
    addr_406de7_7:
    *reinterpret_cast<int32_t*>(rdi + 4) = edx;
    *reinterpret_cast<int32_t*>(&rsi10) = ecx;
    *reinterpret_cast<int32_t*>(&rsi10 + 4) = 0;
    rdi11 = rdi;
    eax22 = fun_40692f(rdi11, *reinterpret_cast<int32_t*>(&rsi10));
    if (eax22 >= 0) {
        *reinterpret_cast<int32_t*>(&rax12) = 0;
        goto addr_406e12_15;
    } else {
        *reinterpret_cast<int32_t*>(&rax12) = -2;
        goto addr_406e12_15;
    }
}

int64_t __isoc99_sscanf = 0x402946;

int32_t fun_402940(void** rdi, int64_t rsi, void*** rdx, int32_t* rcx) {
    goto __isoc99_sscanf;
}

int32_t fun_406e28(void** rdi, void** rsi, int32_t edx) {
    int32_t eax4;

    eax4 = fun_406c23(rdi, rsi, 55, 80, edx);
    return eax4;
}

int64_t fun_406e7c(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    void** v6;
    void** rdx7;
    void** rsi8;
    int32_t eax9;
    int32_t eax10;
    int32_t v11;
    void** rdx12;
    void** rdi13;
    void** rdi14;
    void** rdi15;
    int32_t eax16;
    int64_t rax17;

    v6 = rdi;
    *reinterpret_cast<int32_t*>(&rdx7) = 3;
    *reinterpret_cast<int32_t*>(&rdx7 + 4) = 0;
    *reinterpret_cast<int32_t*>(&rsi8) = reinterpret_cast<int32_t>("SAM");
    *reinterpret_cast<int32_t*>(&rsi8 + 4) = 0;
    eax9 = fun_4029f0(v6 + 16, "SAM", 3);
    if (eax9 || (*reinterpret_cast<int32_t*>(&rcx) = 0, *reinterpret_cast<int32_t*>(&rcx + 4) = 0, *reinterpret_cast<int32_t*>(&rdx7) = 0, *reinterpret_cast<int32_t*>(&rdx7 + 4) = 0, *reinterpret_cast<int32_t*>(&rsi8) = 0xf5, *reinterpret_cast<int32_t*>(&rsi8 + 4) = 0, eax10 = fun_405b45(v6, -11, 0, 0), eax10 >= 0)) {
        v11 = 0;
        while (v11 <= 0xff) {
            rdx7 = reinterpret_cast<void**>(v11 + 6);
            if (*reinterpret_cast<void***>(v6 + reinterpret_cast<unsigned char>(rdx7) * 8)) {
                if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<uint64_t>((v11 + 6) * 8)) + 8)) {
                    rdx12 = reinterpret_cast<void**>(v11 + 6);
                    rdi13 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v6 + reinterpret_cast<unsigned char>(rdx12) * 8) + 8);
                    fun_402b70(rdi13, rsi8, rdx12, rcx, r8);
                }
                rdx7 = reinterpret_cast<void**>(v11 + 6);
                rdi14 = *reinterpret_cast<void***>(v6 + reinterpret_cast<unsigned char>(rdx7) * 8);
                fun_402b70(rdi14, rsi8, rdx7, rcx, r8);
            }
            ++v11;
        }
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(v6)) < reinterpret_cast<signed char>(0)) 
            goto addr_406f71_10;
        rdi15 = *reinterpret_cast<void***>(v6);
        *reinterpret_cast<int32_t*>(&rdi15 + 4) = 0;
        eax16 = fun_4028b0(rdi15, rsi8, rdx7, rcx, r8);
        if (eax16 < 0) 
            goto addr_406f6a_12;
    } else {
        *reinterpret_cast<int32_t*>(&rax17) = -1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = 0;
        goto addr_406f76_14;
    }
    addr_406f71_10:
    *reinterpret_cast<int32_t*>(&rax17) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = 0;
    addr_406f76_14:
    return rax17;
    addr_406f6a_12:
    *reinterpret_cast<int32_t*>(&rax17) = -3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = 0;
    goto addr_406f76_14;
}

int64_t snprintf = 0x402886;

void fun_402880(void** rdi, void** rsi, void** rdx, ...) {
    goto snprintf;
}

void** stdout = reinterpret_cast<void**>(0);

void fun_403070(void** rdi, void** rsi, void** rdx);

void** fun_402bc0(int64_t rdi);

struct s1 {
    signed char[19] pad19;
    void** f19;
};

struct s1* fun_402c10(void** rdi, void** rsi, void** rdx);

struct s2 {
    signed char[12] pad12;
    void** f12;
};

struct s2* fun_402b80(void** rdi, void** rsi, void** rdx);

void** fun_407017(void** rdi, void** rsi, void** rdx);

void fun_402f50(void** rdi, void** rsi, void** rdx);

int32_t fun_407e8e(void** rdi, void** rsi, void** rdx);

int32_t fun_407eb5(int32_t edi, void** rsi, void** rdx);

void** fun_4071a9() {
    void* rbp1;
    uint64_t rax2;
    uint64_t v3;
    void** rax4;
    void** rsi5;
    void** rdx6;
    void** rax7;
    void** v8;
    void** rsi9;
    void** rdx10;
    struct s1* rax11;
    int32_t eax12;
    struct s2* rax13;
    void** rax14;
    struct s2* rax15;
    void** rsi16;
    int32_t eax17;
    void** rax18;
    void** rdi19;
    int32_t v20;
    int32_t eax21;
    void** rdx22;
    int32_t eax23;
    void** rax24;
    int32_t eax25;
    void** rax26;
    void** rax27;
    uint64_t rbx28;

    rbp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax2 = g28;
    v3 = rax2;
    rax4 = stdout;
    fun_403070(rax4, rsi5, rdx6);
    rax7 = fun_402bc0("/dev/");
    v8 = rax7;
    while (rax11 = fun_402c10(v8, rsi9, rdx10), !!rax11) {
        *reinterpret_cast<int32_t*>(&rdx10) = 4;
        *reinterpret_cast<int32_t*>(&rdx10 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>("i2c-");
        *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
        eax12 = fun_4029f0(&rax11->f19, "i2c-", 4);
        if (eax12) 
            continue;
        rax13 = fun_402b80(&rax11->f19, "i2c-", 4);
        rax14 = fun_402a00(&rax13->f12, "i2c-", 4);
        rax15 = fun_402b80(&rax11->f19, "i2c-", 4);
        rsi16 = reinterpret_cast<void**>(&rax15->f12);
        fun_402880(rax14, rsi16, "dev:/dev/%s", rax14, rsi16, "dev:/dev/%s");
        rdx10 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffc8);
        rsi9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffc0);
        fun_407017(rax14, rsi9, rdx10);
        eax17 = g60f55c;
        if (eax17) 
            continue;
        rax18 = stdout;
        fun_403070(rax18, rsi9, rdx10);
    }
    rdi19 = v8;
    fun_402f50(rdi19, rsi9, rdx10);
    v20 = 0;
    while (eax21 = fun_407e8e(rdi19, rsi9, rdx10), eax21 > v20) {
        rdx22 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffb0);
        rsi9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffac);
        *reinterpret_cast<int32_t*>(&rdi19) = v20;
        *reinterpret_cast<int32_t*>(&rdi19 + 4) = 0;
        eax23 = fun_407eb5(*reinterpret_cast<int32_t*>(&rdi19), rsi9, rdx22);
        if (eax23) 
            goto addr_407373_9;
        rax24 = fun_402a00(64, rsi9, rdx22);
        fun_402880(rax24, 64, "adl:%d:%d", rax24, 64, "adl:%d:%d");
        rdx10 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffc8);
        rsi9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffc0);
        rdi19 = rax24;
        fun_407017(rdi19, rsi9, rdx10);
        eax25 = g60f55c;
        if (!eax25) {
            rax26 = stdout;
            rdi19 = rax26;
            fun_403070(rdi19, rsi9, rdx10);
        }
        ++v20;
    }
    addr_407374_14:
    rax27 = reinterpret_cast<void**>(0);
    rbx28 = v3 ^ g28;
    if (rbx28) {
        rax27 = fun_402e20(rdi19, rsi9, rdi19, rsi9);
    }
    return rax27;
    addr_407373_9:
    goto addr_407374_14;
}

int64_t strlen = 0x402b86;

struct s2* fun_402b80(void** rdi, void** rsi, void** rdx) {
    goto strlen;
}

void** fun_407017(void** rdi, void** rsi, void** rdx) {
    void* rbp4;
    uint64_t rax5;
    void** rcx6;
    void** rdx7;
    void** rsi8;
    int32_t eax9;
    int64_t r8_10;
    void** rax11;
    void** rdx12;
    void** rbx13;
    void** rax14;
    void** rdi15;
    uint32_t edx16;
    unsigned char v17;
    int32_t edx18;
    int32_t v19;
    void** rdi20;
    int64_t r8_21;
    void** rax22;

    rbp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax5 = g28;
    rcx6 = rdi;
    *reinterpret_cast<int32_t*>(&rdx7) = 1;
    *reinterpret_cast<int32_t*>(&rdx7 + 4) = 0;
    rsi8 = rcx6;
    eax9 = fun_406e28(reinterpret_cast<int64_t>(rbp4) + 0xfffffffffffff790, rsi8, 1);
    if (eax9 < -1) {
        fun_402b70(rdi, rsi8, 1, rcx6, r8_10);
    } else {
        rax11 = fun_402a00(40, rsi8, 1);
        *reinterpret_cast<void***>(rsi) = rax11;
        rdx12 = rdi;
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi)) = rdx12;
        rdx12 = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(eax9 == 0)));
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 8) = rdx12;
        rbx13 = *reinterpret_cast<void***>(rsi);
        rax14 = fun_402a00(32, rsi8, rdx12);
        *reinterpret_cast<void***>(rbx13 + 16) = rax14;
        rcx6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp4) - 0x870 + 16);
        *reinterpret_cast<int32_t*>(&rsi8) = 32;
        *reinterpret_cast<int32_t*>(&rsi8 + 4) = 0;
        rdi15 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 16);
        fun_402880(rdi15, 32, "Unknown monitor (%s)", rdi15, 32, "Unknown monitor (%s)");
        edx16 = v17;
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 24) = *reinterpret_cast<void***>(&edx16);
        edx18 = v19;
        *reinterpret_cast<unsigned char*>(*reinterpret_cast<void***>(rsi) + 25) = *reinterpret_cast<unsigned char*>(&edx18);
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(rsi) + 32) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdx)) = *reinterpret_cast<void***>(rsi);
        rdx7 = *reinterpret_cast<void***>(rsi) + 32;
        *reinterpret_cast<void***>(rdx) = rdx7;
    }
    rdi20 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp4) + 0xfffffffffffff790);
    fun_406e7c(rdi20, rsi8, rdx7, rcx6, r8_21);
    rax22 = reinterpret_cast<void**>(rax5 ^ g28);
    if (rax22) {
        rax22 = fun_402e20(rdi20, rsi8, rdi20, rsi8);
    }
    return rax22;
}

int64_t fflush = 0x403076;

void fun_403070(void** rdi, void** rsi, void** rdx) {
    goto fflush;
}

int64_t closedir = 0x402f56;

void fun_402f50(void** rdi, void** rsi, void** rdx) {
    goto closedir;
}

void fun_407393(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    void** rdi6;
    void** rdi7;
    void** rdi8;

    if (rdi) {
        rdi6 = *reinterpret_cast<void***>(rdi);
        fun_402b70(rdi6, rsi, rdx, rcx, r8);
        rdi7 = *reinterpret_cast<void***>(rdi + 16);
        fun_402b70(rdi7, rsi, rdx, rcx, r8);
        rdi8 = *reinterpret_cast<void***>(rdi + 32);
        fun_407393(rdi8, rsi, rdx, rcx, r8);
        fun_402b70(rdi, rsi, rdx, rcx, r8);
    }
    return;
}

signed char fun_407434(void** rdi, void** rsi, signed char dl, int32_t ecx);

void** fun_4073e6(void** rdi, void** rsi, uint32_t edx, void** rcx, int32_t r8d);

void** fun_4074ae(void** rdi, uint32_t esi, void** rdx, void** rcx, int64_t r8) {
    void* rbp6;
    uint32_t eax7;
    uint64_t rax8;
    void** rdi9;
    void** rsi10;
    void** rax11;
    uint64_t rcx12;

    rbp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    eax7 = esi;
    rax8 = g28;
    rdi9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp6) + 0xffffffffffffff60);
    fun_402870(rdi9, 0, 2);
    if (!*reinterpret_cast<signed char*>(&eax7)) {
    }
    if (rdi) {
        rsi10 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp6) + 0xffffffffffffff60);
        fun_407434(rdi, rsi10, 2, 0);
        fun_402c70(0x927c0, rsi10, 0x927c0, rsi10);
        rdi9 = rdi;
        rax11 = fun_4073e6(rdi9, 0, 0, reinterpret_cast<int64_t>(rbp6) + 0xffffffffffffff70, 8);
    } else {
        *reinterpret_cast<int32_t*>(&rax11) = 0;
        *reinterpret_cast<int32_t*>(&rax11 + 4) = 0;
    }
    rcx12 = rax8 ^ g28;
    if (rcx12) {
        rax11 = fun_402e20(rdi9, 0, rdi9, 0);
    }
    return rax11;
}

void** fun_4075b3(void** rdi, uint32_t esi, void** rdx, void** rcx, int64_t r8) {
    void* rbp6;
    uint64_t rax7;
    void** rdi8;
    void** rsi9;
    void** rax10;
    uint64_t rcx11;

    rbp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax7 = g28;
    rdi8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp6) + 0xffffffffffffff60);
    fun_402870(rdi8, 0, 2);
    if (rdi) {
        rsi9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp6) + 0xffffffffffffff60);
        fun_407434(rdi, rsi9, 2, 0);
        fun_402c70(0x927c0, rsi9, 0x927c0, rsi9);
        rdi8 = rdi;
        rax10 = fun_4073e6(rdi8, 0, 0, reinterpret_cast<int64_t>(rbp6) + 0xffffffffffffff70, 8);
    } else {
        *reinterpret_cast<int32_t*>(&rax10) = 0;
        *reinterpret_cast<int32_t*>(&rax10 + 4) = 0;
    }
    rcx11 = rax7 ^ g28;
    if (rcx11) {
        rax10 = fun_402e20(rdi8, 0, rdi8, 0);
    }
    return rax10;
}

void** fun_4076ae(void** rdi, uint32_t esi, uint32_t edx) {
    void* rbp4;
    uint64_t rax5;
    void** rsi6;
    void** rax7;
    void** rax8;
    void** rdi9;

    rbp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax5 = g28;
    fun_402870(reinterpret_cast<int64_t>(rbp4) + 0xffffffffffffff60, 0, 2);
    if (rdi) {
        rsi6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp4) + 0xffffffffffffff60);
        fun_407434(rdi, rsi6, 2, 0);
        fun_402c70(0xc3500, rsi6, 0xc3500, rsi6);
        rax7 = fun_4073e6(rdi, 0, 0, reinterpret_cast<int64_t>(rbp4) + 0xffffffffffffff70, 11);
        *reinterpret_cast<uint32_t*>(&rax8) = *reinterpret_cast<unsigned char*>(&rax7);
        *reinterpret_cast<int32_t*>(&rax8 + 4) = 0;
    } else {
        *reinterpret_cast<uint32_t*>(&rax8) = 0;
        *reinterpret_cast<int32_t*>(&rax8 + 4) = 0;
    }
    rdi9 = reinterpret_cast<void**>(rax5 ^ g28);
    if (rdi9) {
        rax8 = fun_402e20(rdi9, 0, rdi9, 0);
    }
    return rax8;
}

void** fun_4077d5(void** rdi, uint32_t esi) {
    void* rbp3;
    uint64_t rax4;
    void** rdi5;
    void** rsi6;
    void** rax7;
    uint64_t rcx8;

    rbp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax4 = g28;
    rdi5 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff60);
    fun_402870(rdi5, 0, 2);
    if (rdi) {
        rsi6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff60);
        fun_407434(rdi, rsi6, 2, 0);
        fun_402c70(0x7a120, rsi6, 0x7a120, rsi6);
        rdi5 = rdi;
        rax7 = fun_4073e6(rdi5, 0, 0, reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70, 8);
    } else {
        *reinterpret_cast<int32_t*>(&rax7) = 0;
        *reinterpret_cast<int32_t*>(&rax7 + 4) = 0;
    }
    rcx8 = rax4 ^ g28;
    if (rcx8) {
        rax7 = fun_402e20(rdi5, 0, rdi5, 0);
    }
    return rax7;
}

void** fun_4078bd(void** rdi, uint32_t esi) {
    void* rbp3;
    uint64_t rax4;
    void** rdi5;
    void** rsi6;
    void** rax7;
    uint64_t rcx8;

    rbp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax4 = g28;
    rdi5 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff60);
    fun_402870(rdi5, 0, 2);
    if (rdi) {
        rsi6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff60);
        fun_407434(rdi, rsi6, 2, 0);
        fun_402c70(0x7a120, rsi6, 0x7a120, rsi6);
        rdi5 = rdi;
        rax7 = fun_4073e6(rdi5, 0, 0, reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70, 11);
    } else {
        *reinterpret_cast<int32_t*>(&rax7) = 0;
        *reinterpret_cast<int32_t*>(&rax7 + 4) = 0;
    }
    rcx8 = rax4 ^ g28;
    if (rcx8) {
        rax7 = fun_402e20(rdi5, 0, rdi5, 0);
    }
    return rax7;
}

void** fun_4079a5(void** rdi, uint32_t esi) {
    void* rbp3;
    uint64_t rax4;
    void** rdi5;
    void** rsi6;
    void** rax7;
    uint64_t rcx8;

    rbp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax4 = g28;
    rdi5 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff60);
    fun_402870(rdi5, 0, 2);
    if (rdi) {
        rsi6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff60);
        fun_407434(rdi, rsi6, 2, 0);
        fun_402c70(0x7a120, rsi6, 0x7a120, rsi6);
        rdi5 = rdi;
        rax7 = fun_4073e6(rdi5, 0, 0, reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70, 11);
    } else {
        *reinterpret_cast<int32_t*>(&rax7) = 0;
        *reinterpret_cast<int32_t*>(&rax7 + 4) = 0;
    }
    rcx8 = rax4 ^ g28;
    if (rcx8) {
        rax7 = fun_402e20(rdi5, 0, rdi5, 0);
    }
    return rax7;
}

void** fun_407a8d(void** rdi, uint32_t esi) {
    void* rbp3;
    uint64_t rax4;
    void** rdi5;
    void** rsi6;
    void** rax7;
    uint64_t rcx8;

    rbp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax4 = g28;
    rdi5 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff60);
    fun_402870(rdi5, 0, 2);
    if (rdi) {
        rsi6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff60);
        fun_407434(rdi, rsi6, 2, 0);
        fun_402c70(0x7a120, rsi6, 0x7a120, rsi6);
        rdi5 = rdi;
        rax7 = fun_4073e6(rdi5, 0, 0, reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70, 11);
    } else {
        *reinterpret_cast<int32_t*>(&rax7) = 0;
        *reinterpret_cast<int32_t*>(&rax7 + 4) = 0;
    }
    rcx8 = rax4 ^ g28;
    if (rcx8) {
        rax7 = fun_402e20(rdi5, 0, rdi5, 0);
    }
    return rax7;
}

void** fun_407b75(void** rdi, uint32_t esi) {
    void* rbp3;
    uint64_t rax4;
    void** rdi5;
    void** rsi6;
    void** rax7;
    uint64_t rcx8;

    rbp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax4 = g28;
    rdi5 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff60);
    fun_402870(rdi5, 0, 2);
    if (rdi) {
        rsi6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff60);
        fun_407434(rdi, rsi6, 2, 0);
        fun_402c70(0x7a120, rsi6, 0x7a120, rsi6);
        rdi5 = rdi;
        rax7 = fun_4073e6(rdi5, 0, 0, reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70, 11);
    } else {
        *reinterpret_cast<int32_t*>(&rax7) = 0;
        *reinterpret_cast<int32_t*>(&rax7 + 4) = 0;
    }
    rcx8 = rax4 ^ g28;
    if (rcx8) {
        rax7 = fun_402e20(rdi5, 0, rdi5, 0);
    }
    return rax7;
}

void** fun_407c5d(void** rdi, uint32_t esi, ...) {
    void* rbp3;
    uint32_t eax4;
    uint64_t rax5;
    void** rdi6;
    void** rsi7;
    void** rax8;
    uint64_t rcx9;

    rbp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    eax4 = esi;
    rax5 = g28;
    rdi6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff60);
    fun_402870(rdi6, 0, 2);
    if (!*reinterpret_cast<int16_t*>(&eax4)) {
    }
    if (rdi) {
        rsi7 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff60);
        fun_407434(rdi, rsi7, 2, 0);
        fun_402c70(0x7a120, rsi7, 0x7a120, rsi7);
        rdi6 = rdi;
        rax8 = fun_4073e6(rdi6, 0, 0, reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70, 8);
    } else {
        *reinterpret_cast<int32_t*>(&rax8) = 0;
        *reinterpret_cast<int32_t*>(&rax8 + 4) = 0;
    }
    rcx9 = rax5 ^ g28;
    if (rcx9) {
        rax8 = fun_402e20(rdi6, 0, rdi6, 0);
    }
    return rax8;
}

signed char fun_407d64(void** rdi, int32_t esi, void** rdx, void** rcx, int64_t r8) {
    void* rbp6;
    int32_t eax7;
    uint64_t rax8;
    void** rsi9;
    void** rdi10;
    void** rax11;
    uint64_t rcx12;

    rbp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    eax7 = esi;
    rax8 = g28;
    *reinterpret_cast<int32_t*>(&rsi9) = 0;
    *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
    rdi10 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp6) + 0xffffffffffffffd0);
    fun_402870(rdi10, 0, 2);
    if (!*reinterpret_cast<signed char*>(&eax7)) {
    }
    if (rdi) {
        rsi9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp6) + 0xffffffffffffffd0);
        rdi10 = rdi;
        *reinterpret_cast<signed char*>(&rax11) = fun_407434(rdi10, rsi9, 2, 0);
    } else {
        *reinterpret_cast<int32_t*>(&rax11) = 0;
    }
    rcx12 = rax8 ^ g28;
    if (rcx12) {
        rax11 = fun_402e20(rdi10, rsi9, rdi10, rsi9);
    }
    return *reinterpret_cast<signed char*>(&rax11);
}

void** fun_407e19(int32_t edi, void** rsi, void** rdx) {
    void** rax4;

    rax4 = fun_402a00(static_cast<int64_t>(edi), rsi, rdx);
    if (rax4) {
        fun_402870(rax4, 0, static_cast<int64_t>(edi));
    }
    return rax4;
}

int64_t memset = 0x402876;

void fun_402870(void** rdi, void** rsi, int64_t rdx, ...) {
    goto memset;
}

void fun_407e59(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    void** rdi6;

    if (*reinterpret_cast<void***>(rdi)) {
        rdi6 = *reinterpret_cast<void***>(rdi);
        fun_402b70(rdi6, rsi, rdx, rcx, r8);
        *reinterpret_cast<void***>(rdi) = reinterpret_cast<void**>(0);
    }
    return;
}

void** g60f560 = reinterpret_cast<void**>(0);

int32_t fun_407e8e(void** rdi, void** rsi, void** rdx) {
    void** rax4;
    void** rax5;
    int32_t eax6;

    rax4 = g60f560;
    if (*reinterpret_cast<void***>(rax4)) {
        rax5 = g60f560;
        eax6 = *reinterpret_cast<int32_t*>(rax5 + 0x248);
    } else {
        eax6 = -1;
    }
    return eax6;
}

struct s3 {
    signed char f0;
    void** f1;
};

void fun_403040(void** rdi, void** rsi, int64_t rdx);

void** fun_408053(void** edi, int32_t esi, int32_t edx, void** rcx, uint32_t r8d) {
    void* rsp6;
    uint64_t rax7;
    int64_t rax8;
    void* rsp9;
    struct s3* v10;
    int32_t edx11;
    int64_t rdx12;
    int64_t* rsp13;
    void** rax14;
    void** rax15;
    int64_t r8_16;
    int64_t rsi17;
    void** rdi18;
    int64_t* rsp19;
    void** rsp20;
    int64_t* rsp21;
    int32_t eax22;
    void** rax23;
    void** rsi24;

    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax7 = g28;
    *reinterpret_cast<uint32_t*>(&rax8) = r8d + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 64 - (15 + (rax8 + 15)) / reinterpret_cast<uint64_t>(16) * 16);
    v10 = reinterpret_cast<struct s3*>(reinterpret_cast<uint64_t>(rsp9) + 15 >> 4 << 4);
    edx11 = edx + edx;
    v10->f0 = *reinterpret_cast<signed char*>(&edx11);
    *reinterpret_cast<uint32_t*>(&rdx12) = r8d;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = 0;
    rsp13 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp9) - 8);
    *rsp13 = 0x4080e1;
    fun_403040(&v10->f1, rcx, rdx12);
    rax14 = g60f560;
    rax15 = *reinterpret_cast<void***>(rax14 + 64);
    *reinterpret_cast<uint32_t*>(&r8_16) = r8d + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_16) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rsi17) = esi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = 0;
    rdi18 = edi;
    *reinterpret_cast<int32_t*>(&rdi18 + 4) = 0;
    rsp19 = rsp13 + 1 - 1;
    *rsp19 = 0;
    rsp20 = reinterpret_cast<void**>(rsp19 - 1);
    *rsp20 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 24);
    rsp21 = reinterpret_cast<int64_t*>(rsp20 - 1);
    *rsp21 = 0x40811c;
    eax22 = reinterpret_cast<int32_t>(rax15(rdi18, rsi17, 0, 0, r8_16, v10));
    if (!eax22) {
        *reinterpret_cast<uint32_t*>(&rax23) = r8d;
        *reinterpret_cast<int32_t*>(&rax23 + 4) = 0;
    } else {
        *reinterpret_cast<uint32_t*>(&rax23) = 0xffffffff;
        *reinterpret_cast<int32_t*>(&rax23 + 4) = 0;
    }
    rsi24 = reinterpret_cast<void**>(rax7 ^ g28);
    if (rsi24) {
        *(rsp21 + 1 + 2 - 1) = 0x408147;
        rax23 = fun_402e20(rdi18, rsi24, rdi18, rsi24);
    }
    return rax23;
}

void** fun_402ed0(void** rdi, void** rsi);

void** fun_402f20(void** rdi, int64_t rsi);

void fun_402850(int64_t rdi, void** rsi, void** rdx, void** rcx);

int32_t fun_405145(void** rdi, void** rsi);

int32_t fun_408149() {
    void* rbp1;
    uint64_t rax2;
    uint64_t v3;
    void** rsi4;
    void** rdx5;
    void** rax6;
    void** rax7;
    void** rbx8;
    void** rsi9;
    void** rdi10;
    void** rax11;
    void** rax12;
    void** rbx13;
    void** rax14;
    void** rdi15;
    void** rax16;
    void** rax17;
    void** rbx18;
    void** rax19;
    void** rdi20;
    void** rax21;
    void** rax22;
    void** rbx23;
    void** rax24;
    void** rdi25;
    void** rax26;
    void** rax27;
    void** rbx28;
    void** rax29;
    void** rdi30;
    void** rax31;
    void** rax32;
    void** rbx33;
    void** rax34;
    void** rdi35;
    void** rax36;
    void** rax37;
    void** rbx38;
    void** rax39;
    void** rdi40;
    void** rax41;
    void** rax42;
    void** rbx43;
    void** rax44;
    void** rdi45;
    void** rax46;
    void** rax47;
    void** rax48;
    void** rax49;
    int32_t eax50;
    void** rax51;
    void** rax52;
    void** rdx53;
    int32_t eax54;
    int32_t v55;
    int32_t v56;
    void** rax57;
    void** v58;
    void** rax59;
    void** rax60;
    void** rcx61;
    int32_t v62;
    void** rdx63;
    int32_t eax64;
    int32_t v65;
    int32_t v66;
    int32_t v67;
    int32_t v68;
    void** rax69;
    void** rax70;
    int64_t rdi71;
    int32_t eax72;
    int32_t v73;
    int32_t v74;
    void** rax75;
    void** rdx76;
    void** rax77;
    void** rdx78;
    void** rax79;
    void** rax80;
    int64_t r8_81;
    void** rax82;
    void** rax83;
    void** rdx84;
    void** rax85;
    void** rax86;
    int32_t eax87;
    void** rax88;
    int32_t eax89;
    void** rax90;
    void** rdx91;
    int32_t eax92;
    void** rax93;
    void** rdx94;
    void** rax95;
    void** rax96;
    void** rax97;
    void** rax98;
    void** rax99;
    void** rax100;
    void** rax101;
    int32_t eax102;
    void** rax103;
    int64_t r8_104;
    void** rax105;
    uint64_t rcx106;

    rbp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax2 = g28;
    v3 = rax2;
    rax6 = fun_407e19(0x250, rsi4, rdx5);
    g60f560 = rax6;
    rax7 = g60f560;
    if (rax7) {
        rbx8 = g60f560;
        *reinterpret_cast<int32_t*>(&rsi9) = 0x101;
        *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdi10) = reinterpret_cast<int32_t>("libatiadlxx.so");
        *reinterpret_cast<int32_t*>(&rdi10 + 4) = 0;
        rax11 = fun_402ed0("libatiadlxx.so", 0x101);
        *reinterpret_cast<void***>(rbx8 + 8) = rax11;
        rax12 = g60f560;
        if (*reinterpret_cast<void***>(rax12 + 8)) {
            rbx13 = g60f560;
            rax14 = g60f560;
            rdi15 = *reinterpret_cast<void***>(rax14 + 8);
            rax16 = fun_402f20(rdi15, "ADL_Main_Control_Create");
            *reinterpret_cast<void***>(rbx13 + 16) = rax16;
            rax17 = g60f560;
            if (*reinterpret_cast<void***>(rax17 + 16)) {
                rbx18 = g60f560;
                rax19 = g60f560;
                rdi20 = *reinterpret_cast<void***>(rax19 + 8);
                rax21 = fun_402f20(rdi20, "ADL_Main_Control_Destroy");
                *reinterpret_cast<void***>(rbx18 + 24) = rax21;
                rax22 = g60f560;
                if (*reinterpret_cast<void***>(rax22 + 24)) {
                    rbx23 = g60f560;
                    rax24 = g60f560;
                    rdi25 = *reinterpret_cast<void***>(rax24 + 8);
                    rax26 = fun_402f20(rdi25, "ADL_Adapter_NumberOfAdapters_Get");
                    *reinterpret_cast<void***>(rbx23 + 32) = rax26;
                    rax27 = g60f560;
                    if (*reinterpret_cast<void***>(rax27 + 32)) {
                        rbx28 = g60f560;
                        rax29 = g60f560;
                        rdi30 = *reinterpret_cast<void***>(rax29 + 8);
                        rax31 = fun_402f20(rdi30, "ADL_Adapter_AdapterInfo_Get");
                        *reinterpret_cast<void***>(rbx28 + 40) = rax31;
                        rax32 = g60f560;
                        if (*reinterpret_cast<void***>(rax32 + 40)) {
                            rbx33 = g60f560;
                            rax34 = g60f560;
                            rdi35 = *reinterpret_cast<void***>(rax34 + 8);
                            rax36 = fun_402f20(rdi35, "ADL_Display_NumberOfDisplays_Get");
                            *reinterpret_cast<void***>(rbx33 + 48) = rax36;
                            rax37 = g60f560;
                            if (*reinterpret_cast<void***>(rax37 + 48)) {
                                rbx38 = g60f560;
                                rax39 = g60f560;
                                rdi40 = *reinterpret_cast<void***>(rax39 + 8);
                                rax41 = fun_402f20(rdi40, "ADL_Display_DisplayInfo_Get");
                                *reinterpret_cast<void***>(rbx38 + 56) = rax41;
                                rax42 = g60f560;
                                if (*reinterpret_cast<void***>(rax42 + 56)) {
                                    rbx43 = g60f560;
                                    rax44 = g60f560;
                                    rdi45 = *reinterpret_cast<void***>(rax44 + 8);
                                    rax46 = fun_402f20(rdi45, "ADL_Display_DDCBlockAccess_Get");
                                    *reinterpret_cast<void***>(rbx43 + 64) = rax46;
                                    rax47 = g60f560;
                                    if (*reinterpret_cast<void***>(rax47 + 64)) {
                                        rax48 = g60f560;
                                        rax49 = *reinterpret_cast<void***>(rax48 + 16);
                                        *reinterpret_cast<int32_t*>(&rsi9) = 1;
                                        *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
                                        *reinterpret_cast<int32_t*>(&rdi10) = reinterpret_cast<int32_t>(fun_407e19);
                                        *reinterpret_cast<int32_t*>(&rdi10 + 4) = 0;
                                        eax50 = reinterpret_cast<int32_t>(rax49(fun_407e19, 1));
                                        if (!eax50) {
                                            rax51 = g60f560;
                                            rax52 = *reinterpret_cast<void***>(rax51 + 32);
                                            rdx53 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffbc);
                                            rdi10 = rdx53;
                                            eax54 = reinterpret_cast<int32_t>(rax52(rdi10, 1));
                                            if (!eax54) {
                                                if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(v55 < 0) | reinterpret_cast<uint1_t>(v55 == 0))) {
                                                    rax57 = fun_407e19(v56 * 0x424, 1, rdx53);
                                                    v58 = rax57;
                                                    if (v58) {
                                                        rax59 = g60f560;
                                                        rax60 = *reinterpret_cast<void***>(rax59 + 40);
                                                        *reinterpret_cast<int32_t*>(&rcx61) = v62 * 0x424;
                                                        *reinterpret_cast<int32_t*>(&rcx61 + 4) = 0;
                                                        rdx63 = v58;
                                                        *reinterpret_cast<int32_t*>(&rsi9) = *reinterpret_cast<int32_t*>(&rcx61);
                                                        *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
                                                        eax64 = reinterpret_cast<int32_t>(rax60(rdx63, rsi9));
                                                        v65 = eax64;
                                                        if (!v65) {
                                                            v66 = 0;
                                                            while (v66 < v67) {
                                                                v68 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(v58 + v66 * 0x424) + 4);
                                                                rax69 = g60f560;
                                                                rax70 = *reinterpret_cast<void***>(rax69 + 56);
                                                                rdx63 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffe0);
                                                                rsi9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffc0);
                                                                *reinterpret_cast<int32_t*>(&rdi71) = v68;
                                                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi71) + 4) = 0;
                                                                *reinterpret_cast<int32_t*>(&rcx61) = 1;
                                                                *reinterpret_cast<int32_t*>(&rcx61 + 4) = 0;
                                                                eax72 = reinterpret_cast<int32_t>(rax70(rdi71, rsi9, rdx63, 1));
                                                                if (!eax72) {
                                                                    v73 = 0;
                                                                    while (v73 < -1) {
                                                                        rdx63 = reinterpret_cast<void**>(0);
                                                                        if (!(*reinterpret_cast<uint32_t*>(v73 * 0x228 + 0x224) & 1)) 
                                                                            goto addr_40872c_21;
                                                                        rdx63 = reinterpret_cast<void**>(0);
                                                                        if (!(*reinterpret_cast<uint32_t*>(v73 * 0x228 + 0x224) & 2)) 
                                                                            goto addr_40872c_21;
                                                                        v74 = *reinterpret_cast<int32_t*>(v73 * 0x228);
                                                                        rax75 = g60f560;
                                                                        rdx76 = g60f560;
                                                                        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rax75) + reinterpret_cast<uint64_t>((*reinterpret_cast<int32_t*>(rdx76 + 0x248) + 8) * 8) + 8) = v68;
                                                                        rax77 = g60f560;
                                                                        rdx78 = g60f560;
                                                                        rcx61 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(rdx78 + 0x248) + 8);
                                                                        *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax77 + reinterpret_cast<unsigned char>(rcx61) * 8) + 12) = v74;
                                                                        rax79 = g60f560;
                                                                        *reinterpret_cast<int32_t*>(&rdx63) = *reinterpret_cast<int32_t*>(rax79 + 0x248) + 1;
                                                                        *reinterpret_cast<int32_t*>(&rdx63 + 4) = 0;
                                                                        *reinterpret_cast<int32_t*>(rax79 + 0x248) = *reinterpret_cast<int32_t*>(&rdx63);
                                                                        rax80 = g60f560;
                                                                        if (*reinterpret_cast<int32_t*>(rax80 + 0x248) > 63) 
                                                                            goto addr_40873e_24;
                                                                        addr_40872c_21:
                                                                        ++v73;
                                                                    }
                                                                } else {
                                                                    *reinterpret_cast<int32_t*>(&rsi9) = v65;
                                                                    *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
                                                                    fun_402850("adl error: ADL_Display_DisplayInfo_Get: %d\n", rsi9, rdx63, 1);
                                                                    goto addr_40875d_26;
                                                                }
                                                                addr_40873f_28:
                                                                fun_407e59(reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffe0, rsi9, rdx63, rcx61, r8_81);
                                                                rax82 = g60f560;
                                                                if (*reinterpret_cast<int32_t*>(rax82 + 0x248) > 63) 
                                                                    goto addr_40876f_29;
                                                                addr_40875d_26:
                                                                ++v66;
                                                                continue;
                                                                addr_40873e_24:
                                                                goto addr_40873f_28;
                                                            }
                                                        } else {
                                                            rax83 = stderr;
                                                            *reinterpret_cast<int32_t*>(&rdx84) = v65;
                                                            *reinterpret_cast<int32_t*>(&rdx84 + 4) = 0;
                                                            *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>("Failed to get ADL adapters info: %d\n");
                                                            *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
                                                            rdi10 = rax83;
                                                            fun_402ff0(rdi10, "Failed to get ADL adapters info: %d\n", rdx84);
                                                            *reinterpret_cast<int32_t*>(&rax85) = 0;
                                                            goto addr_40878e_31;
                                                        }
                                                    } else {
                                                        rax86 = stderr;
                                                        *reinterpret_cast<int32_t*>(&rsi9) = 1;
                                                        *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
                                                        *reinterpret_cast<int32_t*>(&rdi10) = reinterpret_cast<int32_t>("ADL error: malloc failed\n");
                                                        *reinterpret_cast<int32_t*>(&rdi10 + 4) = 0;
                                                        fun_402fa0("ADL error: malloc failed\n", 1, 25, rax86);
                                                        *reinterpret_cast<int32_t*>(&rax85) = 0;
                                                        goto addr_40878e_31;
                                                    }
                                                } else {
                                                    eax87 = fun_405145(rdi10, 1);
                                                    if (eax87) {
                                                        rax88 = stderr;
                                                        *reinterpret_cast<int32_t*>(&rsi9) = 1;
                                                        *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
                                                        *reinterpret_cast<int32_t*>(&rdi10) = reinterpret_cast<int32_t>("No ADL adapters found.\n");
                                                        *reinterpret_cast<int32_t*>(&rdi10 + 4) = 0;
                                                        fun_402fa0("No ADL adapters found.\n", 1, 23, rax88);
                                                    }
                                                    *reinterpret_cast<int32_t*>(&rax85) = 0;
                                                    goto addr_40878e_31;
                                                }
                                            } else {
                                                eax89 = fun_405145(rdi10, 1);
                                                if (eax89) {
                                                    rax90 = stderr;
                                                    *reinterpret_cast<int32_t*>(&rdx91) = eax54;
                                                    *reinterpret_cast<int32_t*>(&rdx91 + 4) = 0;
                                                    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>("Failed to get number of ADL adapters: %d\n");
                                                    *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
                                                    rdi10 = rax90;
                                                    fun_402ff0(rdi10, "Failed to get number of ADL adapters: %d\n", rdx91);
                                                }
                                                *reinterpret_cast<int32_t*>(&rax85) = 0;
                                                goto addr_40878e_31;
                                            }
                                        } else {
                                            eax92 = fun_405145(fun_407e19, 1);
                                            if (eax92) {
                                                rax93 = stderr;
                                                *reinterpret_cast<int32_t*>(&rdx94) = eax50;
                                                *reinterpret_cast<int32_t*>(&rdx94 + 4) = 0;
                                                *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>("Failed to initialize ADL: %d\n");
                                                *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
                                                rdi10 = rax93;
                                                fun_402ff0(rdi10, "Failed to initialize ADL: %d\n", rdx94);
                                            }
                                            *reinterpret_cast<int32_t*>(&rax85) = 0;
                                            goto addr_40878e_31;
                                        }
                                    } else {
                                        rax95 = stderr;
                                        *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>("ADL error: loading symbol %s\n");
                                        *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
                                        rdi10 = rax95;
                                        fun_402ff0(rdi10, "ADL error: loading symbol %s\n", "ADL_Display_DDCBlockAccess_Get");
                                        *reinterpret_cast<int32_t*>(&rax85) = 0;
                                        goto addr_40878e_31;
                                    }
                                } else {
                                    rax96 = stderr;
                                    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>("ADL error: loading symbol %s\n");
                                    *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
                                    rdi10 = rax96;
                                    fun_402ff0(rdi10, "ADL error: loading symbol %s\n", "ADL_Display_DisplayInfo_Get");
                                    *reinterpret_cast<int32_t*>(&rax85) = 0;
                                    goto addr_40878e_31;
                                }
                            } else {
                                rax97 = stderr;
                                *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>("ADL error: loading symbol %s\n");
                                *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
                                rdi10 = rax97;
                                fun_402ff0(rdi10, "ADL error: loading symbol %s\n", "ADL_Display_NumberOfDisplays_Get");
                                *reinterpret_cast<int32_t*>(&rax85) = 0;
                                goto addr_40878e_31;
                            }
                        } else {
                            rax98 = stderr;
                            *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>("ADL error: loading symbol %s\n");
                            *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
                            rdi10 = rax98;
                            fun_402ff0(rdi10, "ADL error: loading symbol %s\n", "ADL_Adapter_AdapterInfo_Get");
                            *reinterpret_cast<int32_t*>(&rax85) = 0;
                            goto addr_40878e_31;
                        }
                    } else {
                        rax99 = stderr;
                        *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>("ADL error: loading symbol %s\n");
                        *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
                        rdi10 = rax99;
                        fun_402ff0(rdi10, "ADL error: loading symbol %s\n", "ADL_Adapter_NumberOfAdapters_Get");
                        *reinterpret_cast<int32_t*>(&rax85) = 0;
                        goto addr_40878e_31;
                    }
                } else {
                    rax100 = stderr;
                    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>("ADL error: loading symbol %s\n");
                    *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
                    rdi10 = rax100;
                    fun_402ff0(rdi10, "ADL error: loading symbol %s\n", "ADL_Main_Control_Destroy");
                    *reinterpret_cast<int32_t*>(&rax85) = 0;
                    goto addr_40878e_31;
                }
            } else {
                rax101 = stderr;
                *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>("ADL error: loading symbol %s\n");
                *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
                rdi10 = rax101;
                fun_402ff0(rdi10, "ADL error: loading symbol %s\n", "ADL_Main_Control_Create");
                *reinterpret_cast<int32_t*>(&rax85) = 0;
                goto addr_40878e_31;
            }
        } else {
            eax102 = fun_405145("libatiadlxx.so", 0x101);
            if (eax102) {
                *reinterpret_cast<int32_t*>(&rdi10) = reinterpret_cast<int32_t>("ADL error: dlopen() failed\n");
                *reinterpret_cast<int32_t*>(&rdi10 + 4) = 0;
                fun_402fe0("ADL error: dlopen() failed\n", 0x101);
            }
            *reinterpret_cast<int32_t*>(&rax85) = 0;
            goto addr_40878e_31;
        }
    } else {
        rax103 = stderr;
        *reinterpret_cast<int32_t*>(&rsi9) = 1;
        *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdi10) = reinterpret_cast<int32_t>("ADL error: malloc failed\n");
        *reinterpret_cast<int32_t*>(&rdi10 + 4) = 0;
        fun_402fa0("ADL error: malloc failed\n", 1, 25, rax103);
        *reinterpret_cast<int32_t*>(&rax85) = 0;
        goto addr_40878e_31;
    }
    addr_408770_54:
    rdi10 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffd8);
    fun_407e59(rdi10, rsi9, rdx63, rcx61, r8_104);
    rax105 = g60f560;
    *reinterpret_cast<void***>(rax105) = reinterpret_cast<void**>(1);
    *reinterpret_cast<int32_t*>(&rax85) = 1;
    addr_40878e_31:
    rcx106 = v3 ^ g28;
    if (rcx106) {
        rax85 = fun_402e20(rdi10, rsi9, rdi10, rsi9);
    }
    return *reinterpret_cast<int32_t*>(&rax85);
    addr_40876f_29:
    goto addr_408770_54;
}

int32_t fun_405145(void** rdi, void** rsi) {
    int32_t eax3;

    eax3 = g60f55c;
    return eax3;
}

int64_t printf = 0x402856;

void fun_402850(int64_t rdi, void** rsi, void** rdx, void** rcx) {
    goto printf;
}

void fun_402c60(void** rdi);

void fun_4087a9() {
    void** rax1;
    void** rax2;
    void** rax3;
    void** rdx4;
    void** rax5;
    void** rax6;
    void** rdi7;
    void** rax8;
    void** rsi9;
    void** rcx10;
    int64_t r8_11;

    rax1 = g60f560;
    if (rax1) {
        rax2 = g60f560;
        if (*reinterpret_cast<void***>(rax2 + 24)) {
            rax3 = g60f560;
            rdx4 = *reinterpret_cast<void***>(rax3 + 24);
            rdx4();
        }
        rax5 = g60f560;
        if (*reinterpret_cast<void***>(rax5 + 8)) {
            rax6 = g60f560;
            rdi7 = *reinterpret_cast<void***>(rax6 + 8);
            fun_402c60(rdi7);
            rax8 = g60f560;
            *reinterpret_cast<void***>(rax8 + 8) = reinterpret_cast<void**>(0);
        }
        fun_407e59(0x60f560, rsi9, rdx4, rcx10, r8_11);
    }
    return;
}

int64_t dlclose = 0x402c66;

void fun_402c60(void** rdi) {
    goto dlclose;
}

int64_t fseek = 0x402926;

void fun_402920(void** rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    goto fseek;
}

int64_t fgets = 0x402ac6;

int64_t fun_402ac0(void* rdi, void** rsi, void** rdx, int64_t rcx) {
    goto fgets;
}

int64_t fclose = 0x402ec6;

void fun_402ec0(void** rdi, void** rsi, void** rdx, int64_t rcx) {
    goto fclose;
}

int64_t fun_402d60(int64_t rdi);

void** fun_402a10(void** rdi, void** rsi, void** rdx, int64_t rcx);

void fun_402cb0(void* rdi, void** rsi);

unsigned char g60f4c3 = 1;

void** fun_408d0b(void** rdi, void** rsi) {
    void* rbp3;
    uint64_t rax4;
    int64_t rax5;
    void** rdi6;
    void** rsi7;
    void** rdi8;
    void** rax9;
    void** rdi10;
    void** rdi11;
    void** rdi12;
    void** rdi13;
    void** rdi14;
    void** rdi15;
    void** rdi16;
    void** rdi17;
    void** rdi18;
    void** rdi19;
    void** rdi20;
    void** rdi21;
    void** rdi22;
    void** rdi23;
    void** rdi24;
    void** rdi25;
    void** rdi26;
    void** rdi27;
    void** rdi28;
    uint32_t eax29;
    int64_t rcx30;
    void** rdi31;
    void** rax32;

    rbp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax4 = g28;
    rax5 = fun_402d60("HOME");
    rdi6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff40);
    fun_402880(rdi6, 48, "%s/.PaperLike", rdi6, 48, "%s/.PaperLike");
    *reinterpret_cast<int32_t*>(&rsi7) = reinterpret_cast<int32_t>("w");
    *reinterpret_cast<int32_t*>(&rsi7 + 4) = 0;
    rdi8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff40);
    rax9 = fun_402a10(rdi8, "w", "%s/.PaperLike", rax5);
    if (rax9) {
        rdi10 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70);
        fun_402870(rdi10, 0, 0x80, rdi10, 0, 0x80);
        rdi11 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70);
        fun_402880(rdi11, 0x80, "%d\n", rdi11, 0x80, "%d\n");
        fun_402cb0(reinterpret_cast<int64_t>(rbp3) - 0x90, rax9);
        rdi12 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70);
        fun_402870(rdi12, 0, 0x80, rdi12, 0, 0x80);
        rdi13 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70);
        fun_402880(rdi13, 0x80, "%d\n", rdi13, 0x80, "%d\n");
        fun_402cb0(reinterpret_cast<int64_t>(rbp3) - 0x90, rax9);
        rdi14 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70);
        fun_402870(rdi14, 0, 0x80, rdi14, 0, 0x80);
        rdi15 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70);
        fun_402880(rdi15, 0x80, "%d\n", rdi15, 0x80, "%d\n");
        fun_402cb0(reinterpret_cast<int64_t>(rbp3) - 0x90, rax9);
        rdi16 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70);
        fun_402870(rdi16, 0, 0x80, rdi16, 0, 0x80);
        rdi17 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70);
        fun_402880(rdi17, 0x80, "%d\n", rdi17, 0x80, "%d\n");
        fun_402cb0(reinterpret_cast<int64_t>(rbp3) - 0x90, rax9);
        rdi18 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70);
        fun_402870(rdi18, 0, 0x80, rdi18, 0, 0x80);
        rdi19 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70);
        fun_402880(rdi19, 0x80, "%d\n", rdi19, 0x80, "%d\n");
        fun_402cb0(reinterpret_cast<int64_t>(rbp3) - 0x90, rax9);
        rdi20 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70);
        fun_402870(rdi20, 0, 0x80, rdi20, 0, 0x80);
        rdi21 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70);
        fun_402880(rdi21, 0x80, "%d\n", rdi21, 0x80, "%d\n");
        fun_402cb0(reinterpret_cast<int64_t>(rbp3) - 0x90, rax9);
        rdi22 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70);
        fun_402870(rdi22, 0, 0x80, rdi22, 0, 0x80);
        rdi23 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70);
        fun_402880(rdi23, 0x80, "%d\n", rdi23, 0x80, "%d\n");
        fun_402cb0(reinterpret_cast<int64_t>(rbp3) - 0x90, rax9);
        rdi24 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70);
        fun_402870(rdi24, 0, 0x80, rdi24, 0, 0x80);
        rdi25 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70);
        fun_402880(rdi25, 0x80, "%d\n", rdi25, 0x80, "%d\n");
        fun_402cb0(reinterpret_cast<int64_t>(rbp3) - 0x90, rax9);
        rdi26 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70);
        fun_402870(rdi26, 0, 0x80, rdi26, 0, 0x80);
        rdi27 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70);
        fun_402880(rdi27, 0x80, "%d\n", rdi27, 0x80, "%d\n");
        fun_402cb0(reinterpret_cast<int64_t>(rbp3) - 0x90, rax9);
        rdi28 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70);
        fun_402870(rdi28, 0, 0x80, rdi28, 0, 0x80);
        eax29 = g60f4c3;
        *reinterpret_cast<uint32_t*>(&rcx30) = *reinterpret_cast<unsigned char*>(&eax29);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx30) + 4) = 0;
        rdi31 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffff70);
        fun_402880(rdi31, 0x80, "%d\n", rdi31, 0x80, "%d\n");
        rsi7 = rax9;
        fun_402cb0(reinterpret_cast<int64_t>(rbp3) - 0x90, rsi7);
        rdi8 = rax9;
        fun_402ec0(rdi8, rsi7, rax9, rcx30);
    }
    rax32 = reinterpret_cast<void**>(rax4 ^ g28);
    if (rax32) {
        rax32 = fun_402e20(rdi8, rsi7, rdi8, rsi7);
    }
    return rax32;
}

int64_t fputs = 0x402cb6;

void fun_402cb0(void* rdi, void** rsi) {
    goto fputs;
}

signed char g60f450 = 1;

void** fun_406f78(void** rdi);

void** g60f578 = reinterpret_cast<void**>(0);

signed char fun_40913c(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    void** rax6;
    int32_t eax7;
    void** rax8;
    void** rax9;
    void** rax10;
    void** rax11;

    g60f450 = 0;
    rax6 = fun_4071a9();
    if (!rax6) {
        addr_4091ca_2:
        eax7 = 0;
    } else {
        rax8 = fun_406f78(rax6);
        rax9 = g60f578;
        if (rax9) {
            rax10 = g60f578;
            fun_406e7c(rax10, rsi, rdx, rcx, r8);
            rax11 = g60f578;
            fun_402b70(rax11, rsi, rdx, rcx, r8);
            g60f578 = reinterpret_cast<void**>(0);
        }
        g60f578 = rax8;
        fun_407393(rax6, rsi, rdx, rcx, r8);
        if (!rax8) 
            goto addr_4091ca_2; else 
            goto addr_4091c3_6;
    }
    addr_4091cf_7:
    return *reinterpret_cast<signed char*>(&eax7);
    addr_4091c3_6:
    eax7 = 1;
    goto addr_4091cf_7;
}

void** fun_406f78(void** rdi) {
    void** v2;
    void** v3;
    uint32_t eax4;
    void** rsi5;
    void** rax6;
    void** rcx7;
    int32_t eax8;
    int64_t r8_9;
    int64_t r8_10;

    v2 = rdi;
    v3 = reinterpret_cast<void**>(0);
    while (v2) {
        eax4 = *reinterpret_cast<unsigned char*>(v2 + 25);
        if (*reinterpret_cast<signed char*>(&eax4) == 1) {
            rax6 = fun_402a00(0x850, rsi5, 1);
            v3 = rax6;
            rcx7 = *reinterpret_cast<void***>(v2);
            rsi5 = rcx7;
            eax8 = fun_406e28(v3, rsi5, 1);
            if (eax8 >= -1) 
                goto addr_407010_5;
            fun_402b70(v3, rsi5, 1, rcx7, r8_9);
            v3 = reinterpret_cast<void**>(0);
            fun_406e7c(0, rsi5, 1, rcx7, r8_10);
        }
        v2 = *reinterpret_cast<void***>(v2 + 32);
    }
    addr_407011_9:
    return v3;
    addr_407010_5:
    goto addr_407011_9;
}

int64_t sleep = 0x402c46;

void** fun_402c40(void** rdi, void** rsi, ...) {
    goto sleep;
}

unsigned char g60f4b9 = 1;

uint16_t fun_4092dc(uint32_t edi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    uint32_t eax6;
    uint16_t v7;
    uint32_t eax8;
    uint32_t eax9;
    uint32_t eax10;
    uint32_t eax11;
    uint32_t eax12;

    eax6 = edi;
    v7 = 0;
    eax8 = g60f4b9;
    eax9 = *reinterpret_cast<unsigned char*>(&eax8);
    if (eax9 == 2) 
        goto addr_40931c_2;
    if (reinterpret_cast<int32_t>(eax9) > reinterpret_cast<int32_t>(2)) {
        if (eax9 == 4) {
            if (*reinterpret_cast<uint16_t*>(&eax6) > 80) {
                if (*reinterpret_cast<uint16_t*>(&eax6) <= 0xc7) {
                    eax10 = *reinterpret_cast<uint16_t*>(&eax6);
                    v7 = *reinterpret_cast<uint16_t*>(&eax10);
                } else {
                    v7 = 0xc8;
                }
            } else {
                v7 = 80;
            }
            goto addr_409401_11;
        } else {
            if (eax9 != 5) {
                addr_409401_11:
                eax11 = v7;
                return *reinterpret_cast<uint16_t*>(&eax11);
            } else {
                addr_40931c_2:
                if (*reinterpret_cast<uint16_t*>(&eax6) > 0x82) {
                    if (*reinterpret_cast<uint16_t*>(&eax6) <= 0xf9) {
                        eax12 = *reinterpret_cast<uint16_t*>(&eax6);
                        v7 = *reinterpret_cast<uint16_t*>(&eax12);
                        goto addr_409401_11;
                    } else {
                        v7 = 0xfa;
                        goto addr_409401_11;
                    }
                } else {
                    v7 = 0x82;
                    goto addr_409401_11;
                }
            }
        }
    } else {
        if (eax9 == 1) {
            if (*reinterpret_cast<uint16_t*>(&eax6) > 28) {
                if (*reinterpret_cast<uint16_t*>(&eax6) > 56) {
                    if (*reinterpret_cast<uint16_t*>(&eax6) > 84) {
                        if (*reinterpret_cast<uint16_t*>(&eax6) > 0x70) {
                            if (*reinterpret_cast<uint16_t*>(&eax6) > 0x8c) {
                                if (*reinterpret_cast<uint16_t*>(&eax6) > 0xa8) {
                                    if (*reinterpret_cast<uint16_t*>(&eax6) > 0xc4) {
                                        if (*reinterpret_cast<uint16_t*>(&eax6) > 0xe0) {
                                            v7 = 9;
                                            goto addr_409401_11;
                                        } else {
                                            v7 = 8;
                                            goto addr_409401_11;
                                        }
                                    } else {
                                        v7 = 7;
                                        goto addr_409401_11;
                                    }
                                } else {
                                    v7 = 6;
                                    goto addr_409401_11;
                                }
                            } else {
                                v7 = 5;
                                goto addr_409401_11;
                            }
                        } else {
                            v7 = 4;
                            goto addr_409401_11;
                        }
                    } else {
                        v7 = 3;
                        goto addr_409401_11;
                    }
                } else {
                    v7 = 2;
                    goto addr_409401_11;
                }
            } else {
                v7 = 1;
                goto addr_409401_11;
            }
        } else {
            goto addr_409401_11;
        }
    }
}

void** fun_4073e6(void** rdi, void** rsi, uint32_t edx, void** rcx, int32_t r8d) {
    uint32_t eax6;
    void** rax7;

    eax6 = fun_405879(rdi, rcx, 8);
    if (eax6 != 0xffffffff) {
        *reinterpret_cast<int32_t*>(&rax7) = 1;
        *reinterpret_cast<int32_t*>(&rax7 + 4) = 0;
    } else {
        *reinterpret_cast<int32_t*>(&rax7) = 0;
        *reinterpret_cast<int32_t*>(&rax7 + 4) = 0;
    }
    return rax7;
}

int64_t pthread_create = 0x402bb6;

int32_t fun_402bb0(int64_t rdi, void** rsi, int64_t rdx, int64_t rcx) {
    goto pthread_create;
}

int64_t gtk_widget_hide_all = 0x4029e6;

void fun_4029e0(void** rdi) {
    goto gtk_widget_hide_all;
}

int64_t gtk_widget_show_all = 0x402b26;

void fun_402b20(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    goto gtk_widget_show_all;
}

unsigned char g60f56d = 0;

void** fun_402e90(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8);

void** g60f670 = reinterpret_cast<void**>(0);

void fun_402e80(void** rdi, void** rsi);

unsigned char g60f56e = 0;

void** g60f6a8 = reinterpret_cast<void**>(0);

unsigned char g60f56c = 0;

void** g60f688 = reinterpret_cast<void**>(0);

void** fun_402dd0(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8);

void** g60f668 = reinterpret_cast<void**>(0);

void fun_402d90(void** rdi, int64_t rsi);

uint16_t g60f4be = 0x78;

void fun_402960(void** rdi, void** rsi);

uint16_t g60f4bc = 0x9c;

void** g60f648 = reinterpret_cast<void**>(0);

void** g60f680 = reinterpret_cast<void**>(0);

void** g60f630 = reinterpret_cast<void**>(0);

void** g60f6b0 = reinterpret_cast<void**>(0);

void** g60f638 = reinterpret_cast<void**>(0);

void** fun_402b30(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8);

void** g60f640 = reinterpret_cast<void**>(0);

void fun_402eb0(void** rdi, void** rsi);

void** fun_402d20(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8);

void** g60f698 = reinterpret_cast<void**>(0);

void fun_402a50(void** rdi, void** rsi);

void fun_402b40(void** rdi, void** rsi);

void** fun_40a3fd(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    void* rbp7;
    uint64_t rax8;
    uint32_t eax9;
    void** rax10;
    void** rdx11;
    void** rax12;
    void** v13;
    void** rax14;
    void** rsi15;
    void** rdi16;
    void** rax17;
    void** rax18;
    void** v19;
    void** rax20;
    uint32_t eax21;
    void** rax22;
    void** rdx23;
    void** rax24;
    void** v25;
    void** rax26;
    void** rsi27;
    void** rdi28;
    void** rax29;
    void** rax30;
    void** v31;
    void** rax32;
    uint32_t eax33;
    void** rax34;
    void** rax35;
    void** v36;
    void** rax37;
    void** rax38;
    void** rax39;
    void** v40;
    void** rax41;
    void** rax42;
    void** rax43;
    void** v44;
    void** rax45;
    void** rax46;
    void** rax47;
    void** v48;
    void** rax49;
    uint32_t eax50;
    void** rcx51;
    void** rdi52;
    void** rax53;
    void** rax54;
    void** v55;
    void** rax56;
    void** rsi57;
    uint32_t eax58;
    uint32_t eax59;
    void** rax60;
    void** rax61;
    void** v62;
    void** rax63;
    void** rax64;
    void** rax65;
    void** v66;
    void** rax67;
    void** rax68;
    void** rax69;
    void** v70;
    void** rax71;
    void** rax72;
    void** rax73;
    void** v74;
    void** rax75;
    uint32_t eax76;
    void** rcx77;
    void** rdi78;
    void** rax79;
    void** rax80;
    void** v81;
    void** rax82;
    void** rsi83;
    void** v84;
    void** rax85;
    void** rax86;
    void** v87;
    void** rax88;
    void** rsi89;
    uint32_t eax90;
    uint32_t eax91;
    int64_t rax92;
    void** rax93;
    void** rax94;
    void** v95;
    void** rax96;
    void** rax97;
    void** rax98;
    void** v99;
    void** rax100;
    void** rax101;
    void** rax102;
    void** v103;
    void** rax104;
    void** rax105;
    void** rax106;
    void** v107;
    void** rax108;
    void** rax109;
    void** rax110;
    void** v111;
    void** rax112;
    void** rax113;
    void** rax114;
    void** v115;
    void** rax116;
    uint32_t eax117;
    uint32_t eax118;
    void** rax119;
    void** rax120;
    void** rax121;
    void** rax122;
    void** rax123;
    void** rax124;
    void** rsi125;
    void** rdi126;
    void** rax127;
    void** rax128;
    void** rax129;
    void** rax130;
    void** rax131;
    void** rax132;
    void** rax133;

    rbp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax8 = g28;
    eax9 = g60f56d;
    if (!*reinterpret_cast<signed char*>(&eax9)) {
        rax10 = fun_402e90(rdi, rsi, rdx, rcx, r8);
        rdx11 = rax10;
        rax12 = g60f670;
        rax14 = fun_402e00(rax12, rdx11, rdx11, rcx, r8, r9, v13);
        *reinterpret_cast<int32_t*>(&rsi15) = 0;
        *reinterpret_cast<int32_t*>(&rsi15 + 4) = 0;
        rdi16 = rax14;
        fun_402e80(rdi16, 0);
    } else {
        rax17 = fun_402e90(rdi, rsi, rdx, rcx, r8);
        rdx11 = rax17;
        rax18 = g60f670;
        rax20 = fun_402e00(rax18, rdx11, rdx11, rcx, r8, r9, v19);
        *reinterpret_cast<int32_t*>(&rsi15) = 1;
        *reinterpret_cast<int32_t*>(&rsi15 + 4) = 0;
        rdi16 = rax20;
        fun_402e80(rdi16, 1);
    }
    eax21 = g60f56e;
    if (!*reinterpret_cast<signed char*>(&eax21)) {
        rax22 = fun_402e90(rdi16, rsi15, rdx11, rcx, r8);
        rdx23 = rax22;
        rax24 = g60f6a8;
        rax26 = fun_402e00(rax24, rdx23, rdx23, rcx, r8, r9, v25);
        *reinterpret_cast<int32_t*>(&rsi27) = 0;
        *reinterpret_cast<int32_t*>(&rsi27 + 4) = 0;
        rdi28 = rax26;
        fun_402e80(rdi28, 0);
    } else {
        rax29 = fun_402e90(rdi16, rsi15, rdx11, rcx, r8);
        rdx23 = rax29;
        rax30 = g60f6a8;
        rax32 = fun_402e00(rax30, rdx23, rdx23, rcx, r8, r9, v31);
        *reinterpret_cast<int32_t*>(&rsi27) = 1;
        *reinterpret_cast<int32_t*>(&rsi27 + 4) = 0;
        rdi28 = rax32;
        fun_402e80(rdi28, 1);
    }
    eax33 = g60f56c;
    if (!*reinterpret_cast<signed char*>(&eax33)) {
        rax34 = fun_402e90(rdi28, rsi27, rdx23, rcx, r8);
        rax35 = g60f688;
        rax37 = fun_402e00(rax35, rax34, rax34, rcx, r8, r9, v36);
        fun_402e80(rax37, 0);
        rax38 = fun_402dd0(rax37, 0, rax34, rcx, r8);
        rax39 = g60f668;
        rax41 = fun_402e00(rax39, rax38, rax38, rcx, r8, r9, v40);
        fun_402d90(rax41, 0);
    } else {
        rax42 = fun_402e90(rdi28, rsi27, rdx23, rcx, r8);
        rax43 = g60f688;
        rax45 = fun_402e00(rax43, rax42, rax42, rcx, r8, r9, v44);
        fun_402e80(rax45, 1);
        rax46 = fun_402dd0(rax45, 1, rax42, rcx, r8);
        rax47 = g60f668;
        rax49 = fun_402e00(rax47, rax46, rax46, rcx, r8, r9, v48);
        fun_402d90(rax49, 1);
    }
    eax50 = g60f4be;
    *reinterpret_cast<uint32_t*>(&rcx51) = *reinterpret_cast<uint16_t*>(&eax50);
    *reinterpret_cast<int32_t*>(&rcx51 + 4) = 0;
    rdi52 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp7) + 0xfffffffffffffff0);
    fun_402880(rdi52, 5, "%d", rdi52, 5, "%d");
    rax53 = fun_402dd0(rdi52, 5, "%d", rcx51, r8);
    rax54 = g60f668;
    rax56 = fun_402e00(rax54, rax53, rax53, rcx51, r8, r9, v55);
    rsi57 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp7) + 0xfffffffffffffff0);
    fun_402960(rax56, rsi57);
    eax58 = g60f4bc;
    eax59 = *reinterpret_cast<uint16_t*>(&eax58);
    if (eax59 == 0xaa) {
        rax60 = fun_402e90(rax56, rsi57, rax56, rcx51, r8);
        rax61 = g60f648;
        rax63 = fun_402e00(rax61, rax60, rax60, rcx51, r8, r9, v62);
        fun_402e80(rax63, 1);
    } else {
        if (eax59 == 0xbe) {
            rax64 = fun_402e90(rax56, rsi57, rax56, rcx51, r8);
            rax65 = g60f680;
            rax67 = fun_402e00(rax65, rax64, rax64, rcx51, r8, r9, v66);
            fun_402e80(rax67, 1);
        } else {
            if (eax59 != 0x82) {
                rax68 = fun_402e90(rax56, rsi57, rax56, rcx51, r8);
                rax69 = g60f630;
                rax71 = fun_402e00(rax69, rax68, rax68, rcx51, r8, r9, v70);
                fun_402e80(rax71, 1);
            } else {
                rax72 = fun_402e90(rax56, rsi57, rax56, rcx51, r8);
                rax73 = g60f6b0;
                rax75 = fun_402e00(rax73, rax72, rax72, rcx51, r8, r9, v74);
                fun_402e80(rax75, 1);
            }
        }
    }
    eax76 = g60f4bc;
    *reinterpret_cast<uint32_t*>(&rcx77) = *reinterpret_cast<uint16_t*>(&eax76);
    *reinterpret_cast<int32_t*>(&rcx77 + 4) = 0;
    rdi78 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp7) + 0xfffffffffffffff0);
    fun_402880(rdi78, 5, "%d", rdi78, 5, "%d");
    rax79 = fun_402dd0(rdi78, 5, "%d", rcx77, r8);
    rax80 = g60f638;
    rax82 = fun_402e00(rax80, rax79, rax79, rcx77, r8, r9, v81);
    rsi83 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp7) + 0xfffffffffffffff0);
    fun_402960(rax82, rsi83);
    __asm__("pxor xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, eax");
    *reinterpret_cast<void***>(rax82) = v84;
    rax85 = fun_402b30(rax82 + 4, rsi83 + 4, rax82, rcx77, r8);
    rax86 = g60f640;
    rax88 = fun_402e00(rax86, rax85, rax85, rcx77, r8, r9, v87);
    *reinterpret_cast<void***>(rax86) = *reinterpret_cast<void***>(rax85);
    rsi89 = rax85 + 4;
    fun_402eb0(rax88, rsi89);
    eax90 = g60f4b9;
    eax91 = *reinterpret_cast<unsigned char*>(&eax90);
    if (eax91 <= 6) {
        *reinterpret_cast<uint32_t*>(&rax92) = eax91;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax92) + 4) = 0;
        switch (rax92) {
        case 1:
            rax93 = fun_402d20(rax88, rsi89, rax85, rcx77, r8);
            rax94 = g60f698;
            rax96 = fun_402e00(rax94, rax93, rax93, rcx77, r8, r9, v95);
            fun_402a50(rax96, "         FLOYD");
            break;
        case 2:
            rax97 = fun_402d20(rax88, rsi89, rax85, rcx77, r8);
            rax98 = g60f698;
            rax100 = fun_402e00(rax98, rax97, rax97, rcx77, r8, r9, v99);
            fun_402a50(rax100, "         A2");
            break;
        case 3:
            rax101 = fun_402d20(rax88, rsi89, rax85, rcx77, r8);
            rax102 = g60f698;
            rax104 = fun_402e00(rax102, rax101, rax101, rcx77, r8, r9, v103);
            fun_402a50(rax104, "         A16");
            break;
        case 4:
            rax105 = fun_402d20(rax88, rsi89, rax85, rcx77, r8);
            rax106 = g60f698;
            rax108 = fun_402e00(rax106, rax105, rax105, rcx77, r8, r9, v107);
            fun_402a50(rax108, "         A5");
            break;
        case 5:
            rax109 = fun_402d20(rax88, rsi89, rax85, rcx77, r8);
            rax110 = g60f698;
            rax112 = fun_402e00(rax110, rax109, rax109, rcx77, r8, r9, v111);
            fun_402a50(rax112, "         A2");
            break;
        case 6:
            rax113 = fun_402d20(rax88, rsi89, rax85, rcx77, r8);
            rax114 = g60f698;
            rax116 = fun_402e00(rax114, rax113, rax113, rcx77, r8, r9, v115);
            fun_402a50(rax116, "         A61");
        case 0:
            goto 0x40a833;
        }
    }
    eax117 = g60f4b9;
    eax118 = *reinterpret_cast<unsigned char*>(&eax117);
    if (reinterpret_cast<int32_t>(eax118) < reinterpret_cast<int32_t>(1) || reinterpret_cast<int32_t>(eax118) > reinterpret_cast<int32_t>(2) && eax118 - 4 > 1) {
        rax119 = g60f6b0;
        fun_402b40(rax119, 0);
        rax120 = g60f648;
        fun_402b40(rax120, 0);
        rax121 = g60f680;
        fun_402b40(rax121, 0);
        rax122 = g60f630;
        fun_402b40(rax122, 0);
        rax123 = g60f640;
        fun_402b40(rax123, 0);
        rax124 = g60f638;
        *reinterpret_cast<int32_t*>(&rsi125) = 0;
        *reinterpret_cast<int32_t*>(&rsi125 + 4) = 0;
        rdi126 = rax124;
        fun_402b40(rdi126, 0);
    } else {
        rax127 = g60f6b0;
        fun_402b40(rax127, 1);
        rax128 = g60f648;
        fun_402b40(rax128, 1);
        rax129 = g60f680;
        fun_402b40(rax129, 1);
        rax130 = g60f630;
        fun_402b40(rax130, 1);
        rax131 = g60f640;
        fun_402b40(rax131, 1);
        rax132 = g60f638;
        *reinterpret_cast<int32_t*>(&rsi125) = 1;
        *reinterpret_cast<int32_t*>(&rsi125 + 4) = 0;
        rdi126 = rax132;
        fun_402b40(rdi126, 1);
    }
    rax133 = reinterpret_cast<void**>(rax8 ^ g28);
    if (rax133) {
        rax133 = fun_402e20(rdi126, rsi125);
    }
    return rax133;
}

int64_t gtk_label_get_type = 0x402d26;

void** fun_402d20(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    goto gtk_label_get_type;
}

int64_t gtk_label_set_text = 0x402a56;

void fun_402a50(void** rdi, void** rsi) {
    goto gtk_label_set_text;
}

int64_t gtk_range_get_type = 0x402b36;

void** fun_402b30(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    goto gtk_range_get_type;
}

int64_t gtk_range_set_value = 0x402eb6;

void fun_402eb0(void** rdi, void** rsi) {
    goto gtk_range_set_value;
}

int64_t gtk_toggle_button_get_type = 0x402e96;

void** fun_402e90(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    goto gtk_toggle_button_get_type;
}

int64_t gtk_toggle_button_set_active = 0x402e86;

void fun_402e80(void** rdi, void** rsi) {
    goto gtk_toggle_button_set_active;
}

int64_t gtk_entry_get_type = 0x402dd6;

void** fun_402dd0(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    goto gtk_entry_get_type;
}

int64_t gtk_entry_set_editable = 0x402d96;

void fun_402d90(void** rdi, int64_t rsi) {
    goto gtk_entry_set_editable;
}

int64_t gtk_widget_set_sensitive = 0x402b46;

void fun_402b40(void** rdi, void** rsi) {
    goto gtk_widget_set_sensitive;
}

int64_t gtk_entry_get_text = 0x402ab6;

void** fun_402ab0(void** rdi, void** rsi) {
    goto gtk_entry_get_text;
}

int64_t gtk_range_get_value = 0x402f76;

int32_t fun_402f70(void** rdi, void** rsi) {
    goto gtk_range_get_value;
}

int64_t gtk_hscale_new_with_range = 0x402c36;

void** fun_402c30(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    goto gtk_hscale_new_with_range;
}

int64_t gtk_range_set_update_policy = 0x402f66;

void fun_402f60(void** rdi, void** rsi) {
    goto gtk_range_set_update_policy;
}

int64_t gtk_box_get_type = 0x402896;

void** fun_402890(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    goto gtk_box_get_type;
}

int64_t gtk_box_pack_start = 0x402ea6;

void fun_402ea0(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    goto gtk_box_pack_start;
}

int64_t gtk_widget_show = 0x402e16;

void fun_402e10(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    goto gtk_widget_show;
}

int64_t gtk_alignment_new = 0x402976;

void** fun_402970(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    goto gtk_alignment_new;
}

int64_t gtk_entry_new = 0x402866;

void** fun_402860(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    goto gtk_entry_new;
}

int64_t gtk_entry_set_text = 0x402966;

void fun_402960(void** rdi, void** rsi) {
    goto gtk_entry_set_text;
}

int64_t gtk_entry_set_max_length = 0x402fd6;

void fun_402fd0(void** rdi, int64_t rsi) {
    goto gtk_entry_set_max_length;
}

int64_t gtk_widget_set_size_request = 0x402d86;

void fun_402d80(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    goto gtk_widget_set_size_request;
}

int64_t gtk_container_get_type = 0x402b66;

void** fun_402b60(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    goto gtk_container_get_type;
}

int64_t gtk_container_add = 0x402e56;

void fun_402e50(void** rdi, void** rsi) {
    goto gtk_container_add;
}

int64_t gtk_hseparator_new = 0x402fc6;

void** fun_402fc0(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    goto gtk_hseparator_new;
}

int64_t gtk_hbox_new = 0x402e46;

void** fun_402e40(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    goto gtk_hbox_new;
}

int64_t gtk_check_button_new_with_label = 0x402d06;

void** fun_402d00(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    goto gtk_check_button_new_with_label;
}

int64_t gtk_label_new = 0x402916;

void** fun_402910(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    goto gtk_label_new;
}

int64_t gtk_label_set_line_wrap = 0x402846;

void fun_402840(void** rdi, void** rsi) {
    goto gtk_label_set_line_wrap;
}

int64_t gtk_label_set_justify = 0x4029c6;

void fun_4029c0(void** rdi, void** rsi) {
    goto gtk_label_set_justify;
}

int64_t gtk_box_set_spacing = 0x403016;

void fun_403010(void** rdi, void** rsi) {
    goto gtk_box_set_spacing;
}

int64_t gtk_button_new_with_label = 0x402f16;

void** fun_402f10(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    goto gtk_button_new_with_label;
}

int64_t gtk_object_get_type = 0x402d36;

void** fun_402d30(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    goto gtk_object_get_type;
}

int64_t g_signal_connect_data = 0x402de6;

void fun_402de0(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9, void** a7) {
    goto g_signal_connect_data;
}

void** g60f650 = reinterpret_cast<void**>(0);

void** g60f690 = reinterpret_cast<void**>(0);

void** g60f660 = reinterpret_cast<void**>(0);

void** g60f6a0 = reinterpret_cast<void**>(0);

void fun_409bdd(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9, void** a7, ...) {
    uint32_t eax8;
    void** rax9;
    void** rax10;
    void** rbp11;
    void** rax12;
    void** rax13;
    void** rax14;
    void** rax15;
    void** rax16;
    void** rax17;
    void** rax18;
    void** rax19;
    void** rax20;
    void** rax21;
    void** rax22;
    void** rax23;
    void** rax24;
    void** rax25;
    void** rax26;
    void** rax27;
    void** rax28;
    void** rax29;
    void** rax30;
    void** rax31;
    void** rax32;
    void** rax33;
    void** rax34;
    void** rax35;
    void** rax36;
    void** rax37;
    void** rax38;
    void** rax39;
    void** rax40;
    void** rax41;
    void** rax42;
    void** rax43;
    void** rax44;
    void** rax45;
    void** rax46;
    void** rax47;
    void** rax48;
    void** rax49;
    void** rax50;
    void** rax51;
    void** rax52;
    void** rax53;
    void** rax54;
    void** rax55;
    void** rax56;
    void** rax57;
    void** rax58;
    void** rax59;
    void** rax60;
    void** rax61;
    void** rax62;
    void** rax63;
    void** rax64;
    void** rax65;
    void** rax66;
    void** rax67;
    void** rax68;
    void** rax69;
    void** rax70;
    void** rax71;
    void** rax72;
    void** rax73;
    void** rax74;
    void** rax75;

    eax8 = g60f4c3;
    if (*reinterpret_cast<signed char*>(&eax8) != 1) {
        rax9 = fun_402d20(rdi, rsi, rdx, rcx, r8);
        rax10 = g60f650;
        rax12 = fun_402e00(rax10, rax9, rax9, rcx, r8, r9, rbp11);
        fun_402a50(rax12, "Normal display setting:");
        rax13 = fun_402d20(rax12, "Normal display setting:", rax9, rcx, r8);
        rax14 = g60f690;
        rax15 = fun_402e00(rax14, rax13, rax13, rcx, r8, r9, rbp11);
        fun_402a50(rax15, "Current show mode:");
        rax16 = fun_402d20(rax15, "Current show mode:", rax13, rcx, r8);
        rax17 = g60f660;
        rax18 = fun_402e00(rax17, rax16, rax16, rcx, r8, r9, rbp11);
        fun_402a50(rax18, "Constrait adjust:");
        rax19 = fun_402d40(rax18, "Constrait adjust:");
        rax20 = g60f6b0;
        rax21 = fun_402e00(rax20, rax19, rax19, rcx, r8, r9, rbp11);
        fun_402db0(rax21, "low");
        rax22 = fun_402d40(rax21, "low");
        rax23 = g60f648;
        rax24 = fun_402e00(rax23, rax22, rax22, rcx, r8, r9, rbp11);
        fun_402db0(rax24, "medium");
        rax25 = fun_402d40(rax24, "medium");
        rax26 = g60f680;
        rax27 = fun_402e00(rax26, rax25, rax25, rcx, r8, r9, rbp11);
        fun_402db0(rax27, "dark");
        rax28 = fun_402d40(rax27, "dark");
        rax29 = g60f630;
        rax30 = fun_402e00(rax29, rax28, rax28, rcx, r8, r9, rbp11);
        fun_402db0(rax30, "user def");
        rax31 = fun_402d40(rax30, "user def");
        rax32 = g60f688;
        rax33 = fun_402e00(rax32, rax31, rax31, rcx, r8, r9, rbp11);
        fun_402db0(rax33, "Auto refresh");
        rax34 = fun_402d20(rax33, "Auto refresh", rax31, rcx, r8);
        rax35 = g60f6a0;
        rax36 = fun_402e00(rax35, rax34, rax34, rcx, r8, r9, rbp11);
        fun_402a50(rax36, "Auto refresh");
        rax37 = fun_402d40(rax36, "Auto refresh");
        rax38 = g60f670;
        rax39 = fun_402e00(rax38, rax37, rax37, rcx, r8, r9, rbp11);
        fun_402db0(rax39, "Hot key soft refresh(Alt+C)");
        rax40 = fun_402d40(rax39, "Hot key soft refresh(Alt+C)");
        rax41 = g60f6a8;
        rax42 = fun_402e00(rax41, rax40, rax40, rcx, r8, r9, rbp11);
        fun_402db0(rax42, "Hot key hard refresh(Alt+H)");
    } else {
        rax43 = fun_402d20(rdi, rsi, rdx, rcx, r8);
        rax44 = g60f650;
        rax45 = fun_402e00(rax44, rax43, rax43, rcx, r8, r9, rbp11);
        fun_402a50(rax45, 0x40d220);
        rax46 = fun_402d20(rax45, 0x40d220, rax43, rcx, r8);
        rax47 = g60f690;
        rax48 = fun_402e00(rax47, rax46, rax46, rcx, r8, r9, rbp11);
        fun_402a50(rax48, 0x40d234);
        rax49 = fun_402d20(rax48, 0x40d234, rax46, rcx, r8);
        rax50 = g60f660;
        rax51 = fun_402e00(rax50, rax49, rax49, rcx, r8, r9, rbp11);
        fun_402a50(rax51, 0x40d248);
        rax52 = fun_402d40(rax51, 0x40d248);
        rax53 = g60f6b0;
        rax54 = fun_402e00(rax53, rax52, rax52, rcx, r8, r9, rbp11);
        fun_402db0(rax54, 0x40d259);
        rax55 = fun_402d40(rax54, 0x40d259);
        rax56 = g60f648;
        rax57 = fun_402e00(rax56, rax55, rax55, rcx, r8, r9, rbp11);
        fun_402db0(rax57, 0x40d25d);
        rax58 = fun_402d40(rax57, 0x40d25d);
        rax59 = g60f680;
        rax60 = fun_402e00(rax59, rax58, rax58, rcx, r8, r9, rbp11);
        fun_402db0(rax60, 0x40d264);
        rax61 = fun_402d40(rax60, 0x40d264);
        rax62 = g60f630;
        rax63 = fun_402e00(rax62, rax61, rax61, rcx, r8, r9, rbp11);
        fun_402db0(rax63, 0x40d268);
        rax64 = fun_402d40(rax63, 0x40d268);
        rax65 = g60f688;
        rax66 = fun_402e00(rax65, rax64, rax64, rcx, r8, r9, rbp11);
        fun_402db0(rax66, 0x40d272);
        rax67 = fun_402d20(rax66, 0x40d272, rax64, rcx, r8);
        rax68 = g60f6a0;
        rax69 = fun_402e00(rax68, rax67, rax67, rcx, r8, r9, rbp11);
        fun_402a50(rax69, 0x40d272);
        rax70 = fun_402d40(rax69, 0x40d272);
        rax71 = g60f670;
        rax72 = fun_402e00(rax71, rax70, rax70, rcx, r8, r9, rbp11);
        fun_402db0(rax72, 0x40d285);
        rax73 = fun_402d40(rax72, 0x40d285);
        rax74 = g60f6a8;
        rax75 = fun_402e00(rax74, rax73, rax73, rcx, r8, r9, rbp11);
        fun_402db0(rax75, 0x40d2a2);
    }
    return;
}

void** g60f6e0 = reinterpret_cast<void**>(0);

void** g60f6c0 = reinterpret_cast<void**>(0);

void fun_40bc6c(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9, void** a7, ...) {
    uint32_t eax8;
    void** rax9;
    void** rax10;
    void** rbp11;
    void** rax12;
    void** rax13;
    void** rax14;
    void** rax15;
    void** rax16;
    void** rax17;
    void** rax18;
    void** rax19;
    void** rax20;
    void** rax21;

    eax8 = g60f4c3;
    if (*reinterpret_cast<signed char*>(&eax8) != 1) {
        rax9 = fun_402d40(rdi, rsi);
        rax10 = g60f6e0;
        rax12 = fun_402e00(rax10, rax9, rax9, rcx, r8, r9, rbp11);
        fun_402db0(rax12, "Checking updating");
        rax13 = fun_402d40(rax12, "Checking updating");
        rax14 = g60f6c0;
        rax15 = fun_402e00(rax14, rax13, rax13, rcx, r8, r9, rbp11);
        fun_402db0(rax15, "About");
    } else {
        rax16 = fun_402d40(rdi, rsi);
        rax17 = g60f6e0;
        rax18 = fun_402e00(rax17, rax16, rax16, rcx, r8, r9, rbp11);
        fun_402db0(rax18, 0x40d45c);
        rax19 = fun_402d40(rax18, 0x40d45c);
        rax20 = g60f6c0;
        rax21 = fun_402e00(rax20, rax19, rax19, rcx, r8, r9, rbp11);
        fun_402db0(rax21, 0x40d469);
    }
    return;
}

int64_t gtk_combo_box_get_type = 0x402b16;

void** fun_402b10(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    goto gtk_combo_box_get_type;
}

int64_t gtk_combo_box_set_active = 0x402c06;

void fun_402c00(void** rdi, void** rsi) {
    goto gtk_combo_box_set_active;
}

int64_t gdk_pixbuf_new_from_file = 0x4028d6;

void** fun_4028d0(void** rdi, void** rsi) {
    goto gdk_pixbuf_new_from_file;
}

int64_t g_log_set_handler = 0x402e76;

void fun_402e70(int64_t rdi, void** rsi, void** rdx, void** rcx) {
    goto g_log_set_handler;
}

int64_t gtk_init = 0x402cd6;

void fun_402cd0(void* rdi, void* rsi) {
    goto gtk_init;
}

uint16_t fun_402ce0(void** rdi, void** rsi, void** rdx, int64_t rcx);

uint16_t g60f4c0 = 10;

unsigned char g60f4b8 = 1;

unsigned char g60f4ba = 1;

void** fun_40881c(int64_t rdi, void** rsi, void** rdx, void** rcx) {
    void* rbp5;
    uint64_t rax6;
    int64_t rax7;
    void** rdi8;
    void** rsi9;
    void** rdi10;
    void** rax11;
    void** rdi12;
    int64_t rax13;
    uint16_t ax14;
    void** rdi15;
    int64_t rax16;
    uint16_t ax17;
    void** rdi18;
    int64_t rax19;
    uint16_t ax20;
    void** rdi21;
    int64_t rax22;
    uint16_t ax23;
    void** rdi24;
    int64_t rax25;
    uint16_t ax26;
    void** rdi27;
    int64_t rax28;
    uint16_t ax29;
    void** rdi30;
    int64_t rax31;
    uint16_t ax32;
    void** rdi33;
    int64_t rax34;
    uint16_t ax35;
    void** rdi36;
    int64_t rax37;
    uint16_t ax38;
    void** rdi39;
    int64_t rax40;
    uint16_t ax41;
    void** rax42;

    rbp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax6 = g28;
    rax7 = fun_402d60("HOME");
    rdi8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffff40);
    fun_402880(rdi8, 48, "%s/.PaperLike", rdi8, 48, "%s/.PaperLike");
    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>("r");
    *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
    rdi10 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffff40);
    rax11 = fun_402a10(rdi10, "r", "%s/.PaperLike", rax7);
    if (rax11) {
        fun_402920(rax11, 0, 0, rax7);
        rdi12 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffff70);
        fun_402870(rdi12, 0, 0x80, rdi12, 0, 0x80);
        *reinterpret_cast<int32_t*>(&rsi9) = 0x80;
        *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
        rax13 = fun_402ac0(reinterpret_cast<int64_t>(rbp5) - 0x90, 0x80, rax11, rax7);
        if (rax13) {
            ax14 = fun_402ce0(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffff70, 0x80, rax11, rax7);
            g60f56c = *reinterpret_cast<unsigned char*>(&ax14);
            rdi15 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffff70);
            fun_402870(rdi15, 0, 0x80, rdi15, 0, 0x80);
            *reinterpret_cast<int32_t*>(&rsi9) = 0x80;
            *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
            rax16 = fun_402ac0(reinterpret_cast<int64_t>(rbp5) - 0x90, 0x80, rax11, rax7);
            if (rax16) {
                ax17 = fun_402ce0(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffff70, 0x80, rax11, rax7);
                g60f56d = *reinterpret_cast<unsigned char*>(&ax17);
                rdi18 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffff70);
                fun_402870(rdi18, 0, 0x80, rdi18, 0, 0x80);
                *reinterpret_cast<int32_t*>(&rsi9) = 0x80;
                *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
                rax19 = fun_402ac0(reinterpret_cast<int64_t>(rbp5) - 0x90, 0x80, rax11, rax7);
                if (rax19) {
                    ax20 = fun_402ce0(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffff70, 0x80, rax11, rax7);
                    g60f56e = *reinterpret_cast<unsigned char*>(&ax20);
                    rdi21 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffff70);
                    fun_402870(rdi21, 0, 0x80, rdi21, 0, 0x80);
                    *reinterpret_cast<int32_t*>(&rsi9) = 0x80;
                    *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
                    rax22 = fun_402ac0(reinterpret_cast<int64_t>(rbp5) - 0x90, 0x80, rax11, rax7);
                    if (rax22) {
                        ax23 = fun_402ce0(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffff70, 0x80, rax11, rax7);
                        g60f4be = ax23;
                        rdi24 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffff70);
                        fun_402870(rdi24, 0, 0x80, rdi24, 0, 0x80);
                        *reinterpret_cast<int32_t*>(&rsi9) = 0x80;
                        *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
                        rax25 = fun_402ac0(reinterpret_cast<int64_t>(rbp5) - 0x90, 0x80, rax11, rax7);
                        if (rax25) {
                            ax26 = fun_402ce0(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffff70, 0x80, rax11, rax7);
                            g60f4c0 = ax26;
                            rdi27 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffff70);
                            fun_402870(rdi27, 0, 0x80, rdi27, 0, 0x80);
                            *reinterpret_cast<int32_t*>(&rsi9) = 0x80;
                            *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
                            rax28 = fun_402ac0(reinterpret_cast<int64_t>(rbp5) - 0x90, 0x80, rax11, rax7);
                            if (rax28) {
                                ax29 = fun_402ce0(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffff70, 0x80, rax11, rax7);
                                g60f4b9 = *reinterpret_cast<unsigned char*>(&ax29);
                                rdi30 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffff70);
                                fun_402870(rdi30, 0, 0x80, rdi30, 0, 0x80);
                                *reinterpret_cast<int32_t*>(&rsi9) = 0x80;
                                *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
                                rax31 = fun_402ac0(reinterpret_cast<int64_t>(rbp5) - 0x90, 0x80, rax11, rax7);
                                if (rax31) {
                                    ax32 = fun_402ce0(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffff70, 0x80, rax11, rax7);
                                    g60f4b8 = *reinterpret_cast<unsigned char*>(&ax32);
                                    rdi33 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffff70);
                                    fun_402870(rdi33, 0, 0x80, rdi33, 0, 0x80);
                                    *reinterpret_cast<int32_t*>(&rsi9) = 0x80;
                                    *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
                                    rax34 = fun_402ac0(reinterpret_cast<int64_t>(rbp5) - 0x90, 0x80, rax11, rax7);
                                    if (rax34) {
                                        ax35 = fun_402ce0(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffff70, 0x80, rax11, rax7);
                                        g60f4ba = *reinterpret_cast<unsigned char*>(&ax35);
                                        rdi36 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffff70);
                                        fun_402870(rdi36, 0, 0x80, rdi36, 0, 0x80);
                                        *reinterpret_cast<int32_t*>(&rsi9) = 0x80;
                                        *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
                                        rax37 = fun_402ac0(reinterpret_cast<int64_t>(rbp5) - 0x90, 0x80, rax11, rax7);
                                        if (rax37) {
                                            ax38 = fun_402ce0(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffff70, 0x80, rax11, rax7);
                                            g60f4bc = ax38;
                                            rdi39 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffff70);
                                            fun_402870(rdi39, 0, 0x80, rdi39, 0, 0x80);
                                            *reinterpret_cast<int32_t*>(&rsi9) = 0x80;
                                            *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
                                            rax40 = fun_402ac0(reinterpret_cast<int64_t>(rbp5) - 0x90, 0x80, rax11, rax7);
                                            if (rax40) {
                                                rdi10 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffff70);
                                                ax41 = fun_402ce0(rdi10, 0x80, rax11, rax7);
                                                g60f4c3 = *reinterpret_cast<unsigned char*>(&ax41);
                                            } else {
                                                rdi10 = rax11;
                                                fun_402ec0(rdi10, 0x80, rax11, rax7);
                                            }
                                        } else {
                                            rdi10 = rax11;
                                            fun_402ec0(rdi10, 0x80, rax11, rax7);
                                        }
                                    } else {
                                        rdi10 = rax11;
                                        fun_402ec0(rdi10, 0x80, rax11, rax7);
                                    }
                                } else {
                                    rdi10 = rax11;
                                    fun_402ec0(rdi10, 0x80, rax11, rax7);
                                }
                            } else {
                                rdi10 = rax11;
                                fun_402ec0(rdi10, 0x80, rax11, rax7);
                            }
                        } else {
                            rdi10 = rax11;
                            fun_402ec0(rdi10, 0x80, rax11, rax7);
                        }
                    } else {
                        rdi10 = rax11;
                        fun_402ec0(rdi10, 0x80, rax11, rax7);
                    }
                } else {
                    rdi10 = rax11;
                    fun_402ec0(rdi10, 0x80, rax11, rax7);
                }
            } else {
                rdi10 = rax11;
                fun_402ec0(rdi10, 0x80, rax11, rax7);
            }
        } else {
            rdi10 = rax11;
            fun_402ec0(rdi10, 0x80, rax11, rax7);
        }
    }
    rax42 = reinterpret_cast<void**>(rax6 ^ g28);
    if (rax42) {
        rax42 = fun_402e20(rdi10, rsi9, rdi10, rsi9);
    }
    return rax42;
}

void** fun_409407(int64_t rdi, void** rsi);

void fun_4091d1(int64_t rdi, void** rsi);

void fun_409263(int64_t rdi, void** rsi);

void fun_404c14(int64_t rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void** fun_404f2d(int64_t rdi, void** rsi);

void** fun_405090(int64_t rdi);

int64_t fun_409949(int64_t rdi, void** rsi, void** rdx, void** rcx) {
    int32_t eax5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;
    int32_t eax10;
    int64_t rax11;

    eax5 = fun_402bb0(0x60f608, 0, fun_409407, 0);
    if (eax5) {
        fun_402fe0("create heart thread failed.\n", 0, "create heart thread failed.\n", 0);
    }
    eax6 = fun_402bb0(0x60f628, 0, fun_4091d1, 0);
    if (eax6) {
        fun_402fe0("create screen save thread failed.\n", 0, "create screen save thread failed.\n", 0);
    }
    eax7 = fun_402bb0(0x60f618, 0, fun_409263, 0);
    if (eax7) {
        fun_402fe0("create screen blur clear thread failed.\n", 0, "create screen blur clear thread failed.\n", 0);
    }
    eax8 = fun_402bb0(0x60f600, 0, fun_404c14, 0);
    if (eax8) {
        fun_402fe0("create kbd event failed.\n", 0, "create kbd event failed.\n", 0);
    }
    eax9 = fun_402bb0(0x60f610, 0, fun_404f2d, 0);
    if (eax9) {
        fun_402fe0("create mouse event failed.\n", 0, "create mouse event failed.\n", 0);
    }
    eax10 = fun_402bb0(0x60f620, 0, fun_405090, 0);
    if (eax10) {
        fun_402fe0("create mouse event failed.\n", 0, "create mouse event failed.\n", 0);
    }
    *reinterpret_cast<int32_t*>(&rax11) = eax10;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
    return rax11;
}

void** g60f658 = reinterpret_cast<void**>(0);

void** fun_403000(void** rdi, int64_t rsi);

struct s4 {
    int32_t f0;
    int32_t f4;
};

struct s5 {
    int32_t f0;
    void** f4;
};

void** g60f5a8 = reinterpret_cast<void**>(0);

void** g60f678 = reinterpret_cast<void**>(0);

void** fun_409f52(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void** fun_40a137(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void fun_40a2ae(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void fun_40a374(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void fun_40a95d(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

struct s6 {
    int32_t f0;
    void** f4;
};

struct s7 {
    int32_t f0;
    void** f4;
};

void** fun_40aa89(struct s6* rdi, struct s7* rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void** fun_40ab0f(int64_t rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9, void** a7) {
    void** rax8;
    void** rax9;
    void** rax10;
    void** v11;
    void** rax12;
    void** rax13;
    void** rax14;
    void** v15;
    void** rax16;
    void** rax17;
    void** rax18;
    void** v19;
    void** rax20;
    void** rax21;
    void** v22;
    void** rax23;
    void** rax24;
    void** v25;
    void** rax26;
    void** rax27;
    void** rax28;
    void** v29;
    void** rax30;
    void** rax31;
    void** v32;
    void** rax33;
    void** rax34;
    void** v35;
    void** rax36;
    void** rax37;
    void** rax38;
    void** v39;
    void** rax40;
    void** rax41;
    void** rax42;
    void** v43;
    void** rax44;
    void** rax45;
    void** rax46;
    void** v47;
    void** rax48;
    void** rax49;
    void** v50;
    void** rax51;
    void** rax52;
    void** v53;
    void** rax54;
    void** rax55;
    void** rax56;
    void** v57;
    void** rax58;
    void** rax59;
    void** rbx60;
    void** rax61;
    void** v62;
    void** rax63;
    void** rax64;
    void** rax65;
    void** rax66;
    void** v67;
    void** rax68;
    void** rax69;
    void** rax70;
    void** v71;
    void** rax72;
    void** rax73;
    void** rax74;
    void** v75;
    void** rax76;
    void** rax77;
    void** v78;
    void** rax79;
    void** rax80;
    void** v81;
    void** rax82;
    void** rax83;
    void** rax84;
    void** v85;
    void** rax86;
    void** rax87;
    void** rax88;
    void** rbx89;
    void** rax90;
    void** v91;
    void** rax92;
    void** rax93;
    void** rax94;
    void** rax95;
    void** v96;
    void** rax97;
    void** rax98;
    void** rax99;
    void** rax100;
    void** rax101;
    void** rax102;
    void** v103;
    void** rax104;
    void** rbx105;
    void** rax106;
    void** v107;
    void** rax108;
    void** rax109;
    void** rax110;
    void** rax111;
    void** v112;
    void** rax113;
    void** rax114;
    void** rax115;
    void** rbx116;
    void** rax117;
    void** v118;
    void** rax119;
    void** rax120;
    void** rax121;
    void** rax122;
    void** v123;
    void** rax124;
    void** rax125;
    void** rax126;
    void** rbx127;
    void** rax128;
    void** v129;
    void** rax130;
    void** rax131;
    void** rax132;
    void** rax133;
    void** v134;
    void** rax135;
    struct s4* rdi136;
    struct s4* rsi137;
    struct s5* rdi138;
    struct s5* rsi139;
    void** rdi140;
    void** rsi141;
    void** rax142;
    void** rax143;
    void** rax144;
    void** v145;
    void** rax146;
    void** rbx147;
    void** rax148;
    void** v149;
    void** rax150;
    void** rax151;
    void** rax152;
    void** rax153;
    void** rax154;
    void** rax155;
    void** v156;
    void** rax157;
    void** rax158;
    void** rax159;
    void** v160;
    void** rax161;
    void** rax162;
    void** rax163;
    void** v164;
    void** rax165;
    void** rbx166;
    void** rax167;
    void** v168;
    void** rax169;
    void** rax170;
    void** rax171;
    void** rax172;
    void** v173;
    void** rax174;
    void** rax175;
    void** rax176;
    void** v177;
    void** rax178;
    void** rax179;
    void** rbx180;
    void** rax181;
    void** v182;
    void** rax183;
    void** rax184;
    void** rax185;
    void** v186;
    void** rax187;
    void** rax188;
    void** v189;
    void** rax190;
    void** rax191;
    void** v192;
    void** rax193;
    void** rax194;
    void** rax195;
    void** rax196;
    void** v197;
    void** rax198;
    void** rax199;
    void** rax200;
    void** v201;
    void** rax202;
    void** rax203;
    void** rbx204;
    void** rax205;
    void** v206;
    void** rax207;
    void** rax208;
    void** rax209;
    void** rax210;
    void** v211;
    void** rax212;
    void** rax213;
    void** v214;
    void** rax215;
    void** rax216;
    void** v217;
    void** rax218;
    void** rax219;
    void** rbx220;
    void** rax221;
    void** v222;
    void** rax223;
    void** rax224;
    void** rax225;
    void** rbx226;
    void** rax227;
    void** v228;
    void** rax229;
    void** rax230;
    void** rax231;
    void** rax232;
    void** v233;
    void** rax234;
    void** rax235;
    void** v236;
    void** rax237;
    void** v238;
    void** rax239;
    void** rax240;
    void** v241;
    void** rax242;
    void** rcx243;
    void** rsi244;
    int32_t v245;
    void** rax246;
    void** rax247;
    void** v248;
    void** rax249;
    void** rax250;
    void** rax251;
    void** rbx252;
    void** rax253;
    void** v254;
    void** rax255;
    void** rax256;
    void** rbx257;
    void** rax258;
    void** v259;
    void** rax260;
    void** rax261;
    void** rax262;
    void** rax263;
    void** v264;
    void** rax265;
    void** v266;
    void** rax267;
    void** rax268;
    void** v269;
    void** rax270;
    void** v271;
    void** rax272;
    void** rax273;
    void** v274;
    void** rax275;
    void** v276;
    void** rax277;
    void** rax278;
    void** v279;
    void** rax280;
    void** v281;
    void** rax282;
    void** rax283;
    void** v284;
    void** rax285;
    void** v286;
    void** rax287;
    void** rax288;
    void** v289;
    void** rax290;
    void** v291;
    void** rax292;
    void** rax293;
    void** v294;
    void** rax295;
    void** v296;
    void** rax297;
    void** rax298;
    void** v299;
    void** rax300;
    void** v301;
    void** rax302;
    void** rax303;
    void** v304;
    void** rax305;
    void** v306;
    void** rax307;
    void** rax308;
    void** v309;
    void** rax310;
    void** v311;
    void** rax312;

    rax8 = fun_4028a0(0);
    g60f658 = rax8;
    rax9 = fun_402c20(0, rsi, rdx, rcx, r8);
    rax10 = g60f658;
    rax12 = fun_402e00(rax10, rax9, rax9, rcx, r8, r9, v11);
    fun_402df0(rax12, 0);
    rax13 = fun_402b60(rax12, 0, rax9, rcx, r8, r9);
    rax14 = g60f658;
    rax16 = fun_402e00(rax14, rax13, rax13, rcx, r8, r9, v15);
    fun_403050(rax16, 30);
    rax17 = fun_402c20(rax16, 30, rax13, rcx, r8);
    rax18 = g60f658;
    rax20 = fun_402e00(rax18, rax17, rax17, rcx, r8, r9, v19);
    fun_402ca0(rax20, 1);
    rax21 = fun_402930(0, 10, rax17, rcx, r8, r9);
    v22 = rax21;
    rax23 = fun_402e40(0, 0, rax17, rcx, r8);
    rax24 = fun_402890(0, 0, rax17, rcx, r8, r9);
    rax26 = fun_402e00(v22, rax24, rax24, rcx, r8, r9, v25);
    fun_402ea0(rax26, rax23, 0, 0, 0, r9);
    rax27 = fun_402910(0x40d220, rax23, 0, 0, 0, r9);
    rax28 = fun_402d20(0x40d220, rax23, 0, 0, 0);
    rax30 = fun_402e00(rax27, rax28, rax28, 0, 0, r9, v29);
    fun_402840(rax30, 1);
    rax31 = fun_402d20(rax30, 1, rax28, 0, 0);
    rax33 = fun_402e00(rax27, rax31, rax31, 0, 0, r9, v32);
    fun_4029c0(rax33, 0);
    rax34 = fun_402890(rax33, 0, rax31, 0, 0, r9);
    rax36 = fun_402e00(rax23, rax34, rax34, 0, 0, r9, v35);
    fun_402ea0(rax36, rax27, 0, 0, 0, r9);
    g60f650 = rax27;
    fun_402e10(rax27, rax27, 0, 0, 0, r9);
    fun_402e10(rax23, rax27, 0, 0, 0, r9);
    rax37 = fun_402fc0(rax23, rax27, 0, 0, 0);
    rax38 = fun_402890(rax23, rax27, 0, 0, 0, r9);
    rax40 = fun_402e00(v22, rax38, rax38, 0, 0, r9, v39);
    fun_402ea0(rax40, rax37, 0, 1, 0, r9);
    fun_402e10(rax37, rax37, 0, 1, 0, r9);
    rax41 = fun_402e40(0, 0, 0, 1, 0);
    rax42 = fun_402890(0, 0, 0, 1, 0, r9);
    rax44 = fun_402e00(v22, rax42, rax42, 1, 0, r9, v43);
    fun_402ea0(rax44, rax41, 0, 0, 0, r9);
    rax45 = fun_402910(0x40d234, rax41, 0, 0, 0, r9);
    g60f690 = rax45;
    rax46 = fun_402d20(0x40d234, rax41, 0, 0, 0);
    rax48 = fun_402e00(rax45, rax46, rax46, 0, 0, r9, v47);
    fun_402840(rax48, 1);
    rax49 = fun_402d20(rax48, 1, rax46, 0, 0);
    rax51 = fun_402e00(rax45, rax49, rax49, 0, 0, r9, v50);
    fun_4029c0(rax51, 0);
    rax52 = fun_402890(rax51, 0, rax49, 0, 0, r9);
    rax54 = fun_402e00(rax41, rax52, rax52, 0, 0, r9, v53);
    fun_402ea0(rax54, rax45, 0, 0, 0, r9);
    fun_402e10(rax45, rax45, 0, 0, 0, r9);
    fun_402e10(rax41, rax45, 0, 0, 0, r9);
    rax55 = fun_402e40(0, 0, 0, 0, 0);
    rax56 = fun_402890(0, 0, 0, 0, 0, r9);
    rax58 = fun_402e00(v22, rax56, rax56, 0, 0, r9, v57);
    fun_402ea0(rax58, rax55, 0, 0, 0, r9);
    rax59 = fun_402910("         A2", rax55, 0, 0, 0, r9);
    g60f698 = rax59;
    rbx60 = g60f698;
    rax61 = fun_402890("         A2", rax55, 0, 0, 0, r9);
    rax63 = fun_402e00(rax55, rax61, rax61, 0, 0, r9, v62);
    fun_402ea0(rax63, rbx60, 0, 0, 0, r9);
    rax64 = g60f698;
    fun_402e10(rax64, rbx60, 0, 0, 0, r9);
    fun_402e10(rax55, rbx60, 0, 0, 0, r9);
    rax65 = fun_402fc0(rax55, rbx60, 0, 0, 0);
    rax66 = fun_402890(rax55, rbx60, 0, 0, 0, r9);
    rax68 = fun_402e00(v22, rax66, rax66, 0, 0, r9, v67);
    fun_402ea0(rax68, rax65, 0, 1, 0, r9);
    fun_402e10(rax65, rax65, 0, 1, 0, r9);
    rax69 = fun_402e40(0, 0, 0, 1, 0);
    rax70 = fun_402890(0, 0, 0, 1, 0, r9);
    rax72 = fun_402e00(v22, rax70, rax70, 1, 0, r9, v71);
    fun_402ea0(rax72, rax69, 0, 0, 0, r9);
    rax73 = fun_402910(0x40d248, rax69, 0, 0, 0, r9);
    g60f660 = rax73;
    rax74 = fun_402d20(0x40d248, rax69, 0, 0, 0);
    rax76 = fun_402e00(rax73, rax74, rax74, 0, 0, r9, v75);
    fun_402840(rax76, 1);
    rax77 = fun_402d20(rax76, 1, rax74, 0, 0);
    rax79 = fun_402e00(rax73, rax77, rax77, 0, 0, r9, v78);
    fun_4029c0(rax79, 0);
    rax80 = fun_402890(rax79, 0, rax77, 0, 0, r9);
    rax82 = fun_402e00(rax69, rax80, rax80, 0, 0, r9, v81);
    fun_402ea0(rax82, rax73, 0, 0, 0, r9);
    fun_402e10(rax73, rax73, 0, 0, 0, r9);
    fun_402e10(rax69, rax73, 0, 0, 0, r9);
    rax83 = fun_402e40(0, 10, 0, 0, 0);
    rax84 = fun_402890(0, 10, 0, 0, 0, r9);
    rax86 = fun_402e00(v22, rax84, rax84, 0, 0, r9, v85);
    fun_402ea0(rax86, rax83, 0, 0, 0, r9);
    rax87 = fun_402d70(0, 0x40d259, 0, 0, 0, r9);
    g60f6b0 = rax87;
    rax88 = g60f6b0;
    fun_402d80(rax88, 80, 20, 0, 0);
    rbx89 = g60f6b0;
    rax90 = fun_402890(rax88, 80, 20, 0, 0, r9);
    rax92 = fun_402e00(rax83, rax90, rax90, 0, 0, r9, v91);
    fun_402ea0(rax92, rbx89, 1, 1, 0, r9);
    rax93 = g60f6b0;
    fun_402e10(rax93, rbx89, 1, 1, 0, r9);
    rax94 = fun_403030(rax93, rbx89, 1, 1, 0, r9);
    rax95 = g60f6b0;
    rax97 = fun_402e00(rax95, rax94, rax94, 1, 0, r9, v96);
    rax98 = fun_402e60(rax97, rax94);
    rax99 = fun_402d70(rax98, 0x40d25d, rax94, 1, 0, r9);
    g60f648 = rax99;
    rax100 = g60f648;
    fun_402d80(rax100, 80, 20, 1, 0);
    rax101 = fun_402e90(rax100, 80, 20, 1, 0);
    rax102 = g60f648;
    rax104 = fun_402e00(rax102, rax101, rax101, 1, 0, r9, v103);
    fun_402e80(rax104, 1);
    rbx105 = g60f648;
    rax106 = fun_402890(rax104, 1, rax101, 1, 0, r9);
    rax108 = fun_402e00(rax83, rax106, rax106, 1, 0, r9, v107);
    fun_402ea0(rax108, rbx105, 1, 1, 0, r9);
    rax109 = g60f648;
    fun_402e10(rax109, rbx105, 1, 1, 0, r9);
    rax110 = fun_403030(rax109, rbx105, 1, 1, 0, r9);
    rax111 = g60f648;
    rax113 = fun_402e00(rax111, rax110, rax110, 1, 0, r9, v112);
    rax114 = fun_403000(rax113, 0x40d264);
    g60f680 = rax114;
    rax115 = g60f680;
    fun_402d80(rax115, 80, 20, 1, 0);
    rbx116 = g60f680;
    rax117 = fun_402890(rax115, 80, 20, 1, 0, r9);
    rax119 = fun_402e00(rax83, rax117, rax117, 1, 0, r9, v118);
    fun_402ea0(rax119, rbx116, 1, 1, 0, r9);
    rax120 = g60f680;
    fun_402e10(rax120, rbx116, 1, 1, 0, r9);
    rax121 = fun_403030(rax120, rbx116, 1, 1, 0, r9);
    rax122 = g60f680;
    rax124 = fun_402e00(rax122, rax121, rax121, 1, 0, r9, v123);
    rax125 = fun_403000(rax124, 0x40d268);
    g60f630 = rax125;
    rax126 = g60f630;
    fun_402d80(rax126, 80, 20, 1, 0);
    rbx127 = g60f630;
    rax128 = fun_402890(rax126, 80, 20, 1, 0, r9);
    rax130 = fun_402e00(rax83, rax128, rax128, 1, 0, r9, v129);
    fun_402ea0(rax130, rbx127, 1, 1, 0, r9);
    rax131 = g60f630;
    fun_402e10(rax131, rbx127, 1, 1, 0, r9);
    fun_402e10(rax83, rbx127, 1, 1, 0, r9);
    rax132 = fun_402e40(0, 0, 1, 1, 0);
    rax133 = fun_402890(0, 0, 1, 1, 0, r9);
    rax135 = fun_402e00(v22, rax133, rax133, 1, 0, r9, v134);
    fun_402ea0(rax135, rax132, 0, 0, 0, r9);
    *reinterpret_cast<void***>(rax135) = *reinterpret_cast<void***>(rax132);
    rdi136 = reinterpret_cast<struct s4*>(rax135 + 4);
    rsi137 = reinterpret_cast<struct s4*>(rax132 + 4);
    rdi136->f0 = rsi137->f0;
    rdi138 = reinterpret_cast<struct s5*>(&rdi136->f4);
    rsi139 = reinterpret_cast<struct s5*>(&rsi137->f4);
    __asm__("movapd xmm1, xmm0");
    rdi138->f0 = rsi139->f0;
    rdi140 = reinterpret_cast<void**>(&rdi138->f4);
    rsi141 = reinterpret_cast<void**>(&rsi139->f4);
    rax142 = fun_402c30(rdi140, rsi141, 0, 0, 0);
    g60f640 = rax142;
    rax143 = fun_402b30(rdi140, rsi141, 0, 0, 0);
    rax144 = g60f640;
    rax146 = fun_402e00(rax144, rax143, rax143, 0, 0, r9, v145);
    fun_402f60(rax146, 2);
    rbx147 = g60f640;
    rax148 = fun_402890(rax146, 2, rax143, 0, 0, r9);
    rax150 = fun_402e00(rax132, rax148, rax148, 0, 0, r9, v149);
    fun_402ea0(rax150, rbx147, 1, 1, 0, r9);
    rax151 = g60f640;
    fun_402e10(rax151, rbx147, 1, 1, 0, r9);
    __asm__("pxor xmm3, xmm3");
    __asm__("pxor xmm2, xmm2");
    __asm__("movss xmm1, [rip+0x20db]");
    __asm__("movss xmm0, [rip+0x20d3]");
    rax152 = fun_402970(rax151, rbx147, 1, 1, 0);
    rax153 = fun_402860(rax151, rbx147, 1, 1, 0);
    g60f638 = rax153;
    rax154 = fun_402dd0(rax151, rbx147, 1, 1, 0);
    rax155 = g60f638;
    rax157 = fun_402e00(rax155, rax154, rax154, 1, 0, r9, v156);
    fun_402960(rax157, "200");
    rax158 = fun_402dd0(rax157, "200", rax154, 1, 0);
    rax159 = g60f638;
    rax161 = fun_402e00(rax159, rax158, rax158, 1, 0, r9, v160);
    fun_402fd0(rax161, 5);
    rax162 = g60f638;
    fun_402d80(rax162, 80, 30, 1, 0);
    rax163 = fun_402890(rax162, 80, 30, 1, 0, r9);
    rax165 = fun_402e00(rax132, rax163, rax163, 1, 0, r9, v164);
    fun_402ea0(rax165, rax152, 0, 0, 0, r9);
    rbx166 = g60f638;
    rax167 = fun_402b60(rax165, rax152, 0, 0, 0, r9);
    rax169 = fun_402e00(rax152, rax167, rax167, 0, 0, r9, v168);
    fun_402e50(rax169, rbx166);
    fun_402e10(rax152, rbx166, rax167, 0, 0, r9);
    fun_402e10(rax132, rbx166, rax167, 0, 0, r9);
    rax170 = g60f638;
    fun_402e10(rax170, rbx166, rax167, 0, 0, r9);
    rax171 = fun_402fc0(rax170, rbx166, rax167, 0, 0);
    rax172 = fun_402890(rax170, rbx166, rax167, 0, 0, r9);
    rax174 = fun_402e00(v22, rax172, rax172, 0, 0, r9, v173);
    fun_402ea0(rax174, rax171, 0, 1, 0, r9);
    fun_402e10(rax171, rax171, 0, 1, 0, r9);
    rax175 = fun_402e40(0, 0, 0, 1, 0);
    rax176 = fun_402890(0, 0, 0, 1, 0, r9);
    rax178 = fun_402e00(v22, rax176, rax176, 1, 0, r9, v177);
    fun_402ea0(rax178, rax175, 0, 0, 0, r9);
    rax179 = fun_402d00(0x40d272, rax175, 0, 0, 0);
    g60f688 = rax179;
    rbx180 = g60f688;
    rax181 = fun_402890(0x40d272, rax175, 0, 0, 0, r9);
    rax183 = fun_402e00(rax175, rax181, rax181, 0, 0, r9, v182);
    fun_402ea0(rax183, rbx180, 0, 0, 0, r9);
    rax184 = fun_402910(0x40d3e0, rbx180, 0, 0, 0, r9);
    g60f6a0 = rax184;
    rax185 = fun_402d20(0x40d3e0, rbx180, 0, 0, 0);
    rax187 = fun_402e00(rax184, rax185, rax185, 0, 0, r9, v186);
    fun_402840(rax187, 1);
    rax188 = fun_402d20(rax187, 1, rax185, 0, 0);
    rax190 = fun_402e00(rax184, rax188, rax188, 0, 0, r9, v189);
    fun_4029c0(rax190, 1);
    rax191 = fun_402890(rax190, 1, rax188, 0, 0, r9);
    rax193 = fun_402e00(rax175, rax191, rax191, 0, 0, r9, v192);
    fun_402ea0(rax193, rax184, 0, 0, 0, r9);
    fun_402e10(rax184, rax184, 0, 0, 0, r9);
    rax194 = fun_402860(rax184, rax184, 0, 0, 0);
    g60f668 = rax194;
    rax195 = fun_402dd0(rax184, rax184, 0, 0, 0);
    rax196 = g60f668;
    rax198 = fun_402e00(rax196, rax195, rax195, 0, 0, r9, v197);
    fun_402960(rax198, "15");
    rax199 = fun_402dd0(rax198, "15", rax195, 0, 0);
    rax200 = g60f668;
    rax202 = fun_402e00(rax200, rax199, rax199, 0, 0, r9, v201);
    fun_402fd0(rax202, 3);
    rax203 = g60f668;
    fun_402d80(rax203, 50, 30, 0, 0);
    rbx204 = g60f668;
    rax205 = fun_402890(rax203, 50, 30, 0, 0, r9);
    rax207 = fun_402e00(rax175, rax205, rax205, 0, 0, r9, v206);
    fun_402ea0(rax207, rbx204, 0, 0, 0, r9);
    rax208 = g60f668;
    fun_402e10(rax208, rbx204, 0, 0, 0, r9);
    rax209 = fun_402910("s  (15s ~ 600s)", rbx204, 0, 0, 0, r9);
    rax210 = fun_402d20("s  (15s ~ 600s)", rbx204, 0, 0, 0);
    rax212 = fun_402e00(rax209, rax210, rax210, 0, 0, r9, v211);
    fun_402840(rax212, 1);
    rax213 = fun_402d20(rax212, 1, rax210, 0, 0);
    rax215 = fun_402e00(rax209, rax213, rax213, 0, 0, r9, v214);
    fun_4029c0(rax215, 0);
    rax216 = fun_402890(rax215, 0, rax213, 0, 0, r9);
    rax218 = fun_402e00(rax175, rax216, rax216, 0, 0, r9, v217);
    fun_402ea0(rax218, rax209, 0, 0, 0, r9);
    fun_402e10(rax209, rax209, 0, 0, 0, r9);
    fun_402e10(rax175, rax209, 0, 0, 0, r9);
    rax219 = fun_402d00(0x40d285, rax209, 0, 0, 0);
    g60f670 = rax219;
    rbx220 = g60f670;
    rax221 = fun_402890(0x40d285, rax209, 0, 0, 0, r9);
    rax223 = fun_402e00(v22, rax221, rax221, 0, 0, r9, v222);
    fun_402ea0(rax223, rbx220, 0, 1, 0, r9);
    rax224 = g60f670;
    fun_402e10(rax224, rbx220, 0, 1, 0, r9);
    rax225 = fun_402d00(0x40d2a2, rbx220, 0, 1, 0);
    g60f6a8 = rax225;
    rbx226 = g60f6a8;
    rax227 = fun_402890(0x40d2a2, rbx220, 0, 1, 0, r9);
    rax229 = fun_402e00(v22, rax227, rax227, 1, 0, r9, v228);
    fun_402ea0(rax229, rbx226, 0, 1, 0, r9);
    rax230 = g60f6a8;
    fun_402e10(rax230, rbx226, 0, 1, 0, r9);
    rax231 = fun_402fc0(rax230, rbx226, 0, 1, 0);
    rax232 = fun_402890(rax230, rbx226, 0, 1, 0, r9);
    rax234 = fun_402e00(v22, rax232, rax232, 1, 0, r9, v233);
    fun_402ea0(rax234, rax231, 0, 1, 0, r9);
    fun_402e10(rax231, rax231, 0, 1, 0, r9);
    rax235 = fun_402e40(0, 0, 0, 1, 0);
    v236 = rax235;
    rax237 = fun_402890(0, 0, 0, 1, 0, r9);
    rax239 = fun_402e00(v236, rax237, rax237, 1, 0, r9, v238);
    fun_403010(rax239, 25);
    rax240 = fun_402890(rax239, 25, rax237, 1, 0, r9);
    rax242 = fun_402e00(v22, rax240, rax240, 1, 0, r9, v241);
    *reinterpret_cast<int32_t*>(&rcx243) = 1;
    *reinterpret_cast<int32_t*>(&rcx243 + 4) = 0;
    rsi244 = v236;
    fun_402ea0(rax242, rsi244, 0, 1, 0, r9);
    v245 = 0;
    while (v245 <= 3) {
        rax246 = fun_402910("    ", rsi244, 0, rcx243, 0, r9);
        fun_402e10(rax246, rsi244, 0, rcx243, 0, r9);
        rax247 = fun_402890(rax246, rsi244, 0, rcx243, 0, r9);
        rax249 = fun_402e00(v236, rax247, rax247, rcx243, 0, r9, v248);
        *reinterpret_cast<int32_t*>(&rcx243) = 0;
        *reinterpret_cast<int32_t*>(&rcx243 + 4) = 0;
        rsi244 = rax246;
        fun_402ea0(rax249, rsi244, 0, 0, 0, r9);
        ++v245;
    }
    rax250 = fun_402f10("OK", rsi244, 0, rcx243, 0);
    g60f5a8 = rax250;
    rax251 = g60f5a8;
    fun_402e10(rax251, rsi244, 0, rcx243, 0, r9);
    rbx252 = g60f5a8;
    rax253 = fun_402890(rax251, rsi244, 0, rcx243, 0, r9);
    rax255 = fun_402e00(v236, rax253, rax253, rcx243, 0, r9, v254);
    fun_402ea0(rax255, rbx252, 0, 0, 0, r9);
    rax256 = fun_402f10("Cancel", rbx252, 0, 0, 0);
    g60f678 = rax256;
    rbx257 = g60f678;
    rax258 = fun_402890("Cancel", rbx252, 0, 0, 0, r9);
    rax260 = fun_402e00(v236, rax258, rax258, 0, 0, r9, v259);
    fun_402ea0(rax260, rbx257, 0, 0, 0, r9);
    rax261 = g60f678;
    fun_402e10(rax261, rbx257, 0, 0, 0, r9);
    fun_402e10(v236, rbx257, 0, 0, 0, r9);
    rax262 = fun_402d30(v236, rbx257, 0, 0, 0, r9);
    rax263 = g60f6b0;
    rax265 = fun_402e00(rax263, rax262, rax262, 0, 0, r9, v264);
    fun_402de0(rax265, "clicked", fun_409f52, 0, 0, 0, v266);
    rax267 = fun_402d30(rax265, "clicked", fun_409f52, 0, 0, 0);
    rax268 = g60f648;
    rax270 = fun_402e00(rax268, rax267, rax267, 0, 0, 0, v269);
    fun_402de0(rax270, "clicked", fun_409f52, 0, 0, 0, v271);
    rax272 = fun_402d30(rax270, "clicked", fun_409f52, 0, 0, 0);
    rax273 = g60f680;
    rax275 = fun_402e00(rax273, rax272, rax272, 0, 0, 0, v274);
    fun_402de0(rax275, "clicked", fun_409f52, 0, 0, 0, v276);
    rax277 = fun_402d30(rax275, "clicked", fun_409f52, 0, 0, 0);
    rax278 = g60f630;
    rax280 = fun_402e00(rax278, rax277, rax277, 0, 0, 0, v279);
    fun_402de0(rax280, "clicked", fun_409f52, 0, 0, 0, v281);
    rax282 = fun_402d30(rax280, "clicked", fun_409f52, 0, 0, 0);
    rax283 = g60f640;
    rax285 = fun_402e00(rax283, rax282, rax282, 0, 0, 0, v284);
    fun_402de0(rax285, "value_changed", fun_40a137, 0, 0, 0, v286);
    rax287 = fun_402d30(rax285, "value_changed", fun_40a137, 0, 0, 0);
    rax288 = g60f638;
    rax290 = fun_402e00(rax288, rax287, rax287, 0, 0, 0, v289);
    fun_402de0(rax290, "activate", fun_40a2ae, 0, 0, 0, v291);
    rax292 = fun_402d30(rax290, "activate", fun_40a2ae, 0, 0, 0);
    rax293 = g60f688;
    rax295 = fun_402e00(rax293, rax292, rax292, 0, 0, 0, v294);
    fun_402de0(rax295, "clicked", fun_40a374, 0, 0, 0, v296);
    rax297 = fun_402d30(rax295, "clicked", fun_40a374, 0, 0, 0);
    rax298 = g60f5a8;
    rax300 = fun_402e00(rax298, rax297, rax297, 0, 0, 0, v299);
    fun_402de0(rax300, "clicked", fun_40a95d, 0, 0, 0, v301);
    rax302 = fun_402d30(rax300, "clicked", fun_40a95d, 0, 0, 0);
    rax303 = g60f678;
    rax305 = fun_402e00(rax303, rax302, rax302, 0, 0, 0, v304);
    fun_402de0(rax305, "clicked", fun_40aa89, 0, 0, 0, v306);
    rax307 = fun_402b60(rax305, "clicked", fun_40aa89, 0, 0, 0);
    rax308 = g60f658;
    rax310 = fun_402e00(rax308, rax307, rax307, 0, 0, 0, v309);
    fun_402e50(rax310, v22);
    fun_402e10(v22, v22, rax310, 0, 0, 0);
    fun_40a3fd(v22, v22, rax310, 0, 0, 0);
    fun_409bdd(v22, v22, rax310, 0, 0, 0, v311);
    rax312 = g60f658;
    return rax312;
}

void** g60f6c8 = reinterpret_cast<void**>(0);

void** fun_402b90(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8);

void** fun_402bd0(int64_t rdi, int64_t rsi);

void** fun_402a70(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8);

void fun_402c50(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8);

void** g60f6d8 = reinterpret_cast<void**>(0);

void** fun_402980(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8);

void** g60f6d0 = reinterpret_cast<void**>(0);

void fun_403020(void** rdi, void** rsi);

void fun_40bd2b(int64_t rdi, int64_t rsi);

void fun_40bd65(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9);

void fun_40bd48(int64_t rdi, int64_t rsi);

void** fun_40be02(int64_t rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9, void** a7) {
    void** rax8;
    void** rax9;
    void** rax10;
    void** v11;
    void** rax12;
    void** rax13;
    void** rax14;
    void** v15;
    void** rax16;
    void** rax17;
    void** rax18;
    void** v19;
    void** rax20;
    void** rax21;
    void** v22;
    void** rax23;
    void** rax24;
    void** rax25;
    void** rax26;
    void** rbx27;
    void** rax28;
    void** v29;
    void** rax30;
    void** rax31;
    void** v32;
    void** rax33;
    void** rax34;
    void** rax35;
    void** v36;
    void** rax37;
    void** rax38;
    void** v39;
    void** rax40;
    void** rax41;
    void** rax42;
    void** rbx43;
    void** rax44;
    void** v45;
    void** rax46;
    void** rax47;
    void** rax48;
    void** rax49;
    void** v50;
    void** rax51;
    void** rax52;
    void** rax53;
    void** v54;
    void** rax55;
    uint32_t eax56;
    void** rax57;
    void** rdx58;
    void** rax59;
    void** v60;
    void** rax61;
    void** rsi62;
    void** rdi63;
    void** rax64;
    void** rax65;
    void** v66;
    void** rax67;
    void** rbx68;
    void** rax69;
    void** v70;
    void** rax71;
    void** rax72;
    void** rax73;
    void** rax74;
    void** rax75;
    void** rbx76;
    void** rax77;
    void** v78;
    void** rax79;
    void** rax80;
    void** v81;
    void** rax82;
    void** rax83;
    void** rax84;
    void** v85;
    void** rax86;
    void** rax87;
    void** v88;
    void** rax89;
    void** v90;
    void** rax91;
    void** rax92;
    void** v93;
    void** rax94;
    void** rcx95;
    void** rsi96;
    int32_t v97;
    void** rax98;
    void** rax99;
    void** v100;
    void** rax101;
    void** rax102;
    void** rax103;
    void** rax104;
    void** rbx105;
    void** rax106;
    void** v107;
    void** rax108;
    void** rax109;
    void** rax110;
    void** rbx111;
    void** rax112;
    void** v113;
    void** rax114;
    void** rax115;
    void** rax116;
    void** rax117;
    void** v118;
    void** rax119;
    void** v120;
    void** rax121;
    void** rax122;
    void** v123;
    void** rax124;
    void** v125;
    void** rax126;
    void** rax127;
    void** v128;
    void** rax129;
    void** v130;
    void** rax131;
    void** rax132;
    void** v133;
    void** rax134;
    void** v135;
    void** rax136;

    rax8 = fun_4028a0(0);
    g60f6c8 = rax8;
    rax9 = fun_402c20(0, rsi, rdx, rcx, r8);
    rax10 = g60f6c8;
    rax12 = fun_402e00(rax10, rax9, rax9, rcx, r8, r9, v11);
    fun_402df0(rax12, 0);
    rax13 = fun_402b60(rax12, 0, rax9, rcx, r8, r9);
    rax14 = g60f6c8;
    rax16 = fun_402e00(rax14, rax13, rax13, rcx, r8, r9, v15);
    fun_403050(rax16, 30);
    rax17 = fun_402c20(rax16, 30, rax13, rcx, r8);
    rax18 = g60f6c8;
    rax20 = fun_402e00(rax18, rax17, rax17, rcx, r8, r9, v19);
    fun_402ca0(rax20, 1);
    rax21 = fun_402930(0, 20, rax17, rcx, r8, r9);
    v22 = rax21;
    rax23 = fun_402b90(0, 20, rax17, rcx, r8);
    rax24 = fun_402bd0("http://www.dasung.com/", "checking update");
    g60f6e0 = rax24;
    rax25 = g60f6e0;
    fun_402d80(rax25, 0xb4, 30, rcx, r8);
    rax26 = g60f6e0;
    fun_402e10(rax26, 0xb4, 30, rcx, r8, r9);
    rbx27 = g60f6e0;
    rax28 = fun_402a70(rax26, 0xb4, 30, rcx, r8);
    rax30 = fun_402e00(rax23, rax28, rax28, rcx, r8, r9, v29);
    fun_402c50(rax30, rbx27, 0, 0, r8);
    rax31 = fun_402890(rax30, rbx27, 0, 0, r8, r9);
    rax33 = fun_402e00(v22, rax31, rax31, 0, r8, r9, v32);
    fun_402ea0(rax33, rax23, 0, 0, 0, r9);
    rax34 = fun_402e40(0, 0, 0, 0, 0);
    rax35 = fun_402890(0, 0, 0, 0, 0, r9);
    rax37 = fun_402e00(rax34, rax35, rax35, 0, 0, r9, v36);
    fun_403010(rax37, 25);
    rax38 = fun_402890(rax37, 25, rax35, 0, 0, r9);
    rax40 = fun_402e00(v22, rax38, rax38, 0, 0, r9, v39);
    fun_402ea0(rax40, rax34, 0, 1, 0, r9);
    rax41 = fun_402910(0x40d4af, rax34, 0, 1, 0, r9);
    g60f6d8 = rax41;
    rax42 = g60f6d8;
    fun_402d80(rax42, 0xb4, 30, 1, 0);
    rbx43 = g60f6d8;
    rax44 = fun_402890(rax42, 0xb4, 30, 1, 0, r9);
    rax46 = fun_402e00(rax34, rax44, rax44, 1, 0, r9, v45);
    fun_402ea0(rax46, rbx43, 0, 0, 0, r9);
    rax47 = fun_402980(rax46, rbx43, 0, 0, 0);
    g60f6d0 = rax47;
    rax48 = fun_402b10(rax46, rbx43, 0, 0, 0);
    rax49 = g60f6d0;
    rax51 = fun_402e00(rax49, rax48, rax48, 0, 0, r9, v50);
    fun_403020(rax51, 0x40d4c5);
    rax52 = fun_402b10(rax51, 0x40d4c5, rax48, 0, 0);
    rax53 = g60f6d0;
    rax55 = fun_402e00(rax53, rax52, rax52, 0, 0, r9, v54);
    fun_403020(rax55, "English");
    eax56 = g60f4c3;
    if (*reinterpret_cast<signed char*>(&eax56) != 1) {
        rax57 = fun_402b10(rax55, "English", rax52, 0, 0);
        rdx58 = rax57;
        rax59 = g60f6d0;
        rax61 = fun_402e00(rax59, rdx58, rdx58, 0, 0, r9, v60);
        *reinterpret_cast<int32_t*>(&rsi62) = 1;
        *reinterpret_cast<int32_t*>(&rsi62 + 4) = 0;
        rdi63 = rax61;
        fun_402c00(rdi63, 1);
    } else {
        rax64 = fun_402b10(rax55, "English", rax52, 0, 0);
        rdx58 = rax64;
        rax65 = g60f6d0;
        rax67 = fun_402e00(rax65, rdx58, rdx58, 0, 0, r9, v66);
        *reinterpret_cast<int32_t*>(&rsi62) = 0;
        *reinterpret_cast<int32_t*>(&rsi62 + 4) = 0;
        rdi63 = rax67;
        fun_402c00(rdi63, 0);
    }
    rbx68 = g60f6d0;
    rax69 = fun_402890(rdi63, rsi62, rdx58, 0, 0, r9);
    rax71 = fun_402e00(rax34, rax69, rax69, 0, 0, r9, v70);
    fun_402ea0(rax71, rbx68, 0, 0, 0, r9);
    rax72 = fun_402b90(rax71, rbx68, 0, 0, 0);
    rax73 = fun_402f10("About", rbx68, 0, 0, 0);
    g60f6c0 = rax73;
    rax74 = g60f6c0;
    fun_402d80(rax74, 0xb4, 30, 0, 0);
    rax75 = g60f6c0;
    fun_402e10(rax75, 0xb4, 30, 0, 0, r9);
    rbx76 = g60f6c0;
    rax77 = fun_402a70(rax75, 0xb4, 30, 0, 0);
    rax79 = fun_402e00(rax72, rax77, rax77, 0, 0, r9, v78);
    fun_402c50(rax79, rbx76, 0, 0, 0);
    rax80 = fun_402890(rax79, rbx76, 0, 0, 0, r9);
    rax82 = fun_402e00(v22, rax80, rax80, 0, 0, r9, v81);
    fun_402ea0(rax82, rax72, 0, 0, 0, r9);
    rax83 = fun_402910("    ", rax72, 0, 0, 0, r9);
    fun_402e10(rax83, rax72, 0, 0, 0, r9);
    rax84 = fun_402890(rax83, rax72, 0, 0, 0, r9);
    rax86 = fun_402e00(v22, rax84, rax84, 0, 0, r9, v85);
    fun_402ea0(rax86, rax83, 0, 0, 0, r9);
    rax87 = fun_402e40(0, 0, 0, 0, 0);
    v88 = rax87;
    rax89 = fun_402890(0, 0, 0, 0, 0, r9);
    rax91 = fun_402e00(v88, rax89, rax89, 0, 0, r9, v90);
    fun_403010(rax91, 25);
    rax92 = fun_402890(rax91, 25, rax89, 0, 0, r9);
    rax94 = fun_402e00(v22, rax92, rax92, 0, 0, r9, v93);
    *reinterpret_cast<int32_t*>(&rcx95) = 1;
    *reinterpret_cast<int32_t*>(&rcx95 + 4) = 0;
    rsi96 = v88;
    fun_402ea0(rax94, rsi96, 0, 1, 0, r9);
    v97 = 0;
    while (v97 <= 1) {
        rax98 = fun_402910("    ", rsi96, 0, rcx95, 0, r9);
        fun_402e10(rax98, rsi96, 0, rcx95, 0, r9);
        rax99 = fun_402890(rax98, rsi96, 0, rcx95, 0, r9);
        rax101 = fun_402e00(v88, rax99, rax99, rcx95, 0, r9, v100);
        *reinterpret_cast<int32_t*>(&rcx95) = 0;
        *reinterpret_cast<int32_t*>(&rcx95 + 4) = 0;
        rsi96 = rax98;
        fun_402ea0(rax101, rsi96, 0, 0, 0, r9);
        ++v97;
    }
    rax102 = fun_402f10("OK", rsi96, 0, rcx95, 0);
    g60f5a8 = rax102;
    rax103 = g60f5a8;
    fun_402d80(rax103, 60, 30, rcx95, 0);
    rax104 = g60f5a8;
    fun_402e10(rax104, 60, 30, rcx95, 0, r9);
    rbx105 = g60f5a8;
    rax106 = fun_402890(rax104, 60, 30, rcx95, 0, r9);
    rax108 = fun_402e00(v88, rax106, rax106, rcx95, 0, r9, v107);
    fun_402ea0(rax108, rbx105, 0, 0, 0, r9);
    rax109 = fun_402f10("Cancel", rbx105, 0, 0, 0);
    g60f678 = rax109;
    rax110 = g60f678;
    fun_402d80(rax110, 60, 30, 0, 0);
    rbx111 = g60f678;
    rax112 = fun_402890(rax110, 60, 30, 0, 0, r9);
    rax114 = fun_402e00(v88, rax112, rax112, 0, 0, r9, v113);
    fun_402ea0(rax114, rbx111, 0, 0, 0, r9);
    rax115 = g60f678;
    fun_402e10(rax115, rbx111, 0, 0, 0, r9);
    fun_402e10(v88, rbx111, 0, 0, 0, r9);
    rax116 = fun_402d30(v88, rbx111, 0, 0, 0, r9);
    rax117 = g60f6c0;
    rax119 = fun_402e00(rax117, rax116, rax116, 0, 0, r9, v118);
    fun_402de0(rax119, "clicked", fun_40bd2b, 0, 0, 0, v120);
    rax121 = fun_402d30(rax119, "clicked", fun_40bd2b, 0, 0, 0);
    rax122 = g60f5a8;
    rax124 = fun_402e00(rax122, rax121, rax121, 0, 0, 0, v123);
    fun_402de0(rax124, "clicked", fun_40bd65, 0, 0, 0, v125);
    rax126 = fun_402d30(rax124, "clicked", fun_40bd65, 0, 0, 0);
    rax127 = g60f678;
    rax129 = fun_402e00(rax127, rax126, rax126, 0, 0, 0, v128);
    fun_402de0(rax129, "clicked", fun_40bd48, 0, 0, 0, v130);
    rax131 = fun_402b60(rax129, "clicked", fun_40bd48, 0, 0, 0);
    rax132 = g60f6c8;
    rax134 = fun_402e00(rax132, rax131, rax131, 0, 0, 0, v133);
    fun_402e50(rax134, v22);
    fun_40bc6c(rax134, v22, rax134, 0, 0, 0, v135);
    fun_402e10(v22, v22, rax134, 0, 0, 0);
    rax136 = g60f6c8;
    return rax136;
}

void** g60f5a0 = reinterpret_cast<void**>(0);

void fun_40c4f1(int64_t rdi, int64_t rsi);

void** fun_40c50e(int64_t rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9, void** a7) {
    void** rax8;
    void** rax9;
    void** rax10;
    void** v11;
    void** rax12;
    void** rax13;
    void** rax14;
    void** v15;
    void** rax16;
    void** rax17;
    void** rax18;
    void** v19;
    void** rax20;
    void** rax21;
    void** v22;
    void** rax23;
    void** rax24;
    void** rax25;
    void** v26;
    void** rax27;
    void** rax28;
    void** v29;
    void** rax30;
    void** rax31;
    void** rax32;
    void** rax33;
    void** v34;
    void** rax35;
    void** rax36;
    void** v37;
    void** rax38;
    void** rax39;
    void** rax40;
    void** rax41;
    void** v42;
    void** rax43;
    void** rax44;
    void** v45;
    void** rax46;
    void** rax47;
    void** rax48;
    void** rax49;
    void** v50;
    void** rax51;
    void** rax52;
    void** v53;
    void** rax54;
    void** rax55;
    void** v56;
    void** rax57;
    void** v58;
    void** rax59;
    void** rax60;
    void** v61;
    void** rax62;
    void** rcx63;
    void** rsi64;
    void** v65;
    void** rax66;
    void** rax67;
    void** rax68;
    void** rax69;
    void** rax70;
    void** rbx71;
    void** rax72;
    void** rax73;
    void** rax74;
    void** rax75;
    void** rax76;
    void** rax77;
    void** rax78;
    void** rax79;
    void** rax80;

    rax8 = fun_4028a0(0);
    g60f5a0 = rax8;
    rax9 = fun_402c20(0, rsi, rdx, rcx, r8);
    rax10 = g60f5a0;
    rax12 = fun_402e00(rax10, rax9, rax9, rcx, r8, r9, v11);
    fun_402df0(rax12, 0);
    rax13 = fun_402b60(rax12, 0, rax9, rcx, r8, r9);
    rax14 = g60f5a0;
    rax16 = fun_402e00(rax14, rax13, rax13, rcx, r8, r9, v15);
    fun_403050(rax16, 30);
    rax17 = fun_402c20(rax16, 30, rax13, rcx, r8);
    rax18 = g60f5a0;
    rax20 = fun_402e00(rax18, rax17, rax17, rcx, r8, r9, v19);
    fun_402ca0(rax20, 1);
    rax21 = fun_402930(0, 12, rax17, rcx, r8, r9);
    v22 = rax21;
    rax23 = fun_402b90(0, 12, rax17, rcx, r8);
    rax24 = fun_402910("Paperlike Pro", 12, rax17, rcx, r8, r9);
    fun_402d80(rax24, 90, 30, rcx, r8);
    rax25 = fun_402a70(rax24, 90, 30, rcx, r8);
    rax27 = fun_402e00(rax23, rax25, rax25, rcx, r8, r9, v26);
    fun_402c50(rax27, rax24, 0, 0, r8);
    rax28 = fun_402890(rax27, rax24, 0, 0, r8, r9);
    rax30 = fun_402e00(v22, rax28, rax28, 0, r8, r9, v29);
    fun_402ea0(rax30, rax23, 0, 0, 0, r9);
    rax31 = fun_402b90(rax30, rax23, 0, 0, 0);
    rax32 = fun_402910("     v1.0.5", rax23, 0, 0, 0, r9);
    fun_402d80(rax32, 80, 30, 0, 0);
    rax33 = fun_402a70(rax32, 80, 30, 0, 0);
    rax35 = fun_402e00(rax31, rax33, rax33, 0, 0, r9, v34);
    fun_402c50(rax35, rax32, 0, 0, 0);
    rax36 = fun_402890(rax35, rax32, 0, 0, 0, r9);
    rax38 = fun_402e00(v22, rax36, rax36, 0, 0, r9, v37);
    fun_402ea0(rax38, rax31, 1, 1, 0, r9);
    rax39 = fun_402b90(rax38, rax31, 1, 1, 0);
    rax40 = fun_402910("Copyright (C) 2017, 2018, DASUNG Ltd.\nAll Rights Reserved.", rax31, 1, 1, 0, r9);
    fun_402d80(rax40, 0x104, 50, 1, 0);
    rax41 = fun_402a70(rax40, 0x104, 50, 1, 0);
    rax43 = fun_402e00(rax39, rax41, rax41, 1, 0, r9, v42);
    fun_402c50(rax43, rax40, 0, 0, 0);
    rax44 = fun_402890(rax43, rax40, 0, 0, 0, r9);
    rax46 = fun_402e00(v22, rax44, rax44, 0, 0, r9, v45);
    fun_402ea0(rax46, rax39, 1, 1, 0, r9);
    rax47 = fun_402b90(rax46, rax39, 1, 1, 0);
    rax48 = fun_402910("Contact:\nhttp://www.dasung.com/", rax39, 1, 1, 0, r9);
    fun_402d80(rax48, 0xaa, 40, 1, 0);
    rax49 = fun_402a70(rax48, 0xaa, 40, 1, 0);
    rax51 = fun_402e00(rax47, rax49, rax49, 1, 0, r9, v50);
    fun_402c50(rax51, rax48, 0, 0, 0);
    rax52 = fun_402890(rax51, rax48, 0, 0, 0, r9);
    rax54 = fun_402e00(v22, rax52, rax52, 0, 0, r9, v53);
    fun_402ea0(rax54, rax47, 1, 1, 0, r9);
    rax55 = fun_402e40(0, 0, 1, 1, 0);
    v56 = rax55;
    rax57 = fun_402890(0, 0, 1, 1, 0, r9);
    rax59 = fun_402e00(v56, rax57, rax57, 1, 0, r9, v58);
    fun_403010(rax59, 25);
    rax60 = fun_402890(rax59, 25, rax57, 1, 0, r9);
    rax62 = fun_402e00(v22, rax60, rax60, 1, 0, r9, v61);
    *reinterpret_cast<int32_t*>(&rcx63) = 1;
    *reinterpret_cast<int32_t*>(&rcx63 + 4) = 0;
    rsi64 = v56;
    fun_402ea0(rax62, rsi64, 0, 1, 0, r9);
    *reinterpret_cast<int32_t*>(&v65 + 4) = 0;
    while (*reinterpret_cast<int32_t*>(&v65 + 4) <= 3) {
        rax66 = fun_402910("    ", rsi64, 0, rcx63, 0, r9);
        fun_402e10(rax66, rsi64, 0, rcx63, 0, r9);
        rax67 = fun_402890(rax66, rsi64, 0, rcx63, 0, r9);
        rax68 = fun_402e00(v56, rax67, rax67, rcx63, 0, r9, v65);
        *reinterpret_cast<int32_t*>(&rcx63) = 0;
        *reinterpret_cast<int32_t*>(&rcx63 + 4) = 0;
        rsi64 = rax66;
        fun_402ea0(rax68, rsi64, 0, 0, 0, r9);
        *reinterpret_cast<int32_t*>(&v65 + 4) = *reinterpret_cast<int32_t*>(&v65 + 4) + 1;
    }
    rax69 = fun_402f10("OK", rsi64, 0, rcx63, 0);
    g60f5a8 = rax69;
    rax70 = g60f5a8;
    fun_402e10(rax70, rsi64, 0, rcx63, 0, r9);
    rbx71 = g60f5a8;
    rax72 = fun_402890(rax70, rsi64, 0, rcx63, 0, r9);
    rax73 = fun_402e00(v56, rax72, rax72, rcx63, 0, r9, v65);
    fun_402ea0(rax73, rbx71, 0, 0, 0, r9);
    rax74 = fun_402d30(rax73, rbx71, 0, 0, 0, r9);
    rax75 = g60f5a8;
    rax76 = fun_402e00(rax75, rax74, rax74, 0, 0, r9, v65);
    fun_402de0(rax76, "clicked", fun_40c4f1, 0, 0, 0, v65);
    rax77 = fun_402b60(rax76, "clicked", fun_40c4f1, 0, 0, 0);
    rax78 = g60f5a0;
    rax79 = fun_402e00(rax78, rax77, rax77, 0, 0, 0, v65);
    fun_402e50(rax79, v22);
    fun_402e10(v22, v22, rax79, 0, 0, 0);
    rax80 = g60f5a0;
    return rax80;
}

int64_t gtk_window_set_icon = 0x402be6;

void fun_402be0(void** rdi, void** rsi) {
    goto gtk_window_set_icon;
}

void** g60f580 = reinterpret_cast<void**>(0);

void** g60f588 = reinterpret_cast<void**>(0);

void fun_409a5e(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9, void** a7, ...) {
    void** rax8;
    void** rax9;
    void** rax10;
    void** rax11;

    rax8 = g60f580;
    if (!(!rax8 || (rax9 = g60f588, rax9 == 0))) {
        rax10 = g60f588;
        fun_4029e0(rax10);
        rax11 = g60f580;
        fun_402b20(rax11, rsi, rdx, rcx, r8, r9);
    }
    return;
}

void fun_4036a3(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9, void** a7, ...) {
    uint32_t eax8;
    void** rax9;
    void** rax10;
    void** rbp11;
    void** rax12;
    void** rax13;
    void** rax14;
    void** rax15;
    void** rax16;
    void** rax17;
    void** rax18;
    void** rax19;
    void** rax20;
    void** rax21;
    void** rax22;
    void** rax23;
    void** rax24;
    void** rax25;
    void** rax26;
    void** rax27;

    eax8 = g60f4c3;
    if (*reinterpret_cast<signed char*>(&eax8) != 1) {
        rax9 = fun_402d40(rdi, rsi);
        rax10 = g60f518;
        rax12 = fun_402e00(rax10, rax9, rax9, rcx, r8, r9, rbp11);
        fun_402db0(rax12, "Settings");
        rax13 = fun_402d40(rax12, "Settings");
        rax14 = g60f540;
        rax15 = fun_402e00(rax14, rax13, rax13, rcx, r8, r9, rbp11);
        fun_402db0(rax15, "Flexiable RES mode");
        rax16 = fun_402d40(rax15, "Flexiable RES mode");
        rax17 = g60f548;
        rax18 = fun_402e00(rax17, rax16, rax16, rcx, r8, r9, rbp11);
        fun_402db0(rax18, "Fix 800x600 mode");
    } else {
        rax19 = fun_402d40(rdi, rsi);
        rax20 = g60f518;
        rax21 = fun_402e00(rax20, rax19, rax19, rcx, r8, r9, rbp11);
        fun_402db0(rax21, 0x40cab0);
        rax22 = fun_402d40(rax21, 0x40cab0);
        rax23 = g60f540;
        rax24 = fun_402e00(rax23, rax22, rax22, rcx, r8, r9, rbp11);
        fun_402db0(rax24, 0x40cab7);
        rax25 = fun_402d40(rax24, 0x40cab7);
        rax26 = g60f548;
        rax27 = fun_402e00(rax26, rax25, rax25, rcx, r8, r9, rbp11);
        fun_402db0(rax27, 0x40cacd);
    }
    return;
}

int64_t gtk_main = 0x4029a6;

void fun_4029a0(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9, void** a7) {
    goto gtk_main;
}

void fun_403478(void** rdi, void** rsi) {
    void** rax3;
    void** rax4;
    void** rax5;

    rax3 = g60f508;
    fun_402b40(rax3, 1);
    rax4 = g60f500;
    fun_402b40(rax4, 1);
    rax5 = g60f510;
    fun_402b40(rax5, 1);
    return;
}

void fun_4034bb(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    void** rbp7;
    uint32_t eax8;
    uint32_t eax9;
    void** rax10;
    void** rax11;
    void** rax12;
    void** rax13;
    void** rax14;
    void** rax15;
    void** rax16;
    void** rax17;
    void** rax18;
    void** rax19;
    void** rax20;
    void** rax21;
    void** rax22;
    void** rax23;
    void** rax24;
    void** rax25;
    void** rax26;
    void** rax27;
    void** rax28;
    void** rax29;
    void** rax30;
    uint32_t eax31;
    uint32_t eax32;
    int64_t rax33;
    void** rax34;
    void** rax35;
    void** rax36;

    fun_4036a3(rdi, rsi, rdx, rcx, r8, r9, rbp7);
    eax8 = g60f4ba;
    eax9 = *reinterpret_cast<unsigned char*>(&eax8);
    if (eax9 == 1) {
        rax10 = fun_402d40(rdi, rsi);
        rax11 = g60f508;
        rax12 = fun_402e00(rax11, rax10, rax10, rcx, r8, r9, rbp7);
        fun_402db0(rax12, "Floyd");
        rax13 = fun_402d40(rax12, "Floyd");
        rax14 = g60f510;
        rax15 = fun_402e00(rax14, rax13, rax13, rcx, r8, r9, rbp7);
        fun_402db0(rax15, "A16");
        rax16 = fun_402e90(rax15, "A16", rax13, rcx, r8);
        rax17 = g60f540;
        rax18 = fun_402e00(rax17, rax16, rax16, rcx, r8, r9, rbp7);
        fun_402e80(rax18, 0);
        rax19 = fun_402e90(rax18, 0, rax16, rcx, r8);
        rax20 = g60f540;
        rax21 = fun_402e00(rax20, rax19, rax19, rcx, r8, r9, rbp7);
        *reinterpret_cast<int32_t*>(&rsi) = 1;
        *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
        rdi = rax21;
        fun_402e80(rdi, 1);
    } else {
        if (eax9 == 2) {
            rax22 = fun_402d40(rdi, rsi);
            rax23 = g60f508;
            rax24 = fun_402e00(rax23, rax22, rax22, rcx, r8, r9, rbp7);
            fun_402db0(rax24, "A5");
            rax25 = fun_402d40(rax24, "A5");
            rax26 = g60f510;
            rax27 = fun_402e00(rax26, rax25, rax25, rcx, r8, r9, rbp7);
            fun_402db0(rax27, "A61");
            rax28 = fun_402e90(rax27, "A61", rax25, rcx, r8);
            rax29 = g60f548;
            rax30 = fun_402e00(rax29, rax28, rax28, rcx, r8, r9, rbp7);
            *reinterpret_cast<int32_t*>(&rsi) = 1;
            *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
            rdi = rax30;
            fun_402e80(rdi, 1);
        }
    }
    fun_403478(rdi, rsi);
    eax31 = g60f4b9;
    eax32 = *reinterpret_cast<unsigned char*>(&eax31);
    if (eax32 > 6) 
        goto addr_40365f_7;
    *reinterpret_cast<uint32_t*>(&rax33) = eax32;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax33) + 4) = 0;
    switch (rax33) {
        addr_40365f_7:
    case 0:
        break;
    case 1:
    case 4:
        rax34 = g60f508;
        fun_402b40(rax34, 0);
        break;
    case 2:
    case 5:
        rax35 = g60f500;
        fun_402b40(rax35, 0);
        break;
    case 3:
    case 6:
        rax36 = g60f510;
        fun_402b40(rax36, 0);
        goto addr_40365f_7;
    }
    return;
}

int64_t gtk_toggle_button_get_active = 0x4028f6;

void** fun_4028f0(void** rdi, void** rsi) {
    goto gtk_toggle_button_get_active;
}

int64_t system = 0x402a46;

void fun_402a40(int64_t rdi) {
    goto system;
}

int64_t gtk_window_new = 0x4028a6;

void** fun_4028a0(void** rdi) {
    goto gtk_window_new;
}

int64_t gtk_window_set_resizable = 0x402df6;

void fun_402df0(void** rdi, void** rsi) {
    goto gtk_window_set_resizable;
}

int64_t gtk_container_set_border_width = 0x403056;

void fun_403050(void** rdi, void** rsi) {
    goto gtk_container_set_border_width;
}

int64_t gtk_window_set_title = 0x402bf6;

void fun_402bf0(void** rdi, void** rsi) {
    goto gtk_window_set_title;
}

int64_t gtk_widget_realize = 0x402d16;

void fun_402d10(void** rdi, void** rsi) {
    goto gtk_widget_realize;
}

int64_t gtk_vbox_new = 0x402936;

void** fun_402930(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    goto gtk_vbox_new;
}

int64_t gtk_radio_button_new_with_label = 0x402d76;

void** fun_402d70(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    goto gtk_radio_button_new_with_label;
}

int64_t gtk_radio_button_get_type = 0x403036;

void** fun_403030(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    goto gtk_radio_button_get_type;
}

int64_t gtk_radio_button_get_group = 0x402e66;

void** fun_402e60(void** rdi, void** rsi) {
    goto gtk_radio_button_get_group;
}

int64_t gtk_button_new_from_stock = 0x402f36;

void** fun_402f30(int64_t rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    goto gtk_button_new_from_stock;
}

int64_t g_idle_add = 0x402ef6;

void fun_402ef0(int64_t rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    goto g_idle_add;
}

int32_t fun_402aa0(void* rdi, int64_t rsi);

int32_t fun_402d50(int64_t rdi, void** rsi, int64_t rdx);

void fun_402a80(int64_t rdi, int64_t rsi, int64_t rdx, void* rcx, int64_t r8);

int32_t fun_402f90(void** rdi, void** rsi, void** rdx);

int32_t fun_404628() {
    void* rbp1;
    uint64_t rax2;
    void* rdi3;
    void** rdx4;
    void** rcx5;
    void** rsi6;
    int32_t eax7;
    int64_t rdi8;
    void** rcx9;
    void** rdi10;
    int32_t eax11;
    void** rax12;
    uint64_t rcx13;

    rbp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax2 = g28;
    rdi3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp1) - 32);
    fun_402af0(rdi3, 12, rdx4, rcx5);
    fun_402aa0(rdi3, 12);
    *reinterpret_cast<int32_t*>(&rsi6) = 2;
    *reinterpret_cast<int32_t*>(&rsi6 + 4) = 0;
    eax7 = fun_402d50(16, 2, 15);
    if (eax7 != -1) {
        *reinterpret_cast<int32_t*>(&rdi8) = eax7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
        fun_402a80(rdi8, 1, 8, reinterpret_cast<int64_t>(rbp1) - 44, 4);
        rcx9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffe0);
        rsi6 = rcx9;
        *reinterpret_cast<int32_t*>(&rdi10) = eax7;
        *reinterpret_cast<int32_t*>(&rdi10 + 4) = 0;
        eax11 = fun_402f90(rdi10, rsi6, 12);
        if (eax11 >= 0) {
            *reinterpret_cast<int32_t*>(&rax12) = eax7;
        } else {
            fun_402fe0("bind", rsi6, "bind", rsi6);
            *reinterpret_cast<int32_t*>(&rdi10) = eax7;
            *reinterpret_cast<int32_t*>(&rdi10 + 4) = 0;
            fun_4028b0(rdi10, rsi6, 12, rcx9, 4);
            *reinterpret_cast<int32_t*>(&rax12) = -1;
        }
    } else {
        *reinterpret_cast<int32_t*>(&rdi10) = reinterpret_cast<int32_t>("socket");
        *reinterpret_cast<int32_t*>(&rdi10 + 4) = 0;
        fun_402fe0("socket", 2, "socket", 2);
        *reinterpret_cast<int32_t*>(&rax12) = -1;
    }
    rcx13 = rax2 ^ g28;
    if (rcx13) {
        rax12 = fun_402e20(rdi10, rsi6, rdi10, rsi6);
    }
    return *reinterpret_cast<int32_t*>(&rax12);
}

int64_t setsockopt = 0x402a86;

void fun_402a80(int64_t rdi, int64_t rsi, int64_t rdx, void* rcx, int64_t r8) {
    goto setsockopt;
}

int64_t bind = 0x402f96;

int32_t fun_402f90(void** rdi, void** rsi, void** rdx) {
    goto bind;
}

int64_t recv = 0x402a36;

void fun_402a30(int64_t rdi, void* rsi, void** rdx, void** rcx) {
    goto recv;
}

struct s8 {
    signed char[4] pad4;
    void** f4;
};

int64_t strstr = 0x402c96;

struct s8* fun_402c90(void** rdi, int64_t rsi, void** rdx, void** rcx) {
    goto strstr;
}

void** fun_404afb(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    int32_t v6;
    void** eax7;
    void** rax8;
    int32_t eax9;
    void** rdi10;
    void** eax11;
    void** rdi12;
    void** eax13;
    int32_t eax14;
    void** rdi15;
    void** v16;
    int32_t eax17;
    void** rax18;

    if (!rdi) {
        addr_404b6a_2:
        v6 = 0;
    } else {
        eax7 = fun_404a86(rdi, rsi, rdx);
        if (reinterpret_cast<signed char>(eax7) < reinterpret_cast<signed char>(0)) {
            addr_404b43_4:
            rax8 = stderr;
            rdx = rdi;
            *reinterpret_cast<int32_t*>(&rsi) = reinterpret_cast<int32_t>("Couldn't open %s\n");
            *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
            fun_402ff0(rax8, "Couldn't open %s\n", rdx);
            fun_402950();
            goto addr_404b6a_2;
        } else {
            eax9 = fun_404a0c(eax7, rsi, rdx);
            if (!eax9) {
                rdi10 = eax7;
                *reinterpret_cast<int32_t*>(&rdi10 + 4) = 0;
                fun_4028b0(rdi10, rsi, rdx, rcx, r8);
                goto addr_404b43_4;
            } else {
                eax11 = eax7;
                goto addr_404c12_8;
            }
        }
    }
    while (*reinterpret_cast<int64_t*>(v6 * 8 + 0x60f480)) {
        rdi12 = *reinterpret_cast<void***>(v6 * 8 + 0x60f480);
        eax13 = fun_404a86(rdi12, rsi, rdx);
        if (reinterpret_cast<signed char>(eax13) >= reinterpret_cast<signed char>(0)) {
            eax14 = fun_404a0c(eax13, rsi, rdx);
            if (eax14) 
                goto addr_404b9f_12;
            rdi15 = eax13;
            *reinterpret_cast<int32_t*>(&rdi15 + 4) = 0;
            fun_4028b0(rdi15, rsi, rdx, rcx, r8);
        }
        ++v6;
    }
    v16 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<signed char>(v16) <= reinterpret_cast<signed char>(2)) {
        eax17 = fun_404a0c(v16, rsi, rdx);
        if (eax17) 
            goto addr_404bdb_18;
        ++v16;
    }
    rax18 = stderr;
    fun_402fa0("Couldn't get a file descriptor referring to the console\n", 1, 56, rax18);
    eax11 = fun_402950();
    addr_404c12_8:
    return eax11;
    addr_404bdb_18:
    eax11 = v16;
    goto addr_404c12_8;
    addr_404b9f_12:
    eax11 = eax13;
    goto addr_404c12_8;
}

int64_t isatty = 0x4028e6;

int32_t fun_4028e0(void** rdi, void** rsi, void** rdx) {
    goto isatty;
}

struct s9 {
    signed char[224] pad224;
    int32_t f224;
    signed char[4] pad232;
    void* f232;
};

int64_t XOpenDisplay = 0x402ad6;

struct s9* fun_402ad0(void** rdi) {
    goto XOpenDisplay;
}

int64_t XQueryPointer = 0x402f06;

void fun_402f00(struct s9* rdi, void** rsi, void* rdx, void* rcx, void* r8, void* r9, void* a7, void* a8, void* a9, int64_t a10) {
    goto XQueryPointer;
}

uint32_t fun_407fc1(void** edi, int32_t esi, int32_t edx, void** rcx, uint32_t r8d) {
    void* rbp6;
    uint64_t rax7;
    void** rax8;
    void** rax9;
    void** rsi10;
    void** rdi11;
    int32_t eax12;
    void** rax13;
    uint64_t rdx14;

    rbp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax7 = g28;
    rax8 = g60f560;
    rax9 = *reinterpret_cast<void***>(rax8 + 64);
    *reinterpret_cast<int32_t*>(&rsi10) = esi;
    *reinterpret_cast<int32_t*>(&rsi10 + 4) = 0;
    rdi11 = edi;
    *reinterpret_cast<int32_t*>(&rdi11 + 4) = 0;
    eax12 = reinterpret_cast<int32_t>(rax9(rdi11, rsi10, 0, 0, 1, reinterpret_cast<int64_t>(rbp6) - 13, reinterpret_cast<int64_t>(rbp6) - 32, rcx));
    if (!eax12) {
        *reinterpret_cast<uint32_t*>(&rax13) = r8d;
    } else {
        *reinterpret_cast<uint32_t*>(&rax13) = 0xffffffff;
    }
    rdx14 = rax7 ^ g28;
    if (rdx14) {
        rax13 = fun_402e20(rdi11, rsi10);
    }
    return *reinterpret_cast<uint32_t*>(&rax13);
}

int64_t gettimeofday = 0x402996;

int32_t fun_402990(void** rdi, void** rsi) {
    goto gettimeofday;
}

uint32_t fun_405879(void** rdi, void** rsi, uint32_t edx, ...) {
    void* rbp4;
    void** v5;
    void** v6;
    uint32_t eax7;
    unsigned char v8;
    uint64_t rax9;
    uint64_t v10;
    unsigned char v11;
    uint32_t eax12;
    void** rsi13;
    uint32_t eax14;
    uint32_t eax15;
    unsigned char v16;
    uint32_t eax17;
    unsigned char v18;
    int32_t eax19;
    uint32_t eax20;
    unsigned char v21;
    void** rdx22;
    void** rax23;
    uint32_t eax24;
    unsigned char v25;
    uint32_t eax26;
    uint32_t v27;
    int32_t eax28;
    uint32_t eax29;
    unsigned char v30;
    void** rdx31;
    void** rax32;
    int64_t rax33;
    void** rax34;
    void** rax35;
    int32_t eax36;
    void** rax37;
    void** rdx38;
    void** rdi39;
    uint32_t v40;
    uint32_t eax41;
    int32_t eax42;
    void** rdx43;
    void** rax44;
    int64_t rax45;
    void** rax46;

    rbp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    v5 = rdi;
    v6 = rsi;
    eax7 = edx;
    v8 = *reinterpret_cast<unsigned char*>(&eax7);
    rax9 = g28;
    v10 = rax9;
    v11 = 80;
    fun_4055e9(v5, 0);
    eax12 = v8 + 3;
    *reinterpret_cast<int32_t*>(&rsi13) = *reinterpret_cast<int32_t*>(v5 + 4);
    *reinterpret_cast<int32_t*>(&rsi13 + 4) = 0;
    eax14 = fun_4054a6(v5, *reinterpret_cast<int32_t*>(&rsi13), reinterpret_cast<int64_t>(rbp4) + 0xffffffffffffff70, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax12)));
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax14) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax14 == 0))) {
        eax15 = v16;
        if (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax15)) == *reinterpret_cast<int32_t*>(v5 + 4) + *reinterpret_cast<int32_t*>(v5 + 4)) {
            eax17 = v18;
            if (*reinterpret_cast<signed char*>(&eax17) >= 0 && (!*reinterpret_cast<int32_t*>(v5 + 0x844) || (eax19 = g60f55c, !!eax19))) {
                eax20 = v21;
                *reinterpret_cast<uint32_t*>(&rdx22) = *reinterpret_cast<unsigned char*>(&eax20);
                *reinterpret_cast<int32_t*>(&rdx22 + 4) = 0;
                rax23 = stderr;
                *reinterpret_cast<int32_t*>(&rsi13) = reinterpret_cast<int32_t>("Non-fatal error: Invalid response, magic is 0x%02x\n");
                *reinterpret_cast<int32_t*>(&rsi13 + 4) = 0;
                fun_402ff0(rax23, "Non-fatal error: Invalid response, magic is 0x%02x\n", rdx22, rax23, "Non-fatal error: Invalid response, magic is 0x%02x\n", rdx22);
            }
            eax24 = v25;
            eax26 = *reinterpret_cast<unsigned char*>(&eax24);
            *reinterpret_cast<unsigned char*>(&eax26) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax26) & 0x7f);
            v27 = eax26;
            if (reinterpret_cast<int32_t>(static_cast<uint32_t>(v8)) < reinterpret_cast<int32_t>(v27)) 
                goto addr_405a08_6;
            if (v27 <= 0x7f) 
                goto addr_405a53_8;
        } else {
            if (!*reinterpret_cast<int32_t*>(v5 + 0x844) || (eax28 = g60f55c, !!eax28)) {
                eax29 = v30;
                *reinterpret_cast<uint32_t*>(&rdx31) = *reinterpret_cast<unsigned char*>(&eax29);
                *reinterpret_cast<int32_t*>(&rdx31 + 4) = 0;
                rax32 = stderr;
                fun_402ff0(rax32, "Invalid response, first byte is 0x%02x, should be 0x%02x\n", rdx31, rax32, "Invalid response, first byte is 0x%02x, should be 0x%02x\n", rdx31);
                *reinterpret_cast<uint32_t*>(&rax33) = v8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax33) + 4) = 0;
                rax34 = stderr;
                *reinterpret_cast<int32_t*>(&rsi13) = 0;
                *reinterpret_cast<int32_t*>(&rsi13 + 4) = 0;
                fun_405151(rax34, 0, reinterpret_cast<int64_t>(rbp4) + 0xffffffffffffff70, static_cast<uint32_t>(rax33 + 3));
            }
            *reinterpret_cast<uint32_t*>(&rax35) = 0xffffffff;
            goto addr_405b2f_12;
        }
    } else {
        *reinterpret_cast<uint32_t*>(&rax35) = 0xffffffff;
        goto addr_405b2f_12;
    }
    addr_405a08_6:
    if (!*reinterpret_cast<int32_t*>(v5 + 0x844) || (eax36 = g60f55c, !!eax36)) {
        rax37 = stderr;
        *reinterpret_cast<uint32_t*>(&rdx38) = v27;
        *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rsi13) = reinterpret_cast<int32_t>("Invalid response, length is %d, should be %d at most\n");
        *reinterpret_cast<int32_t*>(&rsi13 + 4) = 0;
        fun_402ff0(rax37, "Invalid response, length is %d, should be %d at most\n", rdx38, rax37, "Invalid response, length is %d, should be %d at most\n", rdx38);
    }
    *reinterpret_cast<uint32_t*>(&rax35) = 0xffffffff;
    addr_405b2f_12:
    rdi39 = reinterpret_cast<void**>(v10 ^ g28);
    if (rdi39) {
        rax35 = fun_402e20(rdi39, rsi13, rdi39, rsi13);
    }
    return *reinterpret_cast<uint32_t*>(&rax35);
    addr_405a53_8:
    v40 = 0;
    while (reinterpret_cast<int32_t>(v27 + 3) > reinterpret_cast<int32_t>(v40)) {
        eax41 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rbp4) + v40 - 0x90);
        v11 = reinterpret_cast<unsigned char>(v11 ^ *reinterpret_cast<unsigned char*>(&eax41));
        ++v40;
    }
    if (v11) 
        goto addr_405a96_21;
    rsi13 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp4) - 0x90 + 2);
    fun_403040(v6, rsi13, static_cast<int64_t>(reinterpret_cast<int32_t>(v27)));
    *reinterpret_cast<uint32_t*>(&rax35) = v27;
    goto addr_405b2f_12;
    addr_405a96_21:
    if (!*reinterpret_cast<int32_t*>(v5 + 0x844) || (eax42 = g60f55c, !!eax42)) {
        *reinterpret_cast<uint32_t*>(&rdx43) = v11;
        *reinterpret_cast<int32_t*>(&rdx43 + 4) = 0;
        rax44 = stderr;
        fun_402ff0(rax44, "Invalid response, corrupted data - xor is 0x%02x, length 0x%02x\n", rdx43, rax44, "Invalid response, corrupted data - xor is 0x%02x, length 0x%02x\n", rdx43);
        *reinterpret_cast<uint32_t*>(&rax45) = v8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax45) + 4) = 0;
        rax46 = stderr;
        *reinterpret_cast<int32_t*>(&rsi13) = 0;
        *reinterpret_cast<int32_t*>(&rsi13 + 4) = 0;
        fun_405151(rax46, 0, reinterpret_cast<int64_t>(rbp4) + 0xffffffffffffff70, static_cast<uint32_t>(rax45 + 3));
    }
    *reinterpret_cast<uint32_t*>(&rax35) = 0xffffffff;
    goto addr_405b2f_12;
}

int64_t memcpy = 0x403046;

void fun_403040(void** rdi, void** rsi, int64_t rdx) {
    goto memcpy;
}

int64_t realloc = 0x402fb6;

void** fun_402fb0(void** rdi, void** rsi) {
    goto realloc;
}

int32_t fun_407f42(void** edi, int32_t esi) {
    void** v3;
    int32_t v4;
    void** rax5;
    int32_t v6;
    void** rax7;
    void** rax8;
    void** rax9;
    int32_t eax10;

    v3 = edi;
    v4 = esi;
    rax5 = g60f560;
    if (*reinterpret_cast<void***>(rax5)) {
        v6 = 0;
        while (rax7 = g60f560, *reinterpret_cast<int32_t*>(rax7 + 0x248) > v6) {
            rax8 = g60f560;
            if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rax8) + reinterpret_cast<uint64_t>((v6 + 8) * 8) + 8) != v3) 
                goto addr_407fa4_5;
            rax9 = g60f560;
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rax9) + reinterpret_cast<uint64_t>((v6 + 8) * 8) + 12) == v4) 
                goto addr_407f9d_7;
            addr_407fa4_5:
            ++v6;
        }
    } else {
        eax10 = -1;
        goto addr_407fbf_9;
    }
    eax10 = -1;
    addr_407fbf_9:
    return eax10;
    addr_407f9d_7:
    eax10 = 0;
    goto addr_407fbf_9;
}

int64_t opendir = 0x402bc6;

void** fun_402bc0(int64_t rdi) {
    goto opendir;
}

int64_t readdir = 0x402c16;

struct s1* fun_402c10(void** rdi, void** rsi, void** rdx) {
    goto readdir;
}

int32_t fun_407eb5(int32_t edi, void** rsi, void** rdx) {
    void** rax4;
    void** rax5;
    int32_t eax6;
    void** rax7;
    void** rax8;

    rax4 = g60f560;
    if (*reinterpret_cast<void***>(rax4)) {
        if (edi < 0 || (rax5 = g60f560, *reinterpret_cast<int32_t*>(rax5 + 0x248) <= edi)) {
            eax6 = -1;
        } else {
            if (rsi) {
                rax7 = g60f560;
                *reinterpret_cast<void***>(rsi) = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rax7) + reinterpret_cast<uint64_t>((edi + 8) * 8) + 8);
            }
            if (rdx) {
                rax8 = g60f560;
                *reinterpret_cast<void***>(rdx) = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rax8) + reinterpret_cast<uint64_t>((edi + 8) * 8) + 12);
            }
            eax6 = 0;
        }
    } else {
        eax6 = -1;
    }
    return eax6;
}

signed char fun_407434(void** rdi, void** rsi, signed char dl, int32_t ecx) {
    uint64_t rax5;
    void** rax6;
    void** rsi7;

    rax5 = g28;
    fun_4056fd(rdi, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 0xfffffffffffffff0, 4);
    *reinterpret_cast<int32_t*>(&rax6) = 1;
    rsi7 = reinterpret_cast<void**>(rax5 ^ g28);
    if (rsi7) {
        rax6 = fun_402e20(rdi, rsi7, rdi, rsi7);
    }
    return *reinterpret_cast<signed char*>(&rax6);
}

int64_t dlopen = 0x402ed6;

void** fun_402ed0(void** rdi, void** rsi) {
    goto dlopen;
}

int64_t dlsym = 0x402f26;

void** fun_402f20(void** rdi, int64_t rsi) {
    goto dlsym;
}

int64_t atoi = 0x402ce6;

uint16_t fun_402ce0(void** rdi, void** rsi, void** rdx, int64_t rcx) {
    goto atoi;
}

int64_t getenv = 0x402d66;

int64_t fun_402d60(int64_t rdi) {
    goto getenv;
}

int64_t fopen = 0x402a16;

void** fun_402a10(void** rdi, void** rsi, void** rdx, int64_t rcx) {
    goto fopen;
}

void fun_409a9d(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9, void** a7, void** a8) {
    void** rax9;
    void** rax10;
    void** rax11;
    void** rax12;

    rax9 = g60f580;
    if (!(!rax9 || (rax10 = g60f588, rax10 == 0))) {
        fun_40a3fd(rdi, rsi, rdx, rcx, r8, r9);
        rax11 = g60f580;
        fun_4029e0(rax11);
        rax12 = g60f588;
        fun_402b20(rax12, rsi, rdx, rcx, r8, r9);
    }
    return;
}

void** g60f590 = reinterpret_cast<void**>(0);

void fun_409ae1() {
    void** rax1;
    void** rax2;
    void** rax3;
    void** rax4;
    void** rsi5;
    void** rdx6;
    void** rcx7;
    int64_t r8_8;
    int64_t r9_9;

    rax1 = g60f580;
    if (!(!rax1 || (rax2 = g60f590, rax2 == 0))) {
        rax3 = g60f580;
        fun_4029e0(rax3);
        rax4 = g60f590;
        fun_402b20(rax4, rsi5, rdx6, rcx7, r8_8, r9_9);
    }
    return;
}

void fun_409b20() {
    void** rax1;
    void** rax2;
    void** rax3;
    void** rax4;
    void** rsi5;
    void** rdx6;
    void** rcx7;
    int64_t r8_8;
    int64_t r9_9;

    rax1 = g60f580;
    if (!(!rax1 || (rax2 = g60f590, rax2 == 0))) {
        rax3 = g60f590;
        fun_4029e0(rax3);
        rax4 = g60f580;
        fun_402b20(rax4, rsi5, rdx6, rcx7, r8_8, r9_9);
    }
    return;
}

void** g60f598 = reinterpret_cast<void**>(0);

void fun_409b5f() {
    void** rax1;
    void** rax2;
    void** rax3;
    void** rax4;
    void** rsi5;
    void** rdx6;
    void** rcx7;
    int64_t r8_8;
    int64_t r9_9;

    rax1 = g60f590;
    if (!(!rax1 || (rax2 = g60f598, rax2 == 0))) {
        rax3 = g60f590;
        fun_4029e0(rax3);
        rax4 = g60f598;
        fun_402b20(rax4, rsi5, rdx6, rcx7, r8_8, r9_9);
    }
    return;
}

void fun_409b9e() {
    void** rax1;
    void** rax2;
    void** rax3;
    void** rax4;
    void** rsi5;
    void** rdx6;
    void** rcx7;
    int64_t r8_8;
    int64_t r9_9;

    rax1 = g60f590;
    if (!(!rax1 || (rax2 = g60f598, rax2 == 0))) {
        rax3 = g60f598;
        fun_4029e0(rax3);
        rax4 = g60f590;
        fun_402b20(rax4, rsi5, rdx6, rcx7, r8_8, r9_9);
    }
    return;
}

int64_t gtk_fixed_new = 0x402b96;

void** fun_402b90(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    goto gtk_fixed_new;
}

int64_t gtk_fixed_get_type = 0x402a76;

void** fun_402a70(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    goto gtk_fixed_get_type;
}

int64_t gtk_fixed_put = 0x402c56;

void fun_402c50(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    goto gtk_fixed_put;
}

int64_t gtk_radio_button_new_with_label_from_widget = 0x403006;

void** fun_403000(void** rdi, int64_t rsi) {
    goto gtk_radio_button_new_with_label_from_widget;
}

int64_t setuid = 0x402ae6;

int32_t fun_402ae0(int64_t rdi) {
    goto setuid;
}

int64_t gtk_link_button_new_with_label = 0x402bd6;

void** fun_402bd0(int64_t rdi, int64_t rsi) {
    goto gtk_link_button_new_with_label;
}

int64_t gtk_combo_box_new_text = 0x402986;

void** fun_402980(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8) {
    goto gtk_combo_box_new_text;
}

int64_t gtk_combo_box_append_text = 0x403026;

void fun_403020(void** rdi, void** rsi) {
    goto gtk_combo_box_append_text;
}

int64_t socket = 0x402d56;

int32_t fun_402d50(int64_t rdi, void** rsi, int64_t rdx) {
    goto socket;
}

int64_t getpid = 0x402aa6;

int32_t fun_402aa0(void* rdi, int64_t rsi) {
    goto getpid;
}

int32_t fun_405332(void** rdi) {
    fun_408149();
    return 1;
}

int64_t gtk_combo_box_get_active = 0x402f46;

int32_t fun_402f40(void** rdi, void** rsi) {
    goto gtk_combo_box_get_active;
}

int64_t fun_40320b(int32_t edi, void** rsi);

void fun_40c9b0(int32_t edi, int64_t rsi, int64_t rdx);

void fun_40ca20();

void fun_403090() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    fun_402a20(fun_40320b, __return_address(), rsp1, fun_40c9b0, fun_40ca20, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void _fini() {
    return;
}

void fun_403135() {
    int64_t v1;

    goto v1;
}

int64_t g60edb0 = 0;

void fflush();

void fun_403160() {
    int1_t zf1;

    zf1 = g60edb0 == 0;
    if (!(zf1 || 1)) {
        fflush();
    }
    if (1) 
        goto 0x403138;
    if (1) 
        goto 0x403138;
    goto 0;
}

void** fun_40470e() {
    void* rbp1;
    uint64_t rax2;
    uint64_t v3;
    int32_t eax4;
    int32_t v5;
    int64_t rcx6;
    void** rsi7;
    int64_t rdi8;
    struct s8* rax9;
    void** rax10;
    uint64_t rdx11;

    rbp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax2 = g28;
    v3 = rax2;
    eax4 = fun_404628();
    v5 = eax4;
    *reinterpret_cast<int32_t*>(&rcx6) = 0x200;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
    while (rcx6) {
        --rcx6;
        rsi7 = rsi7 + 8;
    }
    if (v5 >= 0) {
        while (1) {
            *reinterpret_cast<int32_t*>(&rdi8) = v5;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            fun_402a30(rdi8, reinterpret_cast<int64_t>(rbp1) - 0x1010, 0x1000, 0);
            rax9 = fun_402c90(reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffeff0, "/drm/", 0x1000, 0);
            if (rax9) {
                g60f450 = 1;
            }
            fun_402af0(reinterpret_cast<int64_t>(rbp1) - 0x1010, 0x1000, 0x1000, 0);
        }
    } else {
        fun_402900("create hotplug socket failed.");
        *reinterpret_cast<int32_t*>(&rax10) = -1;
        *reinterpret_cast<int32_t*>(&rax10 + 4) = 0;
        rdx11 = v3 ^ g28;
        if (rdx11) {
            rax10 = fun_402e20("create hotplug socket failed.", rsi7);
        }
        return rax10;
    }
}

uint16_t g60f568 = 0;

void** fun_404f2d(int64_t rdi, void** rsi) {
    void* rbp3;
    uint64_t rax4;
    int32_t v5;
    int32_t v6;
    int64_t v7;
    struct s9* rax8;
    struct s9* v9;
    void** v10;
    int32_t v11;
    int32_t v12;
    int32_t v13;
    int32_t v14;
    void** rax15;
    uint64_t rcx16;

    rbp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax4 = g28;
    v5 = -1;
    v6 = -1;
    v7 = 0x404f6c;
    rax8 = fun_402ad0(0);
    v9 = rax8;
    if (v9) {
        v10 = *reinterpret_cast<void***>((static_cast<int64_t>(v9->f224) << 7) + reinterpret_cast<int64_t>(v9->f232) + 16);
        while (1) {
            fun_402f00(v9, v10, reinterpret_cast<int64_t>(rbp3) - 0xf0, reinterpret_cast<int64_t>(rbp3) - 0xe8, reinterpret_cast<int64_t>(rbp3) - 0x10c, reinterpret_cast<int64_t>(rbp3) - 0x108, reinterpret_cast<int64_t>(rbp3) - 0x104, reinterpret_cast<int64_t>(rbp3) - 0x100, reinterpret_cast<int64_t>(rbp3) - 0xfc, v7);
            if (v11 != v5 && v12 != v6) {
                v5 = v13;
                v6 = v14;
                g60f568 = 0;
            }
            v7 = 0x405062;
            fun_402c40(1, v10, 1, v10);
        }
    } else {
        *reinterpret_cast<int32_t*>(&rax15) = 0;
        *reinterpret_cast<int32_t*>(&rax15 + 4) = 0;
        rcx16 = rax4 ^ g28;
        if (rcx16) {
            rax15 = fun_402e20(0, rsi, 0, rsi);
        }
        return rax15;
    }
}

int64_t fun_405319() {
    return 1;
}

void** fun_405c69(void** rdi, int32_t esi, int16_t* rdx, int16_t* rcx) {
    int32_t eax5;
    uint64_t rax6;
    void** rsi7;
    uint32_t eax8;
    uint32_t eax9;
    unsigned char v10;
    uint32_t eax11;
    unsigned char v12;
    void** rax13;
    uint32_t eax14;
    unsigned char v15;
    uint32_t eax16;
    unsigned char v17;
    uint32_t edx18;
    uint32_t eax19;
    unsigned char v20;
    uint32_t eax21;
    unsigned char v22;
    uint32_t edx23;
    uint32_t eax24;
    unsigned char v25;
    uint64_t rcx26;

    eax5 = esi;
    rax6 = g28;
    *reinterpret_cast<uint32_t*>(&rsi7) = *reinterpret_cast<unsigned char*>(&eax5);
    *reinterpret_cast<int32_t*>(&rsi7 + 4) = 0;
    eax8 = fun_405be6(rdi, *reinterpret_cast<signed char*>(&rsi7), reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 0xfffffffffffffff0, 8);
    if (eax8 != 8 || ((eax9 = v10, *reinterpret_cast<signed char*>(&eax9) != 2) || (eax11 = v12, *reinterpret_cast<unsigned char*>(&eax11) != *reinterpret_cast<unsigned char*>(&eax5)))) {
        *reinterpret_cast<uint32_t*>(&rax13) = 0xffffffff;
        *reinterpret_cast<int32_t*>(&rax13 + 4) = 0;
    } else {
        if (rdx) {
            eax14 = v15;
            eax16 = v17;
            edx18 = (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax14)) << 8) + *reinterpret_cast<unsigned char*>(&eax16);
            *rdx = *reinterpret_cast<int16_t*>(&edx18);
        }
        if (rcx) {
            eax19 = v20;
            eax21 = v22;
            edx23 = (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax19)) << 8) + *reinterpret_cast<unsigned char*>(&eax21);
            *rcx = *reinterpret_cast<int16_t*>(&edx23);
        }
        eax24 = v25;
        *reinterpret_cast<uint32_t*>(&rax13) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax24) == 0);
        *reinterpret_cast<int32_t*>(&rax13 + 4) = 0;
    }
    rcx26 = rax6 ^ g28;
    if (rcx26) {
        rax13 = fun_402e20(rdi, rsi7, rdi, rsi7);
    }
    return rax13;
}

void** fun_406650(void** rdi, void** rsi, void** rdx) {
    void* rbp4;
    void** v5;
    uint64_t rax6;
    uint64_t v7;
    void** rdi8;
    void** rax9;
    uint32_t v10;
    uint32_t v11;
    int32_t v12;
    void** rcx13;
    uint32_t eax14;
    uint32_t v15;
    uint32_t eax16;
    unsigned char v17;
    uint32_t eax18;
    unsigned char v19;
    uint32_t eax20;
    unsigned char v21;
    int32_t eax22;
    void** rax23;
    void** rax24;
    uint32_t v25;
    int64_t rax26;
    uint32_t eax27;
    void** rax28;
    uint64_t rcx29;
    void** rdx30;
    void** v31;
    struct s8* rax32;
    int64_t rax33;
    int32_t v34;
    uint32_t eax35;
    unsigned char* v36;
    int32_t v37;

    rbp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    v5 = rdi;
    rax6 = g28;
    v7 = rax6;
    *reinterpret_cast<int32_t*>(&rdi8) = 16;
    *reinterpret_cast<int32_t*>(&rdi8 + 4) = 0;
    rax9 = fun_402a00(16, rsi, rdx);
    *reinterpret_cast<void***>(v5 + 0x838) = rax9;
    v10 = 0;
    v11 = 0;
    v12 = 3;
    do {
        *reinterpret_cast<signed char*>(static_cast<int64_t>(reinterpret_cast<int32_t>(v10)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v5 + 0x838))) = 0;
        if (!v12) 
            break;
        *reinterpret_cast<uint32_t*>(&rsi) = v11;
        *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
        *reinterpret_cast<int32_t*>(&rcx13) = 64;
        *reinterpret_cast<int32_t*>(&rcx13 + 4) = 0;
        rdi8 = v5;
        eax14 = fun_4065c6(rdi8, *reinterpret_cast<uint32_t*>(&rsi), reinterpret_cast<int64_t>(rbp4) + 0xffffffffffffffb0, 64);
        v15 = eax14;
        if (reinterpret_cast<int32_t>(v15) >= reinterpret_cast<int32_t>(0)) {
            if (reinterpret_cast<int32_t>(v15) <= reinterpret_cast<int32_t>(2) || ((eax16 = v17, *reinterpret_cast<signed char*>(&eax16) != -29) || (eax18 = v19, eax20 = v21, *reinterpret_cast<unsigned char*>(&eax20) + (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax18)) << 8) != v11))) {
                if (!*reinterpret_cast<int32_t*>(v5 + 0x844) || (eax22 = g60f55c, !!eax22)) {
                    rax23 = stderr;
                    rcx13 = rax23;
                    *reinterpret_cast<uint32_t*>(&rsi) = 1;
                    *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
                    *reinterpret_cast<int32_t*>(&rdi8) = reinterpret_cast<int32_t>("Invalid sequence in caps.\n");
                    *reinterpret_cast<int32_t*>(&rdi8 + 4) = 0;
                    fun_402fa0("Invalid sequence in caps.\n", 1, 26, rcx13);
                }
                --v12;
            } else {
                rsi = reinterpret_cast<void**>(static_cast<int64_t>(reinterpret_cast<int32_t>(v15 + v10 - 2)));
                rdi8 = *reinterpret_cast<void***>(v5 + 0x838);
                rax24 = fun_402fb0(rdi8, rsi);
                *reinterpret_cast<void***>(v5 + 0x838) = rax24;
                v25 = 3;
                while (reinterpret_cast<int32_t>(v25) < reinterpret_cast<int32_t>(v15)) {
                    rcx13 = *reinterpret_cast<void***>(v5 + 0x838);
                    *reinterpret_cast<uint32_t*>(&rax26) = v10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = 0;
                    v10 = static_cast<uint32_t>(rax26 + 1);
                    eax27 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rbp4) + v25 - 80);
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx13) + reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax26)))) = *reinterpret_cast<signed char*>(&eax27);
                    ++v25;
                }
                v11 = v11 + (v15 - 3);
                v12 = 3;
            }
        } else {
            --v12;
        }
    } while (v15 != 3);
    goto addr_4067f1_14;
    *reinterpret_cast<uint32_t*>(&rax28) = 0xffffffff;
    *reinterpret_cast<int32_t*>(&rax28 + 4) = 0;
    addr_4068c4_16:
    rcx29 = v7 ^ g28;
    if (rcx29) {
        rax28 = fun_402e20(rdi8, rsi, rdi8, rsi);
    }
    return rax28;
    addr_4067f1_14:
    rdx30 = *reinterpret_cast<void***>(v5 + 0x838);
    *reinterpret_cast<signed char*>(static_cast<int64_t>(reinterpret_cast<int32_t>(v10)) + reinterpret_cast<unsigned char>(rdx30)) = 0;
    v31 = *reinterpret_cast<void***>(v5 + 0x838);
    while (rax32 = fun_402c90(v31, "bin(", rdx30, rcx13), !!rax32) {
        v31 = reinterpret_cast<void**>(&rax32->f4);
        rcx13 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp4) + 0xffffffffffffffa0);
        *reinterpret_cast<int32_t*>(&rdx30) = 0;
        *reinterpret_cast<int32_t*>(&rdx30 + 4) = 0;
        rax33 = fun_402cc0(v31, rcx13, 0);
        v34 = *reinterpret_cast<int32_t*>(&rax33);
        eax35 = *v36;
        if (*reinterpret_cast<signed char*>(&eax35) == 40) {
            v37 = 0;
            while (v37 < v34) {
                ++v36;
                *v36 = 35;
                ++v37;
            }
            v31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) + reinterpret_cast<uint64_t>(static_cast<int64_t>(v34)));
        }
    }
    rsi = v5 + 48;
    rdi8 = *reinterpret_cast<void***>(v5 + 0x838);
    fun_405d33(rdi8, rsi, 1);
    *reinterpret_cast<uint32_t*>(&rax28) = v10;
    *reinterpret_cast<int32_t*>(&rax28 + 4) = 0;
    goto addr_4068c4_16;
}

void** fflush;

uint16_t g60f4c4 = 0x96;

unsigned char g60f572 = 0;

void fun_40a2ae(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    void** rax7;
    void** rax8;
    void** v9;
    void** rax10;
    void** rax11;
    int64_t rax12;
    void** rax13;
    void** rax14;
    void** v15;
    void** rax16;
    void** rsi17;
    void** rax18;
    void** rax19;
    void** v20;
    void** rax21;
    int32_t eax22;

    rax7 = fun_402dd0(rdi, rsi, rdx, rcx, r8);
    rax8 = g60f638;
    rax10 = fun_402e00(rax8, rax7, rax7, rcx, r8, r9, v9);
    rax11 = fun_402ab0(rax10, rax7);
    rax12 = fun_402cc0(rax11, 0, 10);
    if (*reinterpret_cast<int32_t*>(&rax12) > 0 && *reinterpret_cast<int32_t*>(&rax12) <= 0xff) {
        __asm__("pxor xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
        *reinterpret_cast<void***>(rax11) = fflush;
        rax13 = fun_402b30(rax11 + 4, 4, 10, rcx, r8);
        rax14 = g60f640;
        rax16 = fun_402e00(rax14, rax13, rax13, rcx, r8, r9, v15);
        *reinterpret_cast<void***>(rax14) = *reinterpret_cast<void***>(rax13);
        rsi17 = rax13 + 4;
        fun_402eb0(rax16, rsi17);
        rax18 = fun_402e90(rax16, rsi17, rax13, rcx, r8);
        rax19 = g60f630;
        rax21 = fun_402e00(rax19, rax18, rax18, rcx, r8, r9, v20);
        fun_402e80(rax21, 1);
        eax22 = *reinterpret_cast<int32_t*>(&rax12);
        g60f4c4 = *reinterpret_cast<uint16_t*>(&eax22);
        g60f572 = 1;
    }
    return;
}

void fun_40a95d(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    void** rax7;
    void** rax8;
    void** rax9;
    void** rax10;
    void** rax11;
    void** rax12;
    void** rax13;
    void** rax14;
    void** rax15;
    void** rdx16;
    void** rax17;
    void** rsi18;
    void** rax19;
    void** rdi20;
    void** rax21;
    void** rax22;
    void** rax23;
    void** rax24;
    void** rax25;
    int64_t rax26;
    void** rax27;
    void** rax28;
    void** rax29;
    int32_t eax30;

    rax7 = fun_402e90(rdi, rsi, rdx, rcx, r8);
    rax8 = g60f670;
    rax9 = fun_402e00(rax8, rax7, rax7, rcx, r8, r9, rsi, rax8, rax7, rax7, rcx, r8, r9, rsi);
    rax10 = fun_4028f0(rax9, rax7);
    if (!*reinterpret_cast<int32_t*>(&rax10)) {
        g60f56d = 0;
    } else {
        g60f56d = 1;
    }
    rax11 = fun_402e90(rax9, rax7, rax7, rcx, r8);
    rax12 = g60f6a8;
    rax13 = fun_402e00(rax12, rax11, rax11, rcx, r8, r9, rsi, rax12, rax11, rax11, rcx, r8, r9, rsi);
    rax14 = fun_4028f0(rax13, rax11);
    if (!*reinterpret_cast<int32_t*>(&rax14)) {
        g60f56e = 0;
    } else {
        g60f56e = 1;
    }
    rax15 = fun_402e90(rax13, rax11, rax11, rcx, r8);
    rdx16 = rax15;
    rax17 = g60f688;
    rsi18 = rdx16;
    rax19 = fun_402e00(rax17, rsi18, rdx16, rcx, r8, r9, rsi, rax17, rsi18, rdx16, rcx, r8, r9, rsi);
    rdi20 = rax19;
    rax21 = fun_4028f0(rdi20, rsi18);
    if (!*reinterpret_cast<int32_t*>(&rax21)) {
        g60f56c = 0;
    } else {
        g60f56c = 1;
        rax22 = fun_402dd0(rdi20, rsi18, rdx16, rcx, r8);
        rax23 = g60f668;
        rax24 = fun_402e00(rax23, rax22, rax22, rcx, r8, r9, rsi, rax23, rax22, rax22, rcx, r8, r9, rsi);
        rax25 = fun_402ab0(rax24, rax22);
        *reinterpret_cast<int32_t*>(&rdx16) = 10;
        *reinterpret_cast<int32_t*>(&rdx16 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rsi18) = 0;
        *reinterpret_cast<int32_t*>(&rsi18 + 4) = 0;
        rdi20 = rax25;
        rax26 = fun_402cc0(rdi20, 0, 10);
        g60f4be = *reinterpret_cast<uint16_t*>(&rax26);
    }
    rax27 = fun_402b30(rdi20, rsi18, rdx16, rcx, r8);
    rax28 = g60f640;
    rax29 = fun_402e00(rax28, rax27, rax27, rcx, r8, r9, rsi, rax28, rax27, rax27, rcx, r8, r9, rsi);
    eax30 = fun_402f70(rax29, rax27);
    __asm__("cvttsd2si eax, xmm0");
    g60f4bc = *reinterpret_cast<uint16_t*>(&eax30);
    fun_408d0b(rax29, rax27);
    fun_409a5e(rax29, rax27, rax27, rcx, r8, r9, rsi, rax29, rax27, rax27, rcx, r8, r9, rsi);
    return;
}

void fun_40c4d4(int64_t rdi, int64_t rsi) {
    fun_409b9e();
    return;
}

void fun_40c9b0(int32_t edi, int64_t rsi, int64_t rdx) {
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
            *reinterpret_cast<int64_t*>("`1@" + rbx7 * 8)(rdi8, r14_5, r13_6);
            ++rbx7;
        } while (rbx7 != 1);
    }
    return;
}

void fun_40ca20() {
    return;
}

int64_t g60f010 = 0;

void fun_402a26() {
    goto g60f010;
}

signed char g60f4f0 = 0;

int64_t fun_403140() {
    int1_t zf1;
    int64_t rax2;

    zf1 = g60f4f0 == 0;
    if (zf1) {
        rax2 = fun_4030c0();
        g60f4f0 = 1;
    }
    return rax2;
}

void fun_402ff6() {
    goto 0x402820;
}

void fun_402f86() {
    goto 0x402820;
}

void gtk_false();

void g_log_default_handler();

int64_t fun_40320b(int32_t edi, void** rsi) {
    void* rbp3;
    int32_t eax4;
    int64_t r8_5;
    int64_t r9_6;
    void** rax7;
    int64_t r8_8;
    int64_t r9_9;
    void** rax10;
    int64_t r8_11;
    int64_t r9_12;
    void** rax13;
    int64_t r8_14;
    int64_t r9_15;
    void** rax16;
    void** rax17;
    int64_t r8_18;
    void** rax19;
    void** rax20;
    int64_t r8_21;
    int64_t r9_22;
    void** rax23;
    void** rax24;
    int64_t r8_25;
    void** rax26;
    void** rax27;
    int64_t r8_28;
    int64_t r9_29;
    void** rax30;
    void** rax31;
    int64_t r8_32;
    void** rax33;
    void** rax34;
    int64_t r8_35;
    int64_t r9_36;
    void** rax37;
    void** rax38;
    int64_t r8_39;
    void** rax40;
    void** rax41;
    int64_t r8_42;
    int64_t r9_43;
    void** rax44;
    void** rax45;
    int64_t r8_46;
    int64_t r9_47;
    void** rax48;
    void** rax49;
    void** rax50;
    void** rax51;
    void** rax52;

    rbp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    eax4 = fun_402ae0(0);
    if (!eax4) {
        fun_402e70("Gtk", 16, gtk_false, 0);
        fun_402cd0(reinterpret_cast<int64_t>(rbp3) - 20, reinterpret_cast<int64_t>(rbp3) - 32);
        fun_402e70("Gtk", 16, g_log_default_handler, 0);
        fun_40881c("Gtk", 16, g_log_default_handler, 0);
        fun_409949("Gtk", 16, g_log_default_handler, 0);
        rax7 = fun_403fda("Gtk", 16, g_log_default_handler, 0, r8_5, r9_6, rsi);
        g60f580 = rax7;
        rax10 = fun_40ab0f("Gtk", 16, g_log_default_handler, 0, r8_8, r9_9, rsi);
        g60f588 = rax10;
        rax13 = fun_40be02("Gtk", 16, g_log_default_handler, 0, r8_11, r9_12, rsi);
        g60f590 = rax13;
        rax16 = fun_40c50e("Gtk", 16, g_log_default_handler, 0, r8_14, r9_15, rsi);
        g60f598 = rax16;
        rax17 = fun_403186("/usr/local/sbin/DS.ico", 16, g_log_default_handler, 0);
        rax19 = fun_402c20("/usr/local/sbin/DS.ico", 16, g_log_default_handler, 0, r8_18);
        rax20 = g60f580;
        rax23 = fun_402e00(rax20, rax19, rax19, 0, r8_21, r9_22, rsi);
        fun_402be0(rax23, rax17);
        rax24 = fun_403186("/usr/local/sbin/DS.ico", rax17, rax19, 0);
        rax26 = fun_402c20("/usr/local/sbin/DS.ico", rax17, rax19, 0, r8_25);
        rax27 = g60f588;
        rax30 = fun_402e00(rax27, rax26, rax26, 0, r8_28, r9_29, rsi);
        fun_402be0(rax30, rax24);
        rax31 = fun_403186("/usr/local/sbin/DS.ico", rax24, rax26, 0);
        rax33 = fun_402c20("/usr/local/sbin/DS.ico", rax24, rax26, 0, r8_32);
        rax34 = g60f590;
        rax37 = fun_402e00(rax34, rax33, rax33, 0, r8_35, r9_36, rsi);
        fun_402be0(rax37, rax31);
        rax38 = fun_403186("/usr/local/sbin/DS.ico", rax31, rax33, 0);
        rax40 = fun_402c20("/usr/local/sbin/DS.ico", rax31, rax33, 0, r8_39);
        rax41 = g60f598;
        rax44 = fun_402e00(rax41, rax40, rax40, 0, r8_42, r9_43, rsi);
        fun_402be0(rax44, rax38);
        rax45 = g60f588;
        rax48 = fun_402e00(rax45, 80, rax40, 0, r8_46, r9_47, rsi);
        fun_402de0(rax48, "delete_event", fun_409a5e, 0, 0, 0, rsi);
        rax49 = g60f590;
        rax50 = fun_402e00(rax49, 80, fun_409a5e, 0, 0, 0, rsi);
        fun_402de0(rax50, "delete_event", fun_409b20, 0, 0, 0, rsi);
        rax51 = g60f598;
        rax52 = fun_402e00(rax51, 80, fun_409b20, 0, 0, 0, rsi);
        fun_402de0(rax52, "delete_event", fun_409b9e, 0, 0, 0, rsi);
        fun_409a5e(rax52, "delete_event", fun_409b9e, 0, 0, 0, rsi);
        fun_4036a3(rax52, "delete_event", fun_409b9e, 0, 0, 0, rsi);
        fun_409bdd(rax52, "delete_event", fun_409b9e, 0, 0, 0, rsi);
        fun_40bc6c(rax52, "delete_event", fun_409b9e, 0, 0, 0, rsi);
        fun_4029a0(rax52, "delete_event", fun_409b9e, 0, 0, 0, rsi);
    }
    return 0;
}

void fun_402e26() {
    goto 0x402820;
}

void fun_40346c(void** rdi, void** rsi) {
    fun_402dc0(rdi, rsi);
    return;
}

unsigned char g60f558 = 0;

int64_t fun_403663(int64_t rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    uint32_t eax7;

    fun_402c70(0x7a120, rsi);
    eax7 = g60f558;
    if (*reinterpret_cast<signed char*>(&eax7)) {
        g60f558 = 0;
        fun_4034bb(0x7a120, rsi, rdx, rcx, r8, r9);
    }
    return 1;
}

void fun_402d46() {
    goto 0x402820;
}

void fun_402e06() {
    goto 0x402820;
}

void fun_402db6() {
    goto 0x402820;
}

struct s10 {
    signed char[28] pad28;
    uint32_t f28;
};

int64_t fun_4037a1(int64_t rdi, struct s10* rsi, int64_t rdx) {
    if (rsi->f28 != 0xff52) {
        if (rsi->f28 > 0xff52) {
            if (rsi->f28 == 0xff53) {
            }
        }
    }
    return 1;
}

unsigned char g60f56f = 0;

unsigned char g60f573 = 0;

void** fun_4037f0(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    void** rax7;
    void** rax8;
    void** rax9;
    uint32_t eax10;
    void** rax11;
    void** rdx12;
    void** rax13;
    void** rsi14;
    void** rax15;
    void** rdi16;
    void** rax17;
    void** rax18;
    void** rax19;
    void** rax20;
    void** rax21;
    void** rax22;
    void** rax23;
    void** rax24;
    void** rax25;
    void** rax26;
    void** rsi27;
    void** rax28;
    void** rdi29;
    void** rax30;
    void** rax31;
    void** rax32;
    void** rax33;
    void** rax34;
    void** rax35;
    void** rax36;
    void** rax37;
    uint32_t eax38;
    uint32_t eax39;
    void** rax40;
    void** rax41;
    void** rax42;
    void** rax43;
    void** rax44;
    void** rax45;
    uint32_t eax46;
    uint32_t eax47;
    uint32_t eax48;
    uint32_t eax49;

    rax7 = fun_402e90(rdi, rsi, rdx, rcx, r8);
    rax8 = fun_402e00(rdi, rax7, rax7, rcx, r8, r9, rsi);
    rax9 = fun_4028f0(rax8, rax7);
    if (*reinterpret_cast<int32_t*>(&rax9)) {
        eax10 = g60f56f;
        if (*reinterpret_cast<signed char*>(&eax10)) {
            rax11 = fun_402e90(rax8, rax7, rax7, rcx, r8);
            rdx12 = rax11;
            rax13 = g60f540;
            rsi14 = rdx12;
            rax15 = fun_402e00(rax13, rsi14, rdx12, rcx, r8, r9, rsi);
            rdi16 = rax15;
            rax17 = fun_4028f0(rdi16, rsi14);
            if (*reinterpret_cast<int32_t*>(&rax17) && (rax18 = g60f540, rdi == rax18)) {
                rax19 = fun_402d40(rdi16, rsi14);
                rax20 = g60f508;
                rax21 = fun_402e00(rax20, rax19, rax19, rcx, r8, r9, rsi);
                fun_402db0(rax21, "Floyd");
                rax22 = fun_402d40(rax21, "Floyd");
                rdx12 = rax22;
                rax23 = g60f510;
                rax24 = fun_402e00(rax23, rdx12, rdx12, rcx, r8, r9, rsi);
                *reinterpret_cast<int32_t*>(&rsi14) = reinterpret_cast<int32_t>("A16");
                *reinterpret_cast<int32_t*>(&rsi14 + 4) = 0;
                rdi16 = rax24;
                fun_402db0(rdi16, "A16");
                fun_40506e(rdi16, "A16");
                g60f4ba = 1;
                g60f573 = 1;
            }
            rax25 = fun_402e90(rdi16, rsi14, rdx12, rcx, r8);
            rax26 = g60f548;
            rsi27 = rax25;
            rax28 = fun_402e00(rax26, rsi27, rax25, rcx, r8, r9, rsi);
            rdi29 = rax28;
            rax30 = fun_4028f0(rdi29, rsi27);
            if (*reinterpret_cast<int32_t*>(&rax30) && (rax31 = g60f548, rdi == rax31)) {
                rax32 = fun_402d40(rdi29, rsi27);
                rax33 = g60f508;
                rax34 = fun_402e00(rax33, rax32, rax32, rcx, r8, r9, rsi);
                fun_402db0(rax34, "A5");
                rax35 = fun_402d40(rax34, "A5");
                rax36 = g60f510;
                rax37 = fun_402e00(rax36, rax35, rax35, rcx, r8, r9, rsi);
                *reinterpret_cast<int32_t*>(&rsi27) = reinterpret_cast<int32_t>("A61");
                *reinterpret_cast<int32_t*>(&rsi27 + 4) = 0;
                rdi29 = rax37;
                fun_402db0(rdi29, "A61");
                g60f4ba = 2;
                fun_40507f(rdi29, "A61");
                g60f573 = 1;
            }
            eax38 = g60f4ba;
            eax39 = *reinterpret_cast<unsigned char*>(&eax38);
            if (eax39 == 1) 
                goto addr_4039f5_9; else 
                goto addr_4039eb_10;
        } else {
            rax40 = fun_402c20(rax8, rax7, rax7, rcx, r8);
            rax41 = g60f4f8;
            rax42 = fun_402e00(rax41, rax40, rax40, rcx, r8, r9, rsi);
            rax43 = fun_402a90(rax42, 1, 0, 1, "Dasung monitor not detected!");
            rax44 = fun_402a60(rax42, 1, 0, 1, "Dasung monitor not detected!");
            rax45 = fun_402e00(rax43, rax44, rax44, 1, "Dasung monitor not detected!", r9, rsi);
            fun_402e30(rax45, rax44);
            rax9 = fun_4029b0(rax43, rax44);
        }
    }
    addr_403ab5_12:
    return rax9;
    addr_4039f5_9:
    eax46 = g60f4b9;
    eax47 = *reinterpret_cast<unsigned char*>(&eax46);
    if (eax47 == 5) {
        g60f4b9 = 2;
        g60f4c4 = 0xbe;
        g60f4bc = 0xbe;
    } else {
        if (eax47 == 6) {
            g60f4b9 = 3;
        } else {
            if (eax47 == 4) {
                g60f4b9 = 1;
                g60f4c4 = 0x8c;
                g60f4bc = 0x8c;
            } else {
                goto addr_403aad_19;
            }
        }
    }
    addr_403aad_19:
    rax9 = fun_408d0b(rdi29, rsi27);
    goto addr_403ab5_12;
    addr_4039eb_10:
    if (eax39 == 2) {
        eax48 = g60f4b9;
        eax49 = *reinterpret_cast<unsigned char*>(&eax48);
        if (eax49 == 2) {
            g60f4b9 = 5;
            g60f4c4 = 0xbe;
            g60f4bc = 0xbe;
        } else {
            if (eax49 == 3) {
                g60f4b9 = 6;
            } else {
                if (eax49 == 1) {
                    g60f4b9 = 4;
                    g60f4c4 = 0xa0;
                    g60f4bc = 0xa0;
                }
            }
        }
        goto addr_403aad_19;
    } else {
        goto addr_403aad_19;
    }
}

void fun_402c26() {
    goto 0x402820;
}

void fun_402a96() {
    goto 0x402820;
}

void fun_402a66() {
    goto 0x402820;
}

void fun_402e36() {
    goto 0x402820;
}

void fun_4029b6() {
    goto 0x402820;
}

unsigned char g60f576 = 0;

void** fun_403ab7(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    uint32_t eax7;
    uint32_t eax8;
    uint32_t eax9;
    uint32_t eax10;
    void** rax11;
    void** rax12;
    void** rax13;
    void** rax14;
    void** rax15;
    void** rax16;
    void** rax17;
    void** rax18;
    void** rax19;

    eax7 = g60f56f;
    if (*reinterpret_cast<signed char*>(&eax7)) {
        eax8 = g60f4b9;
        if (*reinterpret_cast<signed char*>(&eax8) == 3 || (eax9 = g60f4b9, *reinterpret_cast<signed char*>(&eax9) == 6)) {
            *reinterpret_cast<int32_t*>(&rdi) = 0x1f4;
            *reinterpret_cast<int32_t*>(&rdi + 4) = 0;
            fun_402c70(0x1f4, rsi);
        }
        eax10 = g60f4ba;
        *reinterpret_cast<uint32_t*>(&rax11) = *reinterpret_cast<unsigned char*>(&eax10);
        *reinterpret_cast<int32_t*>(&rax11 + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rax11) != 1) 
            goto addr_403b9e_5;
    } else {
        rax12 = fun_402c20(rdi, rsi, rdx, rcx, r8, rdi, rsi, rdx, rcx, r8);
        rax13 = fun_402e00(rsi, rax12, rax12, rcx, r8, r9, rsi, rsi, rax12, rax12, rcx, r8, r9, rsi);
        rax14 = fun_402a90(rax13, 1, 0, 1, "Dasung monitor not detected!");
        rax15 = fun_402c20(rax13, 1, 0, 1, "Dasung monitor not detected!", rax13, 1, 0, 1, "Dasung monitor not detected!");
        rax16 = fun_402e00(rax14, rax15, rax15, 1, "Dasung monitor not detected!", r9, rsi, rax14, rax15, rax15, 1, "Dasung monitor not detected!", r9, rsi);
        fun_402ca0(rax16, 1);
        rax17 = fun_402a60(rax16, 1, rax15, 1, "Dasung monitor not detected!");
        rax18 = fun_402e00(rax14, rax17, rax17, 1, "Dasung monitor not detected!", r9, rsi, rax14, rax17, rax17, 1, "Dasung monitor not detected!", r9, rsi);
        fun_402e30(rax18, rax17);
        rax11 = fun_4029b0(rax14, rax17);
        goto addr_403bf1_7;
    }
    g60f4b9 = 2;
    addr_403bb6_9:
    g60f4b8 = 1;
    fun_403478(rdi, rsi);
    rax19 = g60f500;
    fun_402b40(rax19, 0);
    g60f576 = 1;
    fun_408d0b(rax19, 0);
    rax11 = fun_402c40(1, 0);
    addr_403bf1_7:
    return rax11;
    addr_403b9e_5:
    if (*reinterpret_cast<uint32_t*>(&rax11) == 2) {
        g60f4b9 = 5;
        goto addr_403bb6_9;
    } else {
        goto addr_403bf1_7;
    }
}

void** fun_405090(int64_t rdi) {
    void* rbp2;
    uint64_t rax3;
    void** rsi4;
    void** rdi5;
    void** rdx6;
    void** eax7;
    void** v8;
    int32_t* rax9;
    int64_t rax10;
    int32_t* rax11;
    void** rax12;
    uint64_t rdx13;

    rbp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax3 = g28;
    *reinterpret_cast<int32_t*>(&rsi4) = 0x800;
    *reinterpret_cast<int32_t*>(&rsi4 + 4) = 0;
    rdi5 = reinterpret_cast<void**>("/dev/input/mice");
    *reinterpret_cast<int32_t*>(&rdi5 + 4) = 0;
    eax7 = fun_403060("/dev/input/mice", 0x800, rdx6);
    v8 = eax7;
    if (reinterpret_cast<signed char>(v8) >= reinterpret_cast<signed char>(0)) {
        while (1) {
            rax9 = fun_402da0(rdi5, rsi4, 4);
            *rax9 = 0;
            rsi4 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp2) + 0xfffffffffffffff0);
            rdi5 = v8;
            *reinterpret_cast<int32_t*>(&rdi5 + 4) = 0;
            rax10 = fun_4029d0(rdi5, rsi4, 4);
            if (rax10 > 0 || (rax11 = fun_402da0(rdi5, rsi4, 4), *rax11 == 11)) {
                g60f568 = 0;
            }
        }
    } else {
        fun_402fe0("Could not open /dev/input/mice", 0x800);
        *reinterpret_cast<int32_t*>(&rax12) = 0;
        *reinterpret_cast<int32_t*>(&rax12 + 4) = 0;
        rdx13 = rax3 ^ g28;
        if (rdx13) {
            rax12 = fun_402e20("Could not open /dev/input/mice", 0x800, "Could not open /dev/input/mice", 0x800);
        }
        return rax12;
    }
}

void fun_402ca6() {
    goto 0x402820;
}

void** fun_403bf3(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    uint32_t eax7;
    uint32_t eax8;
    uint32_t eax9;
    uint32_t eax10;
    void** rax11;
    void** rax12;
    void** rax13;
    void** rax14;
    void** rax15;
    void** rax16;
    void** rax17;
    void** rax18;
    void** rax19;

    eax7 = g60f56f;
    if (*reinterpret_cast<signed char*>(&eax7)) {
        eax8 = g60f4b9;
        if (*reinterpret_cast<signed char*>(&eax8) == 3 || (eax9 = g60f4b9, *reinterpret_cast<signed char*>(&eax9) == 6)) {
            *reinterpret_cast<int32_t*>(&rdi) = 0x1f4;
            *reinterpret_cast<int32_t*>(&rdi + 4) = 0;
            fun_402c70(0x1f4, rsi);
        }
        eax10 = g60f4ba;
        *reinterpret_cast<uint32_t*>(&rax11) = *reinterpret_cast<unsigned char*>(&eax10);
        *reinterpret_cast<int32_t*>(&rax11 + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rax11) != 1) 
            goto addr_403cda_5;
    } else {
        rax12 = fun_402c20(rdi, rsi, rdx, rcx, r8, rdi, rsi, rdx, rcx, r8);
        rax13 = fun_402e00(rsi, rax12, rax12, rcx, r8, r9, rsi, rsi, rax12, rax12, rcx, r8, r9, rsi);
        rax14 = fun_402a90(rax13, 1, 0, 1, "Dasung monitor not detected!");
        rax15 = fun_402c20(rax13, 1, 0, 1, "Dasung monitor not detected!", rax13, 1, 0, 1, "Dasung monitor not detected!");
        rax16 = fun_402e00(rax14, rax15, rax15, 1, "Dasung monitor not detected!", r9, rsi, rax14, rax15, rax15, 1, "Dasung monitor not detected!", r9, rsi);
        fun_402ca0(rax16, 1);
        rax17 = fun_402a60(rax16, 1, rax15, 1, "Dasung monitor not detected!");
        rax18 = fun_402e00(rax14, rax17, rax17, 1, "Dasung monitor not detected!", r9, rsi, rax14, rax17, rax17, 1, "Dasung monitor not detected!", r9, rsi);
        fun_402e30(rax18, rax17);
        rax11 = fun_4029b0(rax14, rax17);
        goto addr_403d2d_7;
    }
    g60f4b9 = 1;
    addr_403cf2_9:
    g60f4b8 = 1;
    fun_403478(rdi, rsi);
    rax19 = g60f508;
    fun_402b40(rax19, 0);
    g60f576 = 1;
    fun_408d0b(rax19, 0);
    rax11 = fun_402c40(1, 0);
    addr_403d2d_7:
    return rax11;
    addr_403cda_5:
    if (*reinterpret_cast<uint32_t*>(&rax11) == 2) {
        g60f4b9 = 4;
        goto addr_403cf2_9;
    } else {
        goto addr_403d2d_7;
    }
}

void fun_402c76() {
    goto 0x402820;
}

void** fun_403d2f(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    uint32_t eax7;
    uint32_t eax8;
    void** rax9;
    void** rax10;
    void** rax11;
    void** rax12;
    void** rax13;
    void** rax14;
    void** rax15;
    void** rax16;
    void** rax17;

    eax7 = g60f56f;
    if (*reinterpret_cast<signed char*>(&eax7)) {
        eax8 = g60f4ba;
        *reinterpret_cast<uint32_t*>(&rax9) = *reinterpret_cast<unsigned char*>(&eax8);
        *reinterpret_cast<int32_t*>(&rax9 + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rax9) == 1) {
            g60f4b9 = 3;
        } else {
            if (*reinterpret_cast<uint32_t*>(&rax9) == 2) {
                g60f4b9 = 6;
            } else {
                goto addr_403e46_7;
            }
        }
    } else {
        rax10 = fun_402c20(rdi, rsi, rdx, rcx, r8, rdi, rsi, rdx, rcx, r8);
        rax11 = fun_402e00(rsi, rax10, rax10, rcx, r8, r9, rsi, rsi, rax10, rax10, rcx, r8, r9, rsi);
        rax12 = fun_402a90(rax11, 1, 0, 1, "Dasung monitor not detected!");
        rax13 = fun_402c20(rax11, 1, 0, 1, "Dasung monitor not detected!", rax11, 1, 0, 1, "Dasung monitor not detected!");
        rax14 = fun_402e00(rax12, rax13, rax13, 1, "Dasung monitor not detected!", r9, rsi, rax12, rax13, rax13, 1, "Dasung monitor not detected!", r9, rsi);
        fun_402ca0(rax14, 1);
        rax15 = fun_402a60(rax14, 1, rax13, 1, "Dasung monitor not detected!");
        rax16 = fun_402e00(rax12, rax15, rax15, 1, "Dasung monitor not detected!", r9, rsi, rax12, rax15, rax15, 1, "Dasung monitor not detected!", r9, rsi);
        fun_402e30(rax16, rax15);
        rax9 = fun_4029b0(rax12, rax15);
        goto addr_403e46_7;
    }
    g60f4b8 = 1;
    fun_403478(rdi, rsi);
    rax17 = g60f510;
    fun_402b40(rax17, 0);
    g60f576 = 1;
    fun_408d0b(rax17, 0);
    rax9 = fun_402c40(1, 0);
    addr_403e46_7:
    return rax9;
}

void fun_403e48(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    fun_409a9d(rdi, rsi, rdx, rcx, r8, r9, rsi, rdi);
    return;
}

void fun_402dc6() {
    goto 0x402820;
}

void fun_402fe6() {
    goto 0x402820;
}

void fun_4028b6() {
    goto 0x402820;
}

void fun_402906() {
    goto 0x402820;
}

void fun_402af6() {
    goto 0x402820;
}

void fun_402b06() {
    goto 0x402820;
}

void fun_402c86() {
    goto 0x402820;
}

void fun_4028c6() {
    goto 0x402820;
}

void fun_403066() {
    goto 0x402820;
}

unsigned char g60f570 = 0;

void fun_404c14(int64_t rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    void* rbp7;
    uint32_t v8;
    void** eax9;
    void** v10;
    void** rdi11;
    int32_t eax12;
    int32_t* rax13;
    int32_t edi14;
    void** rdx15;
    void** rdi16;
    int32_t eax17;
    int32_t* rax18;
    int32_t edi19;
    void** rdx20;
    void** rdi21;
    int32_t eax22;
    int32_t* rax23;
    int32_t edi24;
    void** rdx25;
    void** rdi26;
    uint32_t eax27;
    int32_t* rax28;
    int32_t esi29;
    void** rdx30;
    void** rdi31;
    int32_t eax32;
    int32_t* rax33;
    int32_t edi34;
    void** rdx35;
    void** rdi36;
    uint32_t eax37;
    int32_t* rax38;
    int32_t esi39;
    void** rdi40;
    int64_t rax41;
    int32_t v42;
    int32_t v43;
    int32_t v44;
    uint32_t eax45;
    uint32_t eax46;
    uint32_t eax47;
    uint32_t eax48;
    uint32_t eax49;
    uint32_t v50;
    uint32_t eax51;
    uint32_t eax52;
    uint32_t eax53;
    uint32_t eax54;
    uint32_t eax55;

    rbp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    v8 = 0xffffffff;
    eax9 = fun_404afb(0, rsi, rdx, rcx, r8);
    v10 = eax9;
    rdi11 = v10;
    *reinterpret_cast<int32_t*>(&rdi11 + 4) = 0;
    eax12 = fun_402cf0(rdi11, 0x60f5c0);
    if (eax12 == -1) {
        rax13 = fun_402da0(rdi11, 0x60f5c0, rdx);
        edi14 = *rax13;
        fun_4047d3(edi14, "tcgetattr", rdx, rcx, r8, r9);
    }
    rdx15 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp7) + 0xffffffffffffffa0);
    rdi16 = v10;
    *reinterpret_cast<int32_t*>(&rdi16 + 4) = 0;
    eax17 = fun_402cf0(rdi16, rdx15);
    if (eax17 == -1) {
        rax18 = fun_402da0(rdi16, rdx15, rdx15);
        edi19 = *rax18;
        fun_4047d3(edi19, "tcgetattr", rdx15, rcx, r8, r9);
    }
    rdx20 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp7) + 0xffffffffffffffa0);
    rdi21 = v10;
    *reinterpret_cast<int32_t*>(&rdi21 + 4) = 0;
    eax22 = fun_402830(rdi21, 2, rdx20);
    if (eax22 == -1) {
        rax23 = fun_402da0(rdi21, 2, rdx20);
        edi24 = *rax23;
        fun_4047d3(edi24, "tcsetattr", rdx20, rcx, r8, r9);
    }
    if (0) {
        *reinterpret_cast<int32_t*>(&rdx25) = 0;
        *reinterpret_cast<int32_t*>(&rdx25 + 4) = 0;
    } else {
        *reinterpret_cast<int32_t*>(&rdx25) = 2;
        *reinterpret_cast<int32_t*>(&rdx25 + 4) = 0;
    }
    rdi26 = v10;
    *reinterpret_cast<int32_t*>(&rdi26 + 4) = 0;
    eax27 = fun_4028c0(rdi26, 0x4b45, rdx25, rdi26, 0x4b45, rdx25);
    if (eax27) {
        rax28 = fun_402da0(rdi26, 0x4b45, rdx25);
        esi29 = *rax28;
        fun_4048f7(1, esi29, "ioctl KDSKBMODE", rcx, r8, r9);
    }
    rdx30 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp7) + 0xffffffffffffffa0);
    rdi31 = v10;
    *reinterpret_cast<int32_t*>(&rdi31 + 4) = 0;
    eax32 = fun_402830(rdi31, 2, rdx30);
    if (eax32 == -1) {
        rax33 = fun_402da0(rdi31, 2, rdx30);
        edi34 = *rax33;
        fun_4047d3(edi34, "tcsetattr", rdx30, rcx, r8, r9);
    }
    if (0) {
        *reinterpret_cast<int32_t*>(&rdx35) = 0;
        *reinterpret_cast<int32_t*>(&rdx35 + 4) = 0;
    } else {
        *reinterpret_cast<int32_t*>(&rdx35) = 2;
        *reinterpret_cast<int32_t*>(&rdx35 + 4) = 0;
    }
    rdi36 = v10;
    *reinterpret_cast<int32_t*>(&rdi36 + 4) = 0;
    eax37 = fun_4028c0(rdi36, 0x4b45, rdx35, rdi36, 0x4b45, rdx35);
    if (eax37) {
        rax38 = fun_402da0(rdi36, 0x4b45, rdx35);
        esi39 = *rax38;
        fun_4048f7(1, esi39, "ioctl KDSKBMODE", rcx, r8, r9);
    }
    while (1) {
        rdi40 = v10;
        *reinterpret_cast<int32_t*>(&rdi40 + 4) = 0;
        rax41 = fun_4029d0(rdi40, reinterpret_cast<int64_t>(rbp7) + 0xffffffffffffffe0, 18);
        v42 = *reinterpret_cast<int32_t*>(&rax41);
        v43 = 0;
        while (v43 < v42) {
            v44 = v43;
            eax45 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rbp7) + v43 - 32);
            if (*reinterpret_cast<signed char*>(&eax45) >= 0) {
            }
            if (v43 + 2 >= v42 || ((eax46 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rbp7) + v43 - 32), !!(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax46)) & 0x7f)) || ((eax47 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rbp7) + (v43 + 1) - 32), *reinterpret_cast<signed char*>(&eax47) >= 0) || (eax48 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rbp7) + (v43 + 2) - 32), *reinterpret_cast<signed char*>(&eax48) >= 0)))) {
                eax49 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rbp7) + v43 - 32);
                v50 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax49)) & 0x7f;
                ++v43;
            } else {
                eax51 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rbp7) + (v43 + 1) - 32);
                eax52 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rbp7) + (v43 + 2) - 32);
                v50 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax52)) & 0x7f | (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax51)) & 0x7f) << 7;
                v43 = v43 + 3;
            }
            eax53 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rbp7) + v44 - 32);
            if (*reinterpret_cast<signed char*>(&eax53) >= 0) {
                g60f568 = 0;
                eax54 = g60f56d;
                if (*reinterpret_cast<signed char*>(&eax54) && (v8 == 56 && v50 == 46)) {
                    g60f570 = 1;
                }
                eax55 = g60f56e;
                if (*reinterpret_cast<signed char*>(&eax55) && (v8 == 56 && v50 == 35)) {
                    g60f570 = 2;
                }
                v8 = v50;
            }
        }
    }
}

void fun_402fa6() {
    goto 0x402820;
}

void fun_402956() {
    goto 0x402820;
}

void fun_402da6() {
    goto 0x402820;
}

void fun_402cf6() {
    goto 0x402820;
}

void fun_402836() {
    goto 0x402820;
}

void fun_4029d6() {
    goto 0x402820;
}

void fun_405132(int32_t edi) {
    g60f55c = edi;
    return;
}

void fun_402b56() {
    goto 0x402820;
}

void fun_405324() {
    return;
}

void fun_4029f6() {
    goto 0x402820;
}

void fun_402b76() {
    goto 0x402820;
}

void fun_402a06() {
    goto 0x402820;
}

void fun_402cc6() {
    goto 0x402820;
}

void fun_402946() {
    goto 0x402820;
}

void** fun_406e5d(void** rdi) {
    void** rax2;

    rax2 = fun_4068da(rdi, 12);
    return rax2;
}

void fun_402886() {
    goto 0x402820;
}

void fun_402b86() {
    goto 0x402820;
}

void fun_403076() {
    goto 0x402820;
}

void fun_402f56() {
    goto 0x402820;
}

void fun_402876() {
    goto 0x402820;
}

void fun_402856() {
    goto 0x402820;
}

void fun_402c66() {
    goto 0x402820;
}

void fun_402926() {
    goto 0x402820;
}

void fun_402ac6() {
    goto 0x402820;
}

void fun_402ec6() {
    goto 0x402820;
}

void fun_402cb6() {
    goto 0x402820;
}

unsigned char g60f4c2 = 1;

unsigned char g60f571 = 0;

void fun_4091d1(int64_t rdi, void** rsi) {
    uint32_t eax3;
    uint32_t eax4;
    uint32_t edx5;
    uint32_t eax6;
    uint32_t eax7;
    uint32_t eax8;
    uint32_t eax9;

    while (1) {
        eax3 = g60f56f;
        if (*reinterpret_cast<signed char*>(&eax3)) {
            eax4 = g60f4c2;
            if (*reinterpret_cast<signed char*>(&eax4)) {
                fun_402c40(1, rsi, 1, rsi);
                edx5 = g60f568;
                eax6 = g60f4c0;
                if (*reinterpret_cast<uint16_t*>(&edx5) < *reinterpret_cast<uint16_t*>(&eax6)) {
                    eax7 = g60f568;
                    if (!*reinterpret_cast<int16_t*>(&eax7)) {
                        g60f571 = 0;
                    }
                    eax8 = g60f568;
                    eax9 = eax8 + 1;
                    g60f568 = *reinterpret_cast<uint16_t*>(&eax9);
                } else {
                    g60f571 = 1;
                }
            } else {
                fun_402c40(1, rsi, 1, rsi);
                g60f568 = 0;
            }
        } else {
            fun_402c40(1, rsi, 1, rsi);
        }
    }
}

void fun_402c46() {
    goto 0x402820;
}

unsigned char g60f577 = 0;

uint16_t g60f56a = 0;

void fun_409263(int64_t rdi, void** rsi) {
    uint32_t eax3;
    uint32_t eax4;
    uint32_t eax5;
    uint32_t eax6;
    uint32_t eax7;
    uint32_t edx8;
    uint32_t eax9;

    while (1) {
        eax3 = g60f56f;
        if (!*reinterpret_cast<signed char*>(&eax3) || ((eax4 = g60f56c, *reinterpret_cast<signed char*>(&eax4) == 0) || (eax5 = g60f577, *reinterpret_cast<signed char*>(&eax5) == 1))) {
            fun_402c40(1, rsi, 1, rsi);
        } else {
            fun_402c40(1, rsi, 1, rsi);
            eax6 = g60f56a;
            eax7 = eax6 + 1;
            g60f56a = *reinterpret_cast<uint16_t*>(&eax7);
            edx8 = g60f4be;
            eax9 = g60f56a;
            if (*reinterpret_cast<uint16_t*>(&edx8) > *reinterpret_cast<uint16_t*>(&eax9)) 
                continue;
            g60f570 = 1;
            g60f56a = 0;
        }
    }
}

unsigned char g60f575 = 0;

unsigned char g60f574 = 0;

void** fun_409407(int64_t rdi, void** rsi) {
    void* rbp3;
    uint64_t rax4;
    unsigned char v5;
    void** rdi6;
    int32_t eax7;
    uint32_t eax8;
    uint32_t eax9;
    void** rax10;
    void** rax11;
    void** rdx12;
    void** rcx13;
    void** rax14;
    uint32_t eax15;
    uint32_t eax16;
    uint32_t eax17;
    void** rax18;
    uint32_t eax19;
    void** rax20;
    uint32_t eax21;
    uint32_t eax22;
    void** rax23;
    uint32_t eax24;
    uint32_t eax25;
    void** rax26;
    void** rax27;
    uint32_t eax28;
    uint32_t eax29;
    uint16_t ax30;
    uint32_t eax31;
    uint32_t eax32;
    void** rax33;
    void** rax34;
    void** rax35;
    void** rax36;
    uint32_t eax37;
    uint32_t eax38;
    uint32_t eax39;
    uint32_t eax40;
    void** rax41;
    void** rax42;
    void** rax43;
    signed char al44;
    uint32_t eax45;
    uint32_t eax46;
    void** rdi47;
    void** rax48;
    void** rax49;
    uint32_t eax50;
    unsigned char v51;
    uint32_t eax52;
    unsigned char v53;
    int32_t eax54;
    uint32_t eax55;
    uint32_t eax56;
    uint32_t eax57;
    uint32_t eax58;
    uint32_t eax59;
    uint32_t eax60;
    uint32_t eax61;
    void** rax62;
    uint32_t eax63;
    uint32_t eax64;
    signed char al65;
    uint32_t eax66;
    uint32_t eax67;
    void** rax68;
    void** rsi69;
    uint32_t eax70;
    void** rax71;
    void** rsi72;
    void** rax73;
    void** rax74;
    uint64_t rcx75;

    rbp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax4 = g28;
    v5 = 0;
    *reinterpret_cast<int32_t*>(&rdi6) = 0;
    *reinterpret_cast<int32_t*>(&rdi6 + 4) = 0;
    eax7 = fun_405332(0);
    if (eax7) {
        while (1) {
            eax8 = g60f575;
            if (*reinterpret_cast<signed char*>(&eax8) != 1) {
                eax9 = g60f574;
                if (*reinterpret_cast<unsigned char*>(&eax9) > 4) {
                    rax10 = g60f578;
                    if (rax10) {
                        rax11 = g60f578;
                        fun_406e7c(rax11, rsi, rdx12, rcx13, 8);
                        rax14 = g60f578;
                        fun_402b70(rax14, rsi, rdx12, rcx13, 8);
                        g60f578 = reinterpret_cast<void**>(0);
                    }
                    g60f56f = 0;
                    g60f574 = 0;
                    *reinterpret_cast<int32_t*>(&rdi6) = 8;
                    *reinterpret_cast<int32_t*>(&rdi6 + 4) = 0;
                    fun_402c40(8, rsi, 8, rsi);
                }
                eax15 = g60f56f;
                if (!*reinterpret_cast<signed char*>(&eax15)) 
                    goto addr_4094da_8;
            } else {
                *reinterpret_cast<int32_t*>(&rdi6) = 1;
                *reinterpret_cast<int32_t*>(&rdi6 + 4) = 0;
                fun_402c40(1, rsi, 1, rsi);
                goto addr_40993d_10;
            }
            eax16 = g60f571;
            if (!*reinterpret_cast<signed char*>(&eax16)) {
                eax17 = g60f577;
                if (*reinterpret_cast<signed char*>(&eax17) == 1) {
                    g60f577 = 0;
                    rax18 = g60f578;
                    *reinterpret_cast<uint32_t*>(&rsi) = 0;
                    *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
                    fun_4074ae(rax18, 0, rdx12, rcx13, 8);
                }
            } else {
                eax19 = g60f577;
                if (!*reinterpret_cast<signed char*>(&eax19)) {
                    g60f577 = 1;
                    rax20 = g60f578;
                    *reinterpret_cast<uint32_t*>(&rsi) = 1;
                    *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
                    fun_4074ae(rax20, 1, rdx12, rcx13, 8);
                }
            }
            eax21 = g60f577;
            if (*reinterpret_cast<signed char*>(&eax21) != 1) {
                v5 = 0;
            } else {
                eax22 = v5 + 1;
                v5 = *reinterpret_cast<unsigned char*>(&eax22);
                if (reinterpret_cast<signed char>(v5) > reinterpret_cast<signed char>(49)) {
                    v5 = 0;
                    rax23 = g60f578;
                    *reinterpret_cast<uint32_t*>(&rsi) = 1;
                    *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
                    fun_4074ae(rax23, 1, rdx12, rcx13, 8);
                }
            }
            eax24 = g60f570;
            eax25 = *reinterpret_cast<unsigned char*>(&eax24);
            if (eax25 == 1) {
                rax26 = g60f578;
                *reinterpret_cast<uint32_t*>(&rsi) = 1;
                *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
                fun_407c5d(rax26, 1, rax26, 1);
                g60f570 = 0;
            } else {
                if (eax25 == 2) {
                    rax27 = g60f578;
                    *reinterpret_cast<uint32_t*>(&rsi) = 0;
                    *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
                    fun_407c5d(rax27, 0, rax27, 0);
                    g60f570 = 0;
                }
            }
            eax28 = g60f572;
            if (*reinterpret_cast<signed char*>(&eax28)) {
                g60f572 = 0;
                fun_402c70(0x30d40, rsi, 0x30d40, rsi);
                eax29 = g60f4c4;
                ax30 = fun_4092dc(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax29)), rsi, rdx12, rcx13, 8);
                eax31 = g60f4b9;
                eax32 = *reinterpret_cast<unsigned char*>(&eax31);
                if (eax32 == 2) {
                    *reinterpret_cast<uint32_t*>(&rdx12) = ax30;
                    *reinterpret_cast<int32_t*>(&rdx12 + 4) = 0;
                    rax33 = g60f578;
                    *reinterpret_cast<uint32_t*>(&rsi) = *reinterpret_cast<uint32_t*>(&rdx12);
                    *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
                    fun_4079a5(rax33, *reinterpret_cast<uint32_t*>(&rsi));
                } else {
                    if (reinterpret_cast<int32_t>(eax32) > reinterpret_cast<int32_t>(2)) {
                        if (eax32 == 4) {
                            *reinterpret_cast<uint32_t*>(&rdx12) = ax30;
                            *reinterpret_cast<int32_t*>(&rdx12 + 4) = 0;
                            rax34 = g60f578;
                            *reinterpret_cast<uint32_t*>(&rsi) = *reinterpret_cast<uint32_t*>(&rdx12);
                            *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
                            fun_407b75(rax34, *reinterpret_cast<uint32_t*>(&rsi));
                        } else {
                            if (eax32 == 5) {
                                *reinterpret_cast<uint32_t*>(&rdx12) = ax30;
                                *reinterpret_cast<int32_t*>(&rdx12 + 4) = 0;
                                rax35 = g60f578;
                                *reinterpret_cast<uint32_t*>(&rsi) = *reinterpret_cast<uint32_t*>(&rdx12);
                                *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
                                fun_407a8d(rax35, *reinterpret_cast<uint32_t*>(&rsi));
                            }
                        }
                    } else {
                        if (eax32 == 1) {
                            *reinterpret_cast<uint32_t*>(&rdx12) = ax30;
                            *reinterpret_cast<int32_t*>(&rdx12 + 4) = 0;
                            rax36 = g60f578;
                            *reinterpret_cast<uint32_t*>(&rsi) = *reinterpret_cast<uint32_t*>(&rdx12);
                            *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
                            fun_4078bd(rax36, *reinterpret_cast<uint32_t*>(&rsi));
                        }
                    }
                }
            }
            eax37 = g60f576;
            if (*reinterpret_cast<signed char*>(&eax37)) 
                goto addr_409731_38;
            addr_4097d4_39:
            eax38 = g60f573;
            if (*reinterpret_cast<signed char*>(&eax38)) {
                g60f573 = 0;
                fun_402c70(0x493e0, rsi, 0x493e0, rsi);
                g60f572 = 1;
                eax39 = g60f4ba;
                eax40 = *reinterpret_cast<unsigned char*>(&eax39);
                if (eax40 == 1) {
                    rax41 = g60f578;
                    *reinterpret_cast<uint32_t*>(&rsi) = 1;
                    *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
                    fun_4075b3(rax41, 1, rdx12, rcx13, 8);
                } else {
                    if (eax40 == 2) {
                        rax42 = g60f578;
                        *reinterpret_cast<uint32_t*>(&rsi) = 2;
                        *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
                        fun_4075b3(rax42, 2, rdx12, rcx13, 8);
                    }
                }
                fun_402c70(0x493e0, rsi, 0x493e0, rsi);
            }
            rax43 = g60f578;
            al44 = fun_407d64(rax43, 1, rdx12, rcx13, 8);
            if (!al44) {
                eax45 = g60f574;
                eax46 = eax45 + 1;
                g60f574 = *reinterpret_cast<unsigned char*>(&eax46);
            }
            fun_402c70(0x186a0, 1, 0x186a0, 1);
            rdi47 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffffe0);
            fun_402870(rdi47, 0, 8, rdi47, 0, 8);
            rax48 = g60f578;
            rcx13 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffffe0);
            *reinterpret_cast<uint32_t*>(&rdx12) = 0;
            *reinterpret_cast<int32_t*>(&rdx12 + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rsi) = 0;
            *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
            rdi6 = rax48;
            rax49 = fun_4073e6(rdi6, 0, 0, rcx13, 8);
            if (*reinterpret_cast<signed char*>(&rax49)) {
                eax50 = v51;
                eax52 = static_cast<uint32_t>(v53) & 15;
                eax54 = *reinterpret_cast<signed char*>(&eax50);
                if (eax54 != 1) {
                    if (eax54 == 7) {
                        if (*reinterpret_cast<signed char*>(&eax52) > reinterpret_cast<signed char>(0) && *reinterpret_cast<signed char*>(&eax52) <= reinterpret_cast<signed char>(6)) {
                            eax55 = g60f4ba;
                            if (*reinterpret_cast<signed char*>(&eax55) != 2) {
                                eax56 = *reinterpret_cast<unsigned char*>(&eax52);
                                g60f4b9 = *reinterpret_cast<unsigned char*>(&eax56);
                            } else {
                                eax57 = *reinterpret_cast<unsigned char*>(&eax52) + 3;
                                g60f4b9 = *reinterpret_cast<unsigned char*>(&eax57);
                            }
                            g60f558 = 1;
                        }
                        g60f568 = 0;
                        g60f571 = 0;
                    }
                }
                *reinterpret_cast<int32_t*>(&rdi6) = 0x30d40;
                *reinterpret_cast<int32_t*>(&rdi6 + 4) = 0;
                fun_402c70(0x30d40, 0, 0x30d40, 0);
            } else {
                eax58 = g60f574;
                eax59 = eax58 + 1;
                g60f574 = *reinterpret_cast<unsigned char*>(&eax59);
            }
            addr_40993d_10:
            continue;
            addr_409731_38:
            g60f576 = 0;
            eax60 = g60f4b8;
            *reinterpret_cast<uint32_t*>(&rdx12) = *reinterpret_cast<unsigned char*>(&eax60);
            *reinterpret_cast<int32_t*>(&rdx12 + 4) = 0;
            eax61 = g60f4b9;
            *reinterpret_cast<uint32_t*>(&rcx13) = *reinterpret_cast<unsigned char*>(&eax61);
            *reinterpret_cast<int32_t*>(&rcx13 + 4) = 0;
            rax62 = g60f578;
            *reinterpret_cast<uint32_t*>(&rsi) = *reinterpret_cast<uint32_t*>(&rcx13);
            *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
            fun_4076ae(rax62, *reinterpret_cast<uint32_t*>(&rsi), *reinterpret_cast<uint32_t*>(&rdx12));
            eax63 = g60f4b9;
            eax64 = *reinterpret_cast<unsigned char*>(&eax63);
            if (eax64 == 2) 
                goto addr_4097ba_59;
            if (reinterpret_cast<int32_t>(eax64) > reinterpret_cast<int32_t>(2)) {
                if (eax64 == 4) {
                    g60f4c4 = 0xa0;
                    g60f4bc = 0xa0;
                    g60f572 = 1;
                    goto addr_4097d4_39;
                } else {
                    if (eax64 == 5) {
                        addr_4097ba_59:
                        g60f4c4 = 0xbe;
                        g60f4bc = 0xbe;
                        g60f572 = 1;
                        goto addr_4097d4_39;
                    } else {
                        goto addr_4097d4_39;
                    }
                }
            } else {
                if (eax64 == 1) {
                    g60f4c4 = 0x8c;
                    g60f4bc = 0x8c;
                    g60f572 = 1;
                    goto addr_4097d4_39;
                } else {
                    goto addr_4097d4_39;
                }
            }
            addr_4094da_8:
            al65 = fun_40913c(rdi6, rsi, rdx12, rcx13, 8);
            if (al65 != 1) {
                *reinterpret_cast<int32_t*>(&rdi6) = 3;
                *reinterpret_cast<int32_t*>(&rdi6 + 4) = 0;
                fun_402c40(3, rsi, 3, rsi);
                goto addr_40993d_10;
            } else {
                fun_402c40(5, rsi, 5, rsi);
                eax66 = g60f4b8;
                eax67 = g60f4b9;
                *reinterpret_cast<uint32_t*>(&rcx13) = *reinterpret_cast<unsigned char*>(&eax67);
                *reinterpret_cast<int32_t*>(&rcx13 + 4) = 0;
                rax68 = g60f578;
                *reinterpret_cast<uint32_t*>(&rsi69) = *reinterpret_cast<uint32_t*>(&rcx13);
                *reinterpret_cast<int32_t*>(&rsi69 + 4) = 0;
                fun_4076ae(rax68, *reinterpret_cast<uint32_t*>(&rsi69), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax66)));
                fun_402c70(0x30d40, rsi69, 0x30d40, rsi69);
                eax70 = g60f4bc;
                *reinterpret_cast<uint32_t*>(&rdx12) = *reinterpret_cast<uint16_t*>(&eax70);
                *reinterpret_cast<int32_t*>(&rdx12 + 4) = 0;
                rax71 = g60f578;
                *reinterpret_cast<uint32_t*>(&rsi72) = *reinterpret_cast<uint32_t*>(&rdx12);
                *reinterpret_cast<int32_t*>(&rsi72 + 4) = 0;
                fun_4077d5(rax71, *reinterpret_cast<uint32_t*>(&rsi72));
                fun_402c70(0x30d40, rsi72);
                rax73 = g60f578;
                *reinterpret_cast<uint32_t*>(&rsi) = 1;
                *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
                fun_407c5d(rax73, 1);
                *reinterpret_cast<int32_t*>(&rdi6) = 0x30d40;
                *reinterpret_cast<int32_t*>(&rdi6 + 4) = 0;
                fun_402c70(0x30d40, 1);
                g60f56f = 1;
                g60f558 = 1;
                goto addr_40993d_10;
            }
        }
    } else {
        *reinterpret_cast<int32_t*>(&rax74) = 0;
        *reinterpret_cast<int32_t*>(&rax74 + 4) = 0;
        rcx75 = rax4 ^ g28;
        if (rcx75) {
            rax74 = fun_402e20(0, rsi, 0, rsi);
        }
        return rax74;
    }
}

void fun_402bb6() {
    goto 0x402820;
}

void fun_4029e6() {
    goto 0x402820;
}

void fun_402b26() {
    goto 0x402820;
}

void fun_402d26() {
    goto 0x402820;
}

void fun_402a56() {
    goto 0x402820;
}

void** fun_409f52(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    void* rbp7;
    uint64_t rax8;
    void** rax9;
    void** rax10;
    void** v11;
    void** rax12;
    int32_t eax13;
    int32_t v14;
    void** rax15;
    void** rax16;
    void** v17;
    void** rax18;
    void** rax19;
    void** rax20;
    void** rax21;
    void** rax22;
    void** v23;
    void** rax24;
    void** rax25;
    void** rax26;
    void** rax27;
    void** rax28;
    void** v29;
    void** rax30;
    void** rax31;
    void** rax32;
    void** rax33;
    void** rax34;
    void** v35;
    void** rax36;
    void** rcx37;
    void** rdi38;
    void** rax39;
    void** rax40;
    void** v41;
    void** rax42;
    void** rsi43;
    void** v44;
    void** rax45;
    void** rax46;
    void** v47;
    void** rax48;
    void** rsi49;
    void** rax50;

    rbp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax8 = g28;
    rax9 = fun_402b30(rdi, rsi, rdx, rcx, r8);
    rax10 = g60f640;
    rax12 = fun_402e00(rax10, rax9, rax9, rcx, r8, r9, v11);
    eax13 = fun_402f70(rax12, rax9);
    __asm__("cvttsd2si eax, xmm0");
    v14 = eax13;
    rax15 = fun_402e90(rax12, rax9, rax9, rcx, r8);
    rax16 = g60f6b0;
    rax18 = fun_402e00(rax16, rax15, rax15, rcx, r8, r9, v17);
    rax19 = fun_4028f0(rax18, rax15);
    if (*reinterpret_cast<int32_t*>(&rax19) && (rax20 = g60f6b0, rdi == rax20)) {
        v14 = 0x82;
        g60f4c4 = 0x82;
        g60f572 = 1;
    }
    rax21 = fun_402e90(rax18, rax15, rax15, rcx, r8);
    rax22 = g60f648;
    rax24 = fun_402e00(rax22, rax21, rax21, rcx, r8, r9, v23);
    rax25 = fun_4028f0(rax24, rax21);
    if (*reinterpret_cast<int32_t*>(&rax25) && (rax26 = g60f648, rdi == rax26)) {
        v14 = 0xaa;
        g60f4c4 = 0xaa;
        g60f572 = 1;
    }
    rax27 = fun_402e90(rax24, rax21, rax21, rcx, r8);
    rax28 = g60f680;
    rax30 = fun_402e00(rax28, rax27, rax27, rcx, r8, r9, v29);
    rax31 = fun_4028f0(rax30, rax27);
    if (*reinterpret_cast<int32_t*>(&rax31) && (rax32 = g60f680, rdi == rax32)) {
        v14 = 0xbe;
        g60f4c4 = 0xbe;
        g60f572 = 1;
    }
    rax33 = fun_402e90(rax30, rax27, rax27, rcx, r8);
    rax34 = g60f630;
    rax36 = fun_402e00(rax34, rax33, rax33, rcx, r8, r9, v35);
    fun_4028f0(rax36, rax33);
    *reinterpret_cast<int32_t*>(&rcx37) = v14;
    *reinterpret_cast<int32_t*>(&rcx37 + 4) = 0;
    rdi38 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp7) + 0xfffffffffffffff0);
    fun_402880(rdi38, 5, "%d", rdi38, 5, "%d");
    rax39 = fun_402dd0(rdi38, 5, "%d", rcx37, r8);
    rax40 = g60f638;
    rax42 = fun_402e00(rax40, rax39, rax39, rcx37, r8, r9, v41);
    rsi43 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp7) + 0xfffffffffffffff0);
    fun_402960(rax42, rsi43);
    __asm__("pxor xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, dword [rbp-0x14]");
    *reinterpret_cast<void***>(rax42) = v44;
    rax45 = fun_402b30(rax42 + 4, rsi43 + 4, rax42, rcx37, r8);
    rax46 = g60f640;
    rax48 = fun_402e00(rax46, rax45, rax45, rcx37, r8, r9, v47);
    *reinterpret_cast<void***>(rax46) = *reinterpret_cast<void***>(rax45);
    rsi49 = rax45 + 4;
    fun_402eb0(rax48, rsi49);
    rax50 = reinterpret_cast<void**>(rax8 ^ g28);
    if (rax50) {
        rax50 = fun_402e20(rax48, rsi49, rax48, rsi49);
    }
    return rax50;
}

void fun_402b36() {
    goto 0x402820;
}

void fun_402eb6() {
    goto 0x402820;
}

void** fun_40a137(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    void* rbp7;
    uint64_t rax8;
    void** rax9;
    void** rax10;
    void** rax11;
    int32_t eax12;
    void** rcx13;
    void** rdi14;
    void** rax15;
    void** rax16;
    void** rax17;
    void** rsi18;
    void** rax19;
    void** rax20;
    void** rax21;
    void** rdi22;
    void** rax23;
    void** rax24;
    void** rax25;
    void** rax26;
    void** rax27;
    void** rax28;
    void** rax29;
    void** rax30;
    void** rax31;
    int32_t eax32;
    void** rax33;

    rbp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax8 = g28;
    rax9 = fun_402b30(rdi, rsi, rdx, rcx, r8);
    rax10 = g60f640;
    rax11 = fun_402e00(rax10, rax9, rax9, rcx, r8, r9, rsi, rax10, rax9, rax9, rcx, r8, r9, rsi);
    eax12 = fun_402f70(rax11, rax9);
    __asm__("cvttsd2si eax, xmm0");
    *reinterpret_cast<int32_t*>(&rcx13) = eax12;
    *reinterpret_cast<int32_t*>(&rcx13 + 4) = 0;
    rdi14 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp7) + 0xfffffffffffffff0);
    fun_402880(rdi14, 5, "%d", rdi14, 5, "%d");
    rax15 = fun_402dd0(rdi14, 5, "%d", rcx13, r8);
    rax16 = g60f638;
    rax17 = fun_402e00(rax16, rax15, rax15, rcx13, r8, r9, rsi, rax16, rax15, rax15, rcx13, r8, r9, rsi);
    rsi18 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp7) + 0xfffffffffffffff0);
    fun_402960(rax17, rsi18);
    if (eax12 == 0xaa) {
        rax19 = fun_402e90(rax17, rsi18, rax17, rcx13, r8);
        rax20 = g60f648;
        rax21 = fun_402e00(rax20, rax19, rax19, rcx13, r8, r9, rsi, rax20, rax19, rax19, rcx13, r8, r9, rsi);
        rdi22 = rax21;
        fun_402e80(rdi22, 1);
    } else {
        if (eax12 == 0xbe) {
            rax23 = fun_402e90(rax17, rsi18, rax17, rcx13, r8);
            rax24 = g60f680;
            rax25 = fun_402e00(rax24, rax23, rax23, rcx13, r8, r9, rsi, rax24, rax23, rax23, rcx13, r8, r9, rsi);
            rdi22 = rax25;
            fun_402e80(rdi22, 1);
        } else {
            if (eax12 != 0x82) {
                rax26 = fun_402e90(rax17, rsi18, rax17, rcx13, r8);
                rax27 = g60f630;
                rax28 = fun_402e00(rax27, rax26, rax26, rcx13, r8, r9, rsi, rax27, rax26, rax26, rcx13, r8, r9, rsi);
                rdi22 = rax28;
                fun_402e80(rdi22, 1);
            } else {
                rax29 = fun_402e90(rax17, rsi18, rax17, rcx13, r8);
                rax30 = g60f6b0;
                rax31 = fun_402e00(rax30, rax29, rax29, rcx13, r8, r9, rsi, rax30, rax29, rax29, rcx13, r8, r9, rsi);
                rdi22 = rax31;
                fun_402e80(rdi22, 1);
            }
        }
    }
    eax32 = eax12;
    g60f4c4 = *reinterpret_cast<uint16_t*>(&eax32);
    g60f572 = 1;
    rax33 = reinterpret_cast<void**>(rax8 ^ g28);
    if (rax33) {
        rax33 = fun_402e20(rdi22, 1, rdi22, 1);
    }
    return rax33;
}

void fun_402e96() {
    goto 0x402820;
}

void fun_402e86() {
    goto 0x402820;
}

void fun_40a374(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    void** rax7;
    void** rax8;
    void** rax9;
    void** rax10;
    void** rax11;
    void** rax12;
    void** rax13;
    void** rax14;
    void** rax15;
    void** rax16;

    rax7 = fun_402e90(rdi, rsi, rdx, rcx, r8);
    rax8 = g60f688;
    rax9 = fun_402e00(rax8, rax7, rax7, rcx, r8, r9, rsi, rax8, rax7, rax7, rcx, r8, r9, rsi);
    rax10 = fun_4028f0(rax9, rax7);
    if (!*reinterpret_cast<int32_t*>(&rax10)) {
        rax11 = fun_402dd0(rax9, rax7, rax7, rcx, r8);
        rax12 = g60f668;
        rax13 = fun_402e00(rax12, rax11, rax11, rcx, r8, r9, rsi, rax12, rax11, rax11, rcx, r8, r9, rsi);
        fun_402d90(rax13, 0);
    } else {
        rax14 = fun_402dd0(rax9, rax7, rax7, rcx, r8);
        rax15 = g60f668;
        rax16 = fun_402e00(rax15, rax14, rax14, rcx, r8, r9, rsi, rax15, rax14, rax14, rcx, r8, r9, rsi);
        fun_402d90(rax16, 1);
    }
    return;
}

void fun_402dd6() {
    goto 0x402820;
}

void fun_402d96() {
    goto 0x402820;
}

void fun_402b46() {
    goto 0x402820;
}

void fun_402ab6() {
    goto 0x402820;
}

void** fun_40aa89(struct s6* rdi, struct s7* rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    void** rax7;
    void** rax8;
    void** v9;
    void** rax10;
    void** rdi11;
    void** rsi12;
    uint32_t eax13;
    void** v14;
    void** rax15;

    __asm__("pxor xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, eax");
    rdi->f0 = rsi->f0;
    rax7 = fun_402b30(&rdi->f4, &rsi->f4, rdx, rcx, r8);
    rax8 = g60f640;
    rax10 = fun_402e00(rax8, rax7, rax7, rcx, r8, r9, v9);
    fun_402f70(rax10, rax7);
    *reinterpret_cast<void***>(rax10) = *reinterpret_cast<void***>(rax7);
    rdi11 = rax10 + 4;
    rsi12 = rax7 + 4;
    __asm__("ucomisd xmm1, xmm0");
    if (__intrinsic()) {
        addr_40aae8_8:
        eax13 = g60f4bc;
        g60f4c4 = *reinterpret_cast<uint16_t*>(&eax13);
        g60f572 = 1;
    } else {
        *reinterpret_cast<void***>(rdi11) = *reinterpret_cast<void***>(rsi12);
        rdi11 = rdi11 + 4;
        rsi12 = rsi12 + 4;
        __asm__("ucomisd xmm2, xmm0");
        if (reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 32) 
            goto addr_40aae8_8;
    }
    fun_409a5e(rdi11, rsi12, rax7, rcx, r8, r9, v14);
    rax15 = fun_40a3fd(rdi11, rsi12, rax7, rcx, r8, r9);
    return rax15;
}

void fun_402f76() {
    goto 0x402820;
}

void fun_402c36() {
    goto 0x402820;
}

void fun_402f66() {
    goto 0x402820;
}

void fun_402896() {
    goto 0x402820;
}

void fun_402ea6() {
    goto 0x402820;
}

void fun_402e16() {
    goto 0x402820;
}

void fun_402976() {
    goto 0x402820;
}

void fun_402866() {
    goto 0x402820;
}

void fun_402966() {
    goto 0x402820;
}

void fun_402fd6() {
    goto 0x402820;
}

void fun_402d86() {
    goto 0x402820;
}

void fun_402b66() {
    goto 0x402820;
}

void fun_402e56() {
    goto 0x402820;
}

void fun_402fc6() {
    goto 0x402820;
}

void fun_402e46() {
    goto 0x402820;
}

void fun_402d06() {
    goto 0x402820;
}

void fun_402916() {
    goto 0x402820;
}

void fun_402846() {
    goto 0x402820;
}

void fun_4029c6() {
    goto 0x402820;
}

void fun_403016() {
    goto 0x402820;
}

void fun_402f16() {
    goto 0x402820;
}

void fun_402d36() {
    goto 0x402820;
}

void fun_402de6() {
    goto 0x402820;
}

void fun_40bd1c(int64_t rdi, int64_t rsi) {
    return;
}

void fun_402b16() {
    goto 0x402820;
}

void fun_402c06() {
    goto 0x402820;
}

void fun_40c4f1(int64_t rdi, int64_t rsi) {
    fun_409b9e();
    return;
}

void fun_4028d6() {
    goto 0x402820;
}

void fun_402e76() {
    goto 0x402820;
}

void fun_402cd6() {
    goto 0x402820;
}

void fun_402be6() {
    goto 0x402820;
}

void fun_4029a6() {
    goto 0x402820;
}

void fun_4028f6() {
    goto 0x402820;
}

void fun_402a46() {
    goto 0x402820;
}

void fun_403e65(int64_t rdi, int64_t rsi) {
    fun_409ae1();
    return;
}

void fun_4028a6() {
    goto 0x402820;
}

void fun_402df6() {
    goto 0x402820;
}

void fun_403056() {
    goto 0x402820;
}

void fun_402bf6() {
    goto 0x402820;
}

void fun_402d16() {
    goto 0x402820;
}

void fun_402936() {
    goto 0x402820;
}

void fun_402d76() {
    goto 0x402820;
}

void fun_403036() {
    goto 0x402820;
}

void fun_402e66() {
    goto 0x402820;
}

void fun_402f36() {
    goto 0x402820;
}

void fun_402ef6() {
    goto 0x402820;
}

void fun_402a86() {
    goto 0x402820;
}

void fun_402f96() {
    goto 0x402820;
}

void fun_402a36() {
    goto 0x402820;
}

void fun_402c96() {
    goto 0x402820;
}

void fun_4028e6() {
    goto 0x402820;
}

void fun_402ad6() {
    goto 0x402820;
}

void fun_402f06() {
    goto 0x402820;
}

void fun_40532b() {
    return;
}

void fun_402996() {
    goto 0x402820;
}

void fun_403046() {
    goto 0x402820;
}

void fun_402fb6() {
    goto 0x402820;
}

void fun_402bc6() {
    goto 0x402820;
}

void fun_402c16() {
    goto 0x402820;
}

void fun_402ed6() {
    goto 0x402820;
}

void fun_402f26() {
    goto 0x402820;
}

void fun_402ce6() {
    goto 0x402820;
}

void fun_402d66() {
    goto 0x402820;
}

void fun_402a16() {
    goto 0x402820;
}

void fun_40bd2b(int64_t rdi, int64_t rsi) {
    fun_409b5f();
    return;
}

void fun_402b96() {
    goto 0x402820;
}

void fun_402a76() {
    goto 0x402820;
}

void fun_402c56() {
    goto 0x402820;
}

void fun_403006() {
    goto 0x402820;
}

void fun_402ae6() {
    goto 0x402820;
}

void fun_402bd6() {
    goto 0x402820;
}

void fun_402986() {
    goto 0x402820;
}

void fun_403026() {
    goto 0x402820;
}

void fun_402d56() {
    goto 0x402820;
}

void fun_402aa6() {
    goto 0x402820;
}

void** fun_403e82(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    void** rax7;
    void** rax8;
    void** rax9;
    void** rax10;
    void** rax11;
    void** rax12;
    void** rax13;
    void** rax14;

    rax7 = fun_402c20(rdi, rsi, rdx, rcx, r8, rdi, rsi, rdx, rcx, r8);
    rax8 = fun_402e00(rsi, rax7, rax7, rcx, r8, r9, rsi, rsi, rax7, rax7, rcx, r8, r9, rsi);
    rax9 = fun_402a90(rax8, 1, 0, 2, "Create Hide button!");
    rax10 = fun_402c20(rax8, 1, 0, 2, "Create Hide button!", rax8, 1, 0, 2, "Create Hide button!");
    rax11 = fun_402e00(rax9, rax10, rax10, 2, "Create Hide button!", r9, rsi, rax9, rax10, rax10, 2, "Create Hide button!", r9, rsi);
    fun_402ca0(rax11, 1);
    rax12 = fun_402a60(rax11, 1, rax10, 2, "Create Hide button!");
    rax13 = fun_402e00(rax9, rax12, rax12, 2, "Create Hide button!", r9, rsi, rax9, rax12, rax12, 2, "Create Hide button!", r9, rsi);
    fun_402e30(rax13, rax12);
    rax14 = fun_4029b0(rax9, rax12);
    return rax14;
}

int64_t gtk_false = 0x402ee6;

void gtk_false() {
    goto gtk_false;
}

void fun_405351() {
    fun_4087a9();
    return;
}

void fun_40bd48(int64_t rdi, int64_t rsi) {
    fun_409b20();
    return;
}

int64_t g_log_default_handler = 0x402ba6;

void g_log_default_handler() {
    goto g_log_default_handler;
}

void** fun_403f29(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    void** rax7;
    void** rax8;
    void** rax9;
    void** rax10;
    void** rax11;
    void** rax12;
    void** rax13;
    int32_t eax14;
    void** rax15;

    rax7 = fun_402c20(rdi, rsi, rdx, rcx, r8, rdi, rsi, rdx, rcx, r8);
    rax8 = fun_402e00(rsi, rax7, rax7, rcx, r8, r9, rsi, rsi, rax7, rax7, rcx, r8, r9, rsi);
    rax9 = fun_402a90(rax8, 1, 0, 4, "Are you sure to quit Paperlike Pro app?");
    rax10 = fun_402c20(rax8, 1, 0, 4, "Are you sure to quit Paperlike Pro app?", rax8, 1, 0, 4, "Are you sure to quit Paperlike Pro app?");
    rax11 = fun_402e00(rax9, rax10, rax10, 4, "Are you sure to quit Paperlike Pro app?", r9, rsi, rax9, rax10, rax10, 4, "Are you sure to quit Paperlike Pro app?", r9, rsi);
    fun_402ca0(rax11, 1);
    rax12 = fun_402a60(rax11, 1, rax10, 4, "Are you sure to quit Paperlike Pro app?");
    rax13 = fun_402e00(rax9, rax12, rax12, 4, "Are you sure to quit Paperlike Pro app?", r9, rsi, rax9, rax12, rax12, 4, "Are you sure to quit Paperlike Pro app?", r9, rsi);
    eax14 = fun_402e30(rax13, rax12);
    if (eax14 == -8) {
        fun_402dc0(rax13, rax12);
    }
    rax15 = fun_4029b0(rax9, rax12);
    return rax15;
}

void fun_402f46() {
    goto 0x402820;
}

void fun_402ee6() {
    goto 0x402820;
}

void fun_40bd65(void** rdi, void** rsi, void** rdx, void** rcx, int64_t r8, int64_t r9) {
    void** rax7;
    void** rax8;
    void** rax9;
    int32_t eax10;
    void** rax11;
    void** rax12;
    void** rax13;

    fun_409b20();
    rax7 = fun_402b10(rdi, rsi, rdx, rcx, r8);
    rax8 = g60f6d0;
    rax9 = fun_402e00(rax8, rax7, rax7, rcx, r8, r9, rsi, rax8, rax7, rax7, rcx, r8, r9, rsi);
    eax10 = fun_402f40(rax9, rax7);
    if (eax10) {
        g60f4c3 = 2;
    } else {
        g60f4c3 = 1;
    }
    fun_4036a3(rax9, rax7, rax7, rcx, r8, r9, rsi, rax9, rax7, rax7, rcx, r8, r9, rsi);
    fun_409bdd(rax9, rax7, rax7, rcx, r8, r9, rsi, rax9, rax7, rax7, rcx, r8, r9, rsi);
    fun_40bc6c(rax9, rax7, rax7, rcx, r8, r9, rsi, rax9, rax7, rax7, rcx, r8, r9, rsi);
    fun_408d0b(rax9, rax7);
    rax11 = fun_402c20(rax9, rax7, rax7, rcx, r8, rax9, rax7, rax7, rcx, r8);
    rax12 = g60f580;
    rax13 = fun_402e00(rax12, rax11, rax11, rcx, r8, r9, rsi, rax12, rax11, rax11, rcx, r8, r9, rsi);
    fun_402ca0(rax13, 1);
    return;
}

void fun_402ba6() {
    goto 0x402820;
}
