/* arptypes.h
 * Declarations of ARP address types.
 *
 * $Id: arptypes.h 27120 2008-12-27 14:30:46Z jake $
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#ifndef __ARPTYPES_H__
#define __ARPTYPES_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* Definitions taken from Linux "linux/if_arp.h" header file, and from

	http://www.iana.org/assignments/arp-parameters

 */

/* ARP protocol HARDWARE identifiers. */
#define ARPHRD_NETROM	0		/* from KA9Q: NET/ROM pseudo	*/
#define ARPHRD_ETHER 	1		/* Ethernet 10Mbps		*/
#define	ARPHRD_EETHER	2		/* Experimental Ethernet	*/
#define	ARPHRD_AX25	3		/* AX.25 Level 2		*/
#define	ARPHRD_PRONET	4		/* PROnet token ring		*/
#define	ARPHRD_CHAOS	5		/* Chaosnet			*/
#define	ARPHRD_IEEE802	6		/* IEEE 802.2 Ethernet/TR/TB	*/
#define	ARPHRD_ARCNET	7		/* ARCnet			*/
#define	ARPHRD_HYPERCH	8		/* Hyperchannel			*/
#define	ARPHRD_LANSTAR	9		/* Lanstar			*/
#define	ARPHRD_AUTONET	10		/* Autonet Short Address	*/
#define	ARPHRD_LOCALTLK	11		/* Localtalk			*/
#define	ARPHRD_LOCALNET	12		/* LocalNet (IBM PCNet/Sytek LocalNET) */
#define	ARPHRD_ULTRALNK	13		/* Ultra link			*/
#define	ARPHRD_SMDS	14		/* SMDS				*/
#define ARPHRD_DLCI	15		/* Frame Relay DLCI		*/
#define ARPHRD_ATM	16		/* ATM				*/
#define ARPHRD_HDLC	17		/* HDLC				*/
#define ARPHRD_FIBREC	18		/* Fibre Channel		*/
#define ARPHRD_ATM2225	19		/* ATM (RFC 2225)		*/
#define ARPHRD_SERIAL	20		/* Serial Line			*/
#define ARPHRD_ATM2	21		/* ATM				*/
#define ARPHRD_MS188220	22		/* MIL-STD-188-220		*/
#define ARPHRD_METRICOM	23		/* Metricom STRIP		*/
#define ARPHRD_IEEE1394	24		/* IEEE 1394.1995		*/
#define ARPHRD_MAPOS	25		/* MAPOS			*/
#define ARPHRD_TWINAX	26		/* Twinaxial			*/
#define ARPHRD_EUI_64	27		/* EUI-64			*/
#define ARPHRD_HIPARP	28		/* HIPARP			*/
#define ARPHRD_IP_ARP_ISO_7816_3	29	/* IP and ARP over ISO 7816-3	*/
#define ARPHRD_ARPSEC			30	/* ARPSec			*/
#define ARPHRD_IPSEC_TUNNEL		31	/* IPsec tunnel			*/
#define ARPHRD_INFINIBAND		32	/* InfiniBand			*/
#define ARPHRD_TIA_102_PRJ_25_CAI	33	/* TIA-102 Project 25 CAI	*/
#define ARPHRD_WIEGAND_INTERFACE	34	/* Wiegand Interface		*/
#define ARPHRD_PURE_IP			35	/* Pure IP			*/
#define ARPHRD_HW_EXP1  36 /* RFC 5494					*/
#define ARPHRD_HFI 37 /* Tseng-Hui Lin				*/
#define ARPHRD_UNIFIED_BUS 38 /* Wei Pan			*/
#define ARPHRD_HW_EXP2 256  /* RFC 5494				*/
#define ARPHRD_ATHERNET 257 /* Geoffroy Gramaize	*/

/* Virtual ARP types for non ARP hardware used in Linux cooked mode. */
#define ARPHRD_IPGRE	778		/* GRE over IP */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* arptypes.h */
