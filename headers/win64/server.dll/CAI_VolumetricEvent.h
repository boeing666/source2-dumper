#pragma once

class CAI_VolumetricEvent  // sizeof 0x78, align 0xFF (server)
{
public:
    AI_VolumetricEventHandle_t m_hHandle; // offset 0x0, size 0x8, align 255
    CHandle< CBaseEntity > m_hOwner; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    AI_VolumetricEventTypeMask_t m_nTypeMask; // offset 0x10, size 0x8, align 8
    AI_VolumetricEventFlags_t m_nFlags; // offset 0x18, size 0x2, align 2
    AI_VolumetricEventType_t m_nPrimaryType; // offset 0x1A, size 0x1, align 1
    AI_VolumetricEventChannel_t m_nChannel; // offset 0x1B, size 0x1, align 1
    AI_VolumetricEventCategory_t m_nCategory; // offset 0x1C, size 0x1, align 1
    char _pad_001D[0x3]; // offset 0x1D
    float32 m_flRadius; // offset 0x20, size 0x4, align 4
    GameTime_t m_flExpireTime; // offset 0x24, size 0x4, align 255
    char _pad_0028[0x8]; // offset 0x28
    CRelativeLocation m_vOrigin; // offset 0x30, size 0x40, align 255
    CHandle< CBaseEntity > m_hTarget; // offset 0x70, size 0x4, align 4
    char _pad_0074[0x4]; // offset 0x74
};
