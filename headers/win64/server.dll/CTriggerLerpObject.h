#pragma once

class CTriggerLerpObject : public CBaseTrigger /*0x0*/  // sizeof 0xA70, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9D0]; // offset 0x0
    CUtlSymbolLarge m_iszLerpTarget; // offset 0x9D0, size 0x8, align 8
    CHandle< CBaseEntity > m_hLerpTarget; // offset 0x9D8, size 0x4, align 4
    char _pad_09DC[0x4]; // offset 0x9DC
    CUtlSymbolLarge m_iszLerpTargetAttachment; // offset 0x9E0, size 0x8, align 8
    AttachmentHandle_t m_hLerpTargetAttachment; // offset 0x9E8, size 0x1, align 255
    char _pad_09E9[0x3]; // offset 0x9E9
    float32 m_flLerpDuration; // offset 0x9EC, size 0x4, align 4
    bool m_bAttachedEntityWasParented; // offset 0x9F0, size 0x1, align 1
    bool m_bLerpRestoreMoveType; // offset 0x9F1, size 0x1, align 1
    bool m_bSingleLerpObject; // offset 0x9F2, size 0x1, align 1
    char _pad_09F3[0x5]; // offset 0x9F3
    CUtlVector< lerpdata_t > m_vecLerpingObjects; // offset 0x9F8, size 0x18, align 8
    CUtlSymbolLarge m_iszLerpEffect; // offset 0xA10, size 0x8, align 8
    CUtlSymbolLarge m_iszLerpSound; // offset 0xA18, size 0x8, align 8
    bool m_bAttachTouchingObject; // offset 0xA20, size 0x1, align 1
    char _pad_0A21[0x3]; // offset 0xA21
    CHandle< CBaseEntity > m_hEntityToWaitForDisconnect; // offset 0xA24, size 0x4, align 4
    CEntityIOOutput m_OnLerpStarted; // offset 0xA28, size 0x18, align 255
    CEntityIOOutput m_OnLerpFinished; // offset 0xA40, size 0x18, align 255
    CEntityIOOutput m_OnDetached; // offset 0xA58, size 0x18, align 255
};
