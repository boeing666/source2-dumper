#pragma once

class CCitadel_Ability_AirheartRocketeer4VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1898, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ChargingModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_ImpulseAccelCurve; // offset 0x1828, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flChargingTime; // offset 0x1868, size 0x4, align 4
    float32 m_flGravity; // offset 0x186C, size 0x4, align 4
    float32 m_flTerminalGravity; // offset 0x1870, size 0x4, align 4
    float32 m_flVelocityXYDefaultCeiling; // offset 0x1874, size 0x4, align 4
    float32 m_flVelocityDecayToCeilingSpeed; // offset 0x1878, size 0x4, align 4
    float32 m_flThrustVelocityAngleApproachTime; // offset 0x187C, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flThrustVelocityApproachIncreasing; // offset 0x1880, size 0x4, align 4
    float32 m_flThrustVelocityApproachDecreasing; // offset 0x1884, size 0x4, align 4
    Vector m_vThrustingVelocity; // offset 0x1888, size 0xC, align 4
    char _pad_1894[0x4]; // offset 0x1894
};
