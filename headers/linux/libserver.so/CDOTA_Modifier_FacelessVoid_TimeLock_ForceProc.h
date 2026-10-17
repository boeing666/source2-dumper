#pragma once

class CDOTA_Modifier_FacelessVoid_TimeLock_ForceProc : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 duration; // offset 0x1AA8, size 0x4, align 4
    float32 duration_creep; // offset 0x1AAC, size 0x4, align 4
    int32 bonus_damage; // offset 0x1AB0, size 0x4, align 4
    float32 delay; // offset 0x1AB4, size 0x4, align 4
    CHandle< CDOTA_BaseNPC > m_hTarget; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
