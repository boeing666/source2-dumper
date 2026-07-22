#pragma once

class CPhysWheelConstraint : public CPhysConstraint /*0x0*/  // sizeof 0x820, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7E8]; // offset 0x0
    float32 m_flSuspensionFrequency; // offset 0x7E8, size 0x4, align 4
    float32 m_flSuspensionDampingRatio; // offset 0x7EC, size 0x4, align 4
    float32 m_flSuspensionHeightOffset; // offset 0x7F0, size 0x4, align 4
    bool m_bEnableSuspensionLimit; // offset 0x7F4, size 0x1, align 1
    char _pad_07F5[0x3]; // offset 0x7F5
    float32 m_flMinSuspensionOffset; // offset 0x7F8, size 0x4, align 4
    float32 m_flMaxSuspensionOffset; // offset 0x7FC, size 0x4, align 4
    bool m_bEnableSteeringLimit; // offset 0x800, size 0x1, align 1
    char _pad_0801[0x3]; // offset 0x801
    float32 m_flMinSteeringAngle; // offset 0x804, size 0x4, align 4
    float32 m_flMaxSteeringAngle; // offset 0x808, size 0x4, align 4
    float32 m_flSteeringAxisFriction; // offset 0x80C, size 0x4, align 4
    float32 m_flSpinAxisFriction; // offset 0x810, size 0x4, align 4
    CHandle< CBaseEntity > m_hSteeringMimicsEntity; // offset 0x814, size 0x4, align 4
    char _pad_0818[0x8]; // offset 0x818
};
