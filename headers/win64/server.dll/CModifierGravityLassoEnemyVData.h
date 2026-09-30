#pragma once

class CModifierGravityLassoEnemyVData : public CCitadel_Modifier_DragVData /*0x0*/  // sizeof 0x960, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x870]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LassoEffect; // offset 0x870, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_StunModifier; // offset 0x950, size 0x10, align 8 | MPropertyStartGroup
};
