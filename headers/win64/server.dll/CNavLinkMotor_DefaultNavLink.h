#pragma once

class CNavLinkMotor_DefaultNavLink : public INavLinkMotor /*0x0*/  // sizeof 0x100, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x18]; // offset 0x0
    int32 m_nNavLinkIndex; // offset 0x18, size 0x4, align 4
    int32 m_nTickStarted; // offset 0x1C, size 0x4, align 4
    CHandle< CNavLinkAreaEntity > m_hNavLinkEntity; // offset 0x20, size 0x4, align 4
    CNavLinkMotor_DefaultNavLink::State_t m_eState; // offset 0x24, size 0x4, align 4
    CNavLinkMotor_DefaultNavLink::TargetType_t m_eTargetType; // offset 0x28, size 0x4, align 4
    BodySectionAuthority_t m_eBodySectionAuthority; // offset 0x2C, size 0x4, align 4
    bool m_bIsFromMovement; // offset 0x30, size 0x1, align 1
    char _pad_0031[0xF]; // offset 0x31
    CRelativeTransform m_source; // offset 0x40, size 0x30, align 16
    CRelativeTransform m_target; // offset 0x70, size 0x30, align 16
    CTransformWS m_tSourcePrevious; // offset 0xA0, size 0x20, align 16
    CTransformWS m_tTargetPrevious; // offset 0xC0, size 0x20, align 16
    CNavLinkMotor_DefaultNavLink_GraphController* m_pGraphController; // offset 0xE0, size 0x8, align 8 | MSaveOpsForField
    char _pad_00E8[0x18]; // offset 0xE8
};
