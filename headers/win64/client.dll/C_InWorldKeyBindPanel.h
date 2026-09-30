#pragma once

class C_InWorldKeyBindPanel : public C_PointClientUIWorldPanel /*0x0*/  // sizeof 0xE20, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xE10]; // offset 0x0
    CHandle< C_CitadelPlayerPawn > m_hPlayer; // offset 0xE10, size 0x4, align 4 | MNotSaved
    char _pad_0E14[0xC]; // offset 0xE14
};
