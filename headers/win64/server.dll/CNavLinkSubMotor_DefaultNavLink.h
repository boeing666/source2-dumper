#pragma once

class CNavLinkSubMotor_DefaultNavLink : public INavLinkSubMotor /*0x0*/  // sizeof 0x160, align 0x10 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    bool m_bExternalGraphSet; // offset 0x18, size 0x1, align 1
    char _pad_0019[0x3]; // offset 0x19
    int32 m_nNavLinkIndex; // offset 0x1C, size 0x4, align 4
    int32 m_nTickStarted; // offset 0x20, size 0x4, align 4
    CHandle< CNavLinkAreaEntity > m_hNavLinkEntity; // offset 0x24, size 0x4, align 4
    CNavLinkSubMotor_DefaultNavLink::State_t m_eState; // offset 0x28, size 0x4, align 4
    CNavLinkSubMotor_DefaultNavLink::TargetType_t m_eTargetType; // offset 0x2C, size 0x4, align 4
    BodySectionMutex_t m_eBodySectionMutex; // offset 0x30, size 0x4, align 4
    bool m_bIsFromMovement; // offset 0x34, size 0x1, align 1
    char _pad_0035[0xB]; // offset 0x35
    CRelativeTransform m_source; // offset 0x40, size 0x60, align 16
    CRelativeTransform m_target; // offset 0xA0, size 0x60, align 16
    CTransformWS m_tSourcePrevious; // offset 0x100, size 0x20, align 16
    CTransformWS m_tTargetPrevious; // offset 0x120, size 0x20, align 16
    CAnimGraphControllerPtr m_pGraphController; // offset 0x140, size 0x8, align 255
    char _pad_0148[0x18]; // offset 0x148
};
