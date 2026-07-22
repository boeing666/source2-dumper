#pragma once

struct CPAssignment_t  // sizeof 0x6A0, align 0x8 (particles) {MGetKV3ClassDefaults}
{
    int32 m_nCPNumber; // offset 0x0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0004[0x4]; // offset 0x4
    CPerParticleVecInput m_Pos; // offset 0x8, size 0x690, align 8 | MPropertyFriendlyName
    ParticleOrientationSetMode_t m_nOrientationMode; // offset 0x698, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_069C[0x4]; // offset 0x69C
};
