#pragma once

class C_InWorldKeyBindPanel : public C_PointClientUIWorldPanel /*0x0*/  // sizeof 0xC10, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xC00]; // offset 0x0
    CHandle< C_CitadelPlayerPawn > m_hPlayer; // offset 0xC00, size 0x4, align 4 | MNotSaved
    char _pad_0C04[0xC]; // offset 0xC04
};
