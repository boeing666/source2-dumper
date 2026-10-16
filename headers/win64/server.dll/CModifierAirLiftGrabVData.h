#pragma once

class CModifierAirLiftGrabVData : public CCitadel_Modifier_DragVData /*0x0*/  // sizeof 0x998, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GrabEffect; // offset 0x8A0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strBombLaunchSound; // offset 0x980, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flAllyGrabCancelTime; // offset 0x990, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0994[0x4]; // offset 0x994
};
