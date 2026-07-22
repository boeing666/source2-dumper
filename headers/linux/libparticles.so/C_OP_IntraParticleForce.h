#pragma once

class C_OP_IntraParticleForce : public CParticleFunctionForce /*0x0*/  // sizeof 0x1F8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    float32 m_flAttractionMinDistance; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flAttractionMaxDistance; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flAttractionMaxStrength; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flRepulsionMinDistance; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flRepulsionMaxDistance; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flRepulsionMaxStrength; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bUseAABB; // offset 0x1F4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01F5[0x3]; // offset 0x1F5
};
