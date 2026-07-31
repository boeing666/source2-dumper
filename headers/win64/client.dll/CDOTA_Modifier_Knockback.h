#pragma once

class CDOTA_Modifier_Knockback : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 knockback_distance; // offset 0x1A78, size 0x4, align 4
    int32 knockback_height; // offset 0x1A7C, size 0x4, align 4
    float32 knockback_duration; // offset 0x1A80, size 0x4, align 4
    Vector m_vHorizOffset; // offset 0x1A84, size 0xC, align 4
    VectorWS m_vStartPosition; // offset 0x1A90, size 0xC, align 4
    float32 m_flZDelta; // offset 0x1A9C, size 0x4, align 4
    float32 m_fCurrentTimeHoriz; // offset 0x1AA0, size 0x4, align 4
    float32 m_fCurrentTimeVert; // offset 0x1AA4, size 0x4, align 4
    bool m_bShouldStun; // offset 0x1AA8, size 0x1, align 1
    bool m_bRespectLeash; // offset 0x1AA9, size 0x1, align 1
    bool m_bReversePolarity; // offset 0x1AAA, size 0x1, align 1
    bool m_bRelativeToGround; // offset 0x1AAB, size 0x1, align 1
    bool m_bDestroyTreesOnRoute; // offset 0x1AAC, size 0x1, align 1
    bool m_bFindClearSpace; // offset 0x1AAD, size 0x1, align 1
    char _pad_1AAE[0x2]; // offset 0x1AAE
};
