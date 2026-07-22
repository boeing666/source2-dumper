#pragma once

class CReplicationParameters  // sizeof 0x11C8, align 0x8 (particles) {MGetKV3ClassDefaults}
{
public:
    ParticleReplicationMode_t m_nReplicationMode; // offset 0x0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bScaleChildParticleRadii; // offset 0x4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0005[0x3]; // offset 0x5
    CParticleCollectionFloatInput m_flMinRandomRadiusScale; // offset 0x8, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flMaxRandomRadiusScale; // offset 0x178, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vMinRandomDisplacement; // offset 0x2E8, size 0x6B8, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vMaxRandomDisplacement; // offset 0x9A0, size 0x6B8, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flModellingScale; // offset 0x1058, size 0x170, align 8 | MPropertyFriendlyName
};
