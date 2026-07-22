#pragma once

struct CitadelMuzzleSettings_t  // sizeof 0x40, align 0x8 (client) {MModelGameData MGetKV3ClassDefaults}
{
    CUtlVector< CitadelMuzzle_t > m_vecPrimaryMuzzles; // offset 0x0, size 0x18, align 8
    CUtlVector< CitadelMuzzle_t > m_vecSecondaryMuzzles; // offset 0x18, size 0x18, align 8
    bool m_bRandomizePrimaryMuzzleUsage; // offset 0x30, size 0x1, align 1 | MPropertyDescription
    bool m_bRandomizeSecondaryMuzzleUsage; // offset 0x31, size 0x1, align 1 | MPropertyDescription
    char _pad_0032[0x2]; // offset 0x32
    float32 m_flPrimaryMuzzleResetTime; // offset 0x34, size 0x4, align 4 | MPropertyDescription
    float32 m_flSecondaryMuzzleResetTime; // offset 0x38, size 0x4, align 4 | MPropertyDescription
    char _pad_003C[0x4]; // offset 0x3C
};
