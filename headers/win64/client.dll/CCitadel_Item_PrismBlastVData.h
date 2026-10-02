#pragma once

class CCitadel_Item_PrismBlastVData : public CCitadel_Item_BubbleVData /*0x0*/  // sizeof 0x18B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x15F8]; // offset 0x0
    float32 m_flBeamRotateSpeed; // offset 0x15F8, size 0x4, align 4
    float32 m_flTickRate; // offset 0x15FC, size 0x4, align 4
    float32 m_flOscilateRate; // offset 0x1600, size 0x4, align 4
    float32 m_flOscilateMaxPitch; // offset 0x1604, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x1608, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticleLocal; // offset 0x16E8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamHitParticle; // offset 0x17C8, size 0xE0, align 8
    CSoundEventName m_strLaserLoopSound; // offset 0x18A8, size 0x10, align 8 | MPropertyGroupName
};
