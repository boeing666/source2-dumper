#pragma once

struct DOTAOverworldReleaseScheduledUnlock_t  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlString m_strLocName; // offset 0x0, size 0x8, align 8
    CUtlString m_strVisualNovelName; // offset 0x8, size 0x8, align 8
    CUtlString m_strRingmasterVisualNovelName; // offset 0x10, size 0x8, align 8
    uint32 m_unReleaseTime; // offset 0x18, size 0x4, align 4
    OverworldRoomGroupID_t m_unGroupID; // offset 0x1C, size 0x1, align 255
    char _pad_001D[0x3]; // offset 0x1D
};
