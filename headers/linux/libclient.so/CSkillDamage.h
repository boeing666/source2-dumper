#pragma once

class CSkillDamage  // sizeof 0x18, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
public:
    CSkillFloat m_flDamage; // offset 0x0, size 0x10, align 255 | MPropertyDescription
    float32 m_flNPCDamageScalarVsNPC; // offset 0x10, size 0x4, align 4 | MPropertyDescription
    float32 m_flPhysicsForceDamage; // offset 0x14, size 0x4, align 4 | MPropertyDescription
};
