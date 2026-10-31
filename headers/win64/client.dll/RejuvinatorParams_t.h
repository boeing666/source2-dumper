#pragma once

struct RejuvinatorParams_t  // sizeof 0x70, align 0x8 (client) {MGetKV3ClassDefaults}
{
    float32 m_flRejuvinatorExpirationWarningTiming; // offset 0x0, size 0x4, align 4
    float32 m_flRejuvinatorBuffDuration; // offset 0x4, size 0x4, align 4
    float32 m_flRejuvinatorDropHeight; // offset 0x8, size 0x4, align 4
    float32 m_flRejuvinatorDropDuration; // offset 0xC, size 0x4, align 4
    int32 m_nRejuvinatorDropCount; // offset 0x10, size 0x4, align 4
    float32 m_flRejuvinatorDropSpreadRadius; // offset 0x14, size 0x4, align 4
    float32 m_flRejuvinatorDropWallClearance; // offset 0x18, size 0x4, align 4
    int32 m_nRejuvinatorBreakGold; // offset 0x1C, size 0x4, align 4
    int32 m_nRejuvinatorBreakGoldPerMinute; // offset 0x20, size 0x4, align 4
    float32[3] m_flRejuvinatorRebirthDuration; // offset 0x24, size 0xC, align 4
    CUtlVector< float32 > m_TrooperHealthMult; // offset 0x30, size 0x18, align 8
    CUtlVector< float32 > m_PlayerRespawnMult; // offset 0x48, size 0x18, align 8
    CSoundEventName m_strRejuvPickupSound; // offset 0x60, size 0x10, align 8
};
