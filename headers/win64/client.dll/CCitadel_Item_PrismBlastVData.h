#pragma once

class CCitadel_Item_PrismBlastVData : public CCitadel_Item_BubbleVData /*0x0*/  // sizeof 0x1550, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1290]; // offset 0x0
    float32 m_flBeamRotateSpeed; // offset 0x1290, size 0x4, align 4
    float32 m_flTickRate; // offset 0x1294, size 0x4, align 4
    float32 m_flOscilateRate; // offset 0x1298, size 0x4, align 4
    float32 m_flOscilateMaxPitch; // offset 0x129C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x12A0, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticleLocal; // offset 0x1380, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamHitParticle; // offset 0x1460, size 0xE0, align 8
    CSoundEventName m_strLaserLoopSound; // offset 0x1540, size 0x10, align 8 | MPropertyGroupName
};
