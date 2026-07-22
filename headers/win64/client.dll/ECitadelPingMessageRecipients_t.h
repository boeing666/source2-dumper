#pragma once

enum ECitadelPingMessageRecipients_t : uint32_t  // sizeof 0x4
{
    k_ECitadelRecipients_GlobalFriendlyTeam = 0,
    k_ECitadelRecipients_RecipientAndPlayer = 1,
    k_ECitadelRecipients_RecipientsAroundPlayer = 2,
    k_ECitadelRecipients_GlobalAllChat = 3,
};
