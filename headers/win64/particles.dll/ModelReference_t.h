#pragma once

struct ModelReference_t  // sizeof 0x10, align 0x8 (particles) {MGetKV3ClassDefaults}
{
    CStrongHandle< InfoForResourceTypeCModel > m_model; // offset 0x0, size 0x8, align 8 | MPropertyFriendlyName
    float32 m_flRelativeProbabilityOfSpawn; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_000C[0x4]; // offset 0xC
};
