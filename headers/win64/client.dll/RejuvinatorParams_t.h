#pragma once

struct RejuvinatorParams_t  // sizeof 0x60, align 0x8 (client) {MGetKV3ClassDefaults}
{
    float32 m_flRejuvinatorExpirationWarningTiming; // offset 0x0, size 0x4, align 4
    float32 m_flRejuvinatorBuffDuration; // offset 0x4, size 0x4, align 4
    float32 m_flRejuvinatorDropHeight; // offset 0x8, size 0x4, align 4
    float32 m_flRejuvinatorDropDuration; // offset 0xC, size 0x4, align 4
    float32[3] m_flRejuvinatorRebirthDuration; // offset 0x10, size 0xC, align 4
    char _pad_001C[0x4]; // offset 0x1C
    CUtlVector< float32 > m_TrooperHealthMult; // offset 0x20, size 0x18, align 8
    CUtlVector< float32 > m_PlayerRespawnMult; // offset 0x38, size 0x18, align 8
    CSoundEventName m_strRejuvPickupSound; // offset 0x50, size 0x10, align 8
};
