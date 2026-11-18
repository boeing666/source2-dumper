#pragma once

class CDOTA_Modifier_Knockback : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 knockback_distance; // offset 0x1AF8, size 0x4, align 4
    int32 knockback_height; // offset 0x1AFC, size 0x4, align 4
    float32 knockback_duration; // offset 0x1B00, size 0x4, align 4
    Vector m_vHorizOffset; // offset 0x1B04, size 0xC, align 4
    VectorWS m_vStartPosition; // offset 0x1B10, size 0xC, align 4
    float32 m_flZDelta; // offset 0x1B1C, size 0x4, align 4
    float32 m_fCurrentTimeHoriz; // offset 0x1B20, size 0x4, align 4
    float32 m_fCurrentTimeVert; // offset 0x1B24, size 0x4, align 4
    bool m_bDirectionProvided; // offset 0x1B28, size 0x1, align 1
    bool m_bShouldStun; // offset 0x1B29, size 0x1, align 1
    bool m_bRespectLeash; // offset 0x1B2A, size 0x1, align 1
    bool m_bReversePolarity; // offset 0x1B2B, size 0x1, align 1
    bool m_bRelativeToGround; // offset 0x1B2C, size 0x1, align 1
    bool m_bDestroyTreesOnRoute; // offset 0x1B2D, size 0x1, align 1
    bool m_bFindClearSpace; // offset 0x1B2E, size 0x1, align 1
    char _pad_1B2F[0x1]; // offset 0x1B2F
};
