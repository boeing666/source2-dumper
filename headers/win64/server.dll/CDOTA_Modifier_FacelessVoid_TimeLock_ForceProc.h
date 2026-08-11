#pragma once

class CDOTA_Modifier_FacelessVoid_TimeLock_ForceProc : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 duration; // offset 0x1A78, size 0x4, align 4
    float32 duration_creep; // offset 0x1A7C, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A80, size 0x4, align 4
    float32 delay; // offset 0x1A84, size 0x4, align 4
    CHandle< CDOTA_BaseNPC > m_hTarget; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
