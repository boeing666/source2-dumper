#pragma once

class CTriggerLerpObject : public CBaseTrigger /*0x0*/  // sizeof 0xD40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCA0]; // offset 0x0
    CUtlSymbolLarge m_iszLerpTarget; // offset 0xCA0, size 0x8, align 8
    CHandle< CBaseEntity > m_hLerpTarget; // offset 0xCA8, size 0x4, align 4
    char _pad_0CAC[0x4]; // offset 0xCAC
    CUtlSymbolLarge m_iszLerpTargetAttachment; // offset 0xCB0, size 0x8, align 8
    AttachmentHandle_t m_hLerpTargetAttachment; // offset 0xCB8, size 0x1, align 255
    char _pad_0CB9[0x3]; // offset 0xCB9
    float32 m_flLerpDuration; // offset 0xCBC, size 0x4, align 4
    bool m_bAttachedEntityWasParented; // offset 0xCC0, size 0x1, align 1
    bool m_bLerpRestoreMoveType; // offset 0xCC1, size 0x1, align 1
    bool m_bSingleLerpObject; // offset 0xCC2, size 0x1, align 1
    char _pad_0CC3[0x5]; // offset 0xCC3
    CUtlVector< lerpdata_t > m_vecLerpingObjects; // offset 0xCC8, size 0x18, align 8
    CUtlSymbolLarge m_iszLerpEffect; // offset 0xCE0, size 0x8, align 8
    CUtlSymbolLarge m_iszLerpSound; // offset 0xCE8, size 0x8, align 8
    bool m_bAttachTouchingObject; // offset 0xCF0, size 0x1, align 1
    char _pad_0CF1[0x3]; // offset 0xCF1
    CHandle< CBaseEntity > m_hEntityToWaitForDisconnect; // offset 0xCF4, size 0x4, align 4
    CEntityIOOutput m_OnLerpStarted; // offset 0xCF8, size 0x18, align 255
    CEntityIOOutput m_OnLerpFinished; // offset 0xD10, size 0x18, align 255
    CEntityIOOutput m_OnDetached; // offset 0xD28, size 0x18, align 255
};
