#pragma once

struct PhysSoftbodyDesc_t  // sizeof 0x90, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
    CUtlVector< uint32 > m_ParticleBoneHash; // offset 0x0, size 0x18, align 8
    CUtlVector< RnSoftbodyParticle_t > m_Particles; // offset 0x18, size 0x18, align 8
    CUtlVector< RnSoftbodySpring_t > m_Springs; // offset 0x30, size 0x18, align 8
    CUtlVector< RnSoftbodyCapsule_t > m_Capsules; // offset 0x48, size 0x18, align 8
    CUtlVector< CTransform > m_InitPose; // offset 0x60, size 0x18, align 8
    CUtlVector< CUtlString > m_ParticleBoneName; // offset 0x78, size 0x18, align 8
};
