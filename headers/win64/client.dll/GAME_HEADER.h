#pragma once

class GAME_HEADER  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_sComment; // offset 0x0, size 0x8, align 8
    int32 m_nSpawnGroupCount; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CUtlString m_sLandmark; // offset 0x10, size 0x8, align 8
    CUtlString m_sRequiredAddons; // offset 0x18, size 0x8, align 8
};
