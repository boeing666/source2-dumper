#pragma once

class CCitadel_Item_PrismBlastVData : public CCitadel_Item_BubbleVData /*0x0*/  // sizeof 0x1540, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1280]; // offset 0x0
    float32 m_flBeamRotateSpeed; // offset 0x1280, size 0x4, align 4
    float32 m_flTickRate; // offset 0x1284, size 0x4, align 4
    float32 m_flOscilateRate; // offset 0x1288, size 0x4, align 4
    float32 m_flOscilateMaxPitch; // offset 0x128C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x1290, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticleLocal; // offset 0x1370, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamHitParticle; // offset 0x1450, size 0xE0, align 8
    CSoundEventName m_strLaserLoopSound; // offset 0x1530, size 0x10, align 8 | MPropertyGroupName
};
