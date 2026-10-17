#pragma once

class CTriggerLerpObject : public CBaseTrigger /*0x0*/  // sizeof 0xD48, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCA8]; // offset 0x0
    CUtlSymbolLarge m_iszLerpTarget; // offset 0xCA8, size 0x8, align 8
    CHandle< CBaseEntity > m_hLerpTarget; // offset 0xCB0, size 0x4, align 4
    char _pad_0CB4[0x4]; // offset 0xCB4
    CUtlSymbolLarge m_iszLerpTargetAttachment; // offset 0xCB8, size 0x8, align 8
    AttachmentHandle_t m_hLerpTargetAttachment; // offset 0xCC0, size 0x1, align 255
    char _pad_0CC1[0x3]; // offset 0xCC1
    float32 m_flLerpDuration; // offset 0xCC4, size 0x4, align 4
    bool m_bAttachedEntityWasParented; // offset 0xCC8, size 0x1, align 1
    bool m_bLerpRestoreMoveType; // offset 0xCC9, size 0x1, align 1
    bool m_bSingleLerpObject; // offset 0xCCA, size 0x1, align 1
    char _pad_0CCB[0x5]; // offset 0xCCB
    CUtlVector< lerpdata_t > m_vecLerpingObjects; // offset 0xCD0, size 0x18, align 8
    CUtlSymbolLarge m_iszLerpEffect; // offset 0xCE8, size 0x8, align 8
    CUtlSymbolLarge m_iszLerpSound; // offset 0xCF0, size 0x8, align 8
    bool m_bAttachTouchingObject; // offset 0xCF8, size 0x1, align 1
    char _pad_0CF9[0x3]; // offset 0xCF9
    CHandle< CBaseEntity > m_hEntityToWaitForDisconnect; // offset 0xCFC, size 0x4, align 4
    CEntityIOOutput m_OnLerpStarted; // offset 0xD00, size 0x18, align 255
    CEntityIOOutput m_OnLerpFinished; // offset 0xD18, size 0x18, align 255
    CEntityIOOutput m_OnDetached; // offset 0xD30, size 0x18, align 255
};
