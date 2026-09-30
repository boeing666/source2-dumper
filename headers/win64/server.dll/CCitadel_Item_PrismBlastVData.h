#pragma once

class CCitadel_Item_PrismBlastVData : public CCitadel_Item_BubbleVData /*0x0*/  // sizeof 0x1870, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x15B0]; // offset 0x0
    float32 m_flBeamRotateSpeed; // offset 0x15B0, size 0x4, align 4
    float32 m_flTickRate; // offset 0x15B4, size 0x4, align 4
    float32 m_flOscilateRate; // offset 0x15B8, size 0x4, align 4
    float32 m_flOscilateMaxPitch; // offset 0x15BC, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x15C0, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticleLocal; // offset 0x16A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamHitParticle; // offset 0x1780, size 0xE0, align 8
    CSoundEventName m_strLaserLoopSound; // offset 0x1860, size 0x10, align 8 | MPropertyGroupName
};
