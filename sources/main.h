/*
* Creative Commons Legal Code
*
* CC0 1.0 Universal All rights reserved Timo Sarkar 2021
*
*    CREATIVE COMMONS CORPORATION IS NOT A LAW FIRM AND DOES NOT PROVIDE
*    LEGAL SERVICES. DISTRIBUTION OF THIS DOCUMENT DOES NOT CREATE AN
*    ATTORNEY-CLIENT RELATIONSHIP. CREATIVE COMMONS PROVIDES THIS
*    INFORMATION ON AN "AS-IS" BASIS. CREATIVE COMMONS MAKES NO WARRANTIES
*    REGARDING THE USE OF THIS DOCUMENT OR THE INFORMATION OR WORKS
*    PROVIDED HEREUNDER, AND DISCLAIMS LIABILITY FOR DAMAGES RESULTING FROM
*    THE USE OF THIS DOCUMENT OR THE INFORMATION OR WORKS PROVIDED
*    HEREUNDER.
*
* Statement of Purpose
*
* The laws of most jurisdictions throughout the world automatically confer
* exclusive Copyright and Related Rights (defined below) upon the creator
* and subsequent owner(s) (each and all, an "owner") of an original work of
* authorship and/or a database (each, a "Work").
*
* Certain owners wish to permanently relinquish those rights to a Work for
* the purpose of contributing to a commons of creative, cultural and
* scientific works ("Commons") that the public can reliably and without fear
* of later claims of infringement build upon, modify, incorporate in other
* works, reuse and redistribute as freely as possible in any form whatsoever
* and for any purposes, including without limitation commercial purposes.
* These owners may contribute to the Commons to promote the ideal of a free
* culture and the further production of creative, cultural and scientific
* works, or to gain reputation or greater distribution for their Work in
* part through the use and efforts of others.
*
* For these and/or other purposes and motivations, and without any
* expectation of additional consideration or compensation, the person
* associating CC0 with a Work (the "Affirmer"), to the extent that he or she
* is an owner of Copyright and Related Rights in the Work, voluntarily
* elects to apply CC0 to the Work and publicly distribute the Work under its
* terms, with knowledge of his or her Copyright and Related Rights in the
* Work and the meaning and intended legal effect of CC0 on those rights.
*
* 1. Copyright and Related Rights. A Work made available under CC0 may be
* protected by copyright and related or neighboring rights ("Copyright and
* Related Rights"). Copyright and Related Rights include, but are not
* limited to, the following:
*
*   i. the right to reproduce, adapt, distribute, perform, display,
*      communicate, and translate a Work;
*  ii. moral rights retained by the original author(s) and/or performer(s);
* iii. publicity and privacy rights pertaining to a person's image or
*      likeness depicted in a Work;
*  iv. rights protecting against unfair competition in regards to a Work,
*      subject to the limitations in paragraph 4(a), below;
*   v. rights protecting the extraction, dissemination, use and reuse of data
*      in a Work;
*  vi. database rights (such as those arising under Directive 96/9/EC of the
*      European Parliament and of the Council of 11 March 1996 on the legal
*      protection of databases, and under any national implementation
*      thereof, including any amended or successor version of such
*      directive); and
* vii. other similar, equivalent or corresponding rights throughout the
*      world based on applicable law or treaty, and any national
*      implementations thereof.
*
* 2. Waiver. To the greatest extent permitted by, but not in contravention
* of, applicable law, Affirmer hereby overtly, fully, permanently,
* irrevocably and unconditionally waives, abandons, and surrenders all of
* Affirmer's Copyright and Related Rights and associated claims and causes
* of action, whether now known or unknown (including existing as well as
* future claims and causes of action), in the Work (i) in all territories
* worldwide, (ii) for the maximum duration provided by applicable law or
* treaty (including future time extensions), (iii) in any current or future
* medium and for any number of copies, and (iv) for any purpose whatsoever,
* including without limitation commercial, advertising or promotional
* purposes (the "Waiver"). Affirmer makes the Waiver for the benefit of each
* member of the public at large and to the detriment of Affirmer's heirs and
* successors, fully intending that such Waiver shall not be subject to
* revocation, rescission, cancellation, termination, or any other legal or
* equitable action to disrupt the quiet enjoyment of the Work by the public
* as contemplated by Affirmer's express Statement of Purpose.
*
* 3. Public License Fallback. Should any part of the Waiver for any reason
* be judged legally invalid or ineffective under applicable law, then the
* Waiver shall be preserved to the maximum extent permitted taking into
* account Affirmer's express Statement of Purpose. In addition, to the
* extent the Waiver is so judged Affirmer hereby grants to each affected
* person a royalty-free, non transferable, non sublicensable, non exclusive,
* irrevocable and unconditional license to exercise Affirmer's Copyright and
* Related Rights in the Work (i) in all territories worldwide, (ii) for the
* maximum duration provided by applicable law or treaty (including future
* time extensions), (iii) in any current or future medium and for any number
* of copies, and (iv) for any purpose whatsoever, including without
* limitation commercial, advertising or promotional purposes (the
* "License"). The License shall be deemed effective as of the date CC0 was
* applied by Affirmer to the Work. Should any part of the License for any
* reason be judged legally invalid or ineffective under applicable law, such
* partial invalidity or ineffectiveness shall not invalidate the remainder
* of the License, and in such case Affirmer hereby affirms that he or she
* will not (i) exercise any of his or her remaining Copyright and Related
* Rights in the Work or (ii) assert any associated claims and causes of
* action with respect to the Work, in either case contrary to Affirmer's
* express Statement of Purpose.
*
* 4. Limitations and Disclaimers.
*
* a. No trademark or patent rights held by Affirmer are waived, abandoned,
*    surrendered, licensed or otherwise affected by this document.
* b. Affirmer offers the Work as-is and makes no representations or
*    warranties of any kind concerning the Work, express, implied,
*    statutory or otherwise, including without limitation warranties of
*    title, merchantability, fitness for a particular purpose, non
*    infringement, or the absence of latent or other defects, accuracy, or
*    the present or absence of errors, whether or not discoverable, all to
*    the greatest extent permissible under applicable law.
* c. Affirmer disclaims responsibility for clearing rights of other persons
*    that may apply to the Work or any use thereof, including without
*    limitation any person's Copyright and Related Rights in the Work.
*    Further, Affirmer disclaims responsibility for obtaining any necessary
*    consents, permissions or other rights required for any use of the
*    Work.
* d. Affirmer understands and acknowledges that Creative Commons is not a
*    party to this document and has no duty or obligation with respect to
*    this CC0 or use of the Work.
*/

#ifndef KIMONO_MAIN_H
#define KIMONO_MAIN_H

#include <list>

/** define our values */
class CWallet;
class CBlock;
class CBlockIndex;
class CKeyItem;
class CReserveKey;
/** Define client based values */
class CAddress;
class CInv;
class CNode;

struct CBlockIndexWorkComparator;

/** Preload node/peer confs for Kimono partially taken from Bitcoin */
/** The maximum allowed size for a serialized block, in bytes (network rule) */
static const unsigned int MAX_BLOCK_SIZE = 1000000;
/** Obsolete: maximum size for mined blocks */
static const unsigned int MAX_BLOCK_SIZE_GEN = MAX_BLOCK_SIZE/4;
/** Default for -blockmaxsize, maximum size for mined blocks **/
static const unsigned int DEFAULT_BLOCK_MAX_SIZE = 250000;
/** Default for -blockprioritysize, maximum space for zero/low-fee transactions **/
static const unsigned int DEFAULT_BLOCK_PRIORITY_SIZE = 17000;
/** The maximum size for transactions we're willing to relay/mine */
static const unsigned int MAX_STANDARD_TX_SIZE = 100000;
/** The maximum allowed number of signature check operations in a block (network rule) */
static const unsigned int MAX_BLOCK_SIGOPS = MAX_BLOCK_SIZE/50;
/** Default for -maxorphantx, maximum number of orphan transactions kept in memory */
static const unsigned int DEFAULT_MAX_ORPHAN_TRANSACTIONS = 25;
/** The maximum size of a blk?????.dat file (since 0.8) */
static const unsigned int MAX_BLOCKFILE_SIZE = 0x8000000; // 128 MiB
/** The pre-allocation chunk size for blk?????.dat files (since 0.8) */
static const unsigned int BLOCKFILE_CHUNK_SIZE = 0x1000000; // 16 MiB
/** The pre-allocation chunk size for rev?????.dat files (since 0.8) */
static const unsigned int UNDOFILE_CHUNK_SIZE = 0x100000; // 1 MiB
/** Fake height value used in CCoins to signify they are only in the memory pool (since 0.8) */
static const unsigned int MEMPOOL_HEIGHT = 0x7FFFFFFF;
/** Dust Soft Limit, allowed with additional fee per output */
static const int64 DUST_SOFT_LIMIT = 100000; // 0.001 MIND
/** Dust Hard Limit, ignored as wallet inputs (mininput default) */
static const int64 DUST_HARD_LIMIT = 1000;   // 0.00001 MIND mininput
/** No amount larger than this is valid */
static const int64 MAX_MONEY = 350000 * COIN;
inline bool MoneyRange(int64 nValue) { return (nValue >= 0 && nValue <= MAX_MONEY); }
/** Coinbase transaction outputs can only be spent after this number of new blocks (network rule) */
static const int COINBASE_MATURITY = 100;
/** Threshold for nLockTime: below this value it is interpreted as block number, otherwise as UNIX timestamp. */
static const unsigned int LOCKTIME_THRESHOLD = 500000000; // Tue Nov  5 00:53:20 1985 UTC
/** Maximum number of script-checking threads allowed */
static const int MAX_SCRIPTCHECK_THREADS = 16;
#ifdef USE_UPNP
static const int fHaveUPnP = true;
#else
static const int fHaveUPnP = false;
#endif

extern CScript COINBASE_FLAGS;

extern CCriticalSection cs_main;
extern std::map<uint256, CBlockIndex*> mapBlockIndex;
extern std::set<CBlockIndex*, CBlockIndexWorkComparator> setBlockIndexValid;
extern uint256 hashGenesisBlock;
extern CBlockIndex* pindexGenesisBlock;
extern int nBestHeight;
extern uint256 nBestChainWork;
extern uint256 nBestInvalidWork;
extern uint256 hashBestChain;
extern CBlockIndex* pindexBest;
extern unsigned int nTransactionsUpdated;
extern uint64 nLastBlockTx;
extern uint64 nLastBlockSize;
extern const std::string strMessageMagic;
extern double dHashesPerSec;
extern int64 nHPSTimerStart;
extern int64 nTimeBestReceived;
extern CCriticalSection cs_setpwalletRegistered;
extern std::set<CWallet*> setpwalletRegistered;
extern unsigned char pchMessageStart[4];
extern bool fImporting;
extern bool fReindex;
extern bool fBenchmark;
extern int nScriptCheckThreads;
extern bool fTxIndex;
extern unsigned int nCoinCacheSize;

// Settings
extern int64 nTransactionFee;
extern int64 nMinimumInputValue;

// Minimum disk space required - used in CheckDiskSpace()
static const uint64 nMinDiskSpace = 52428800;


class CReserveKey;
class CCoinsDB;
class CBlockTreeDB;
struct CDiskBlockPos;
class CCoins;
class CTxUndo;
class CCoinsView;
class CCoinsViewCache;
class CScriptCheck;
class CValidationState;

struct CBlockTemplate;

/** Register a wallet to receive updates from core */
void RegisterWallet(CWallet* pwalletIn);
/** Unregister a wallet from core */
void UnregisterWallet(CWallet* pwalletIn);
/** Push an updated transaction to all registered wallets */
void SyncWithWallets(const uint256 &hash, const CTransaction& tx, const CBlock* pblock = NULL, bool fUpdate = false);
/** Process an incoming block */
bool ProcessBlock(CValidationState &state, CNode* pfrom, CBlock* pblock, CDiskBlockPos *dbp = NULL);
/** Check whether enough disk space is available for an incoming block */
bool CheckDiskSpace(uint64 nAdditionalBytes = 0);
/** Open a block file (blk?????.dat) */
FILE* OpenBlockFile(const CDiskBlockPos &pos, bool fReadOnly = false);
/** Open an undo file (rev?????.dat) */
FILE* OpenUndoFile(const CDiskBlockPos &pos, bool fReadOnly = false);
/** Import blocks from an external file */
bool LoadExternalBlockFile(FILE* fileIn, CDiskBlockPos *dbp = NULL);
/** Initialize a new block tree database + block data on disk */
bool InitBlockIndex();
/** Load the block tree and coins database from disk */
bool LoadBlockIndex();
/** Unload database information */
void UnloadBlockIndex();
/** Verify consistency of the block and coin databases */
bool VerifyDB(int nCheckLevel, int nCheckDepth);
/** Print the loaded block tree */
void PrintBlockTree();
/** Find a block by height in the currently-connected chain */
CBlockIndex* FindBlockByHeight(int nHeight);
/** Process protocol messages received from a given node */
bool ProcessMessages(CNode* pfrom);
/** Send queued protocol messages to be sent to a give node */
bool SendMessages(CNode* pto, bool fSendTrickle);
/** Run an instance of the script checking thread */
void ThreadScriptCheck();
/** Run the miner threads */
void GenerateBitcoins(bool fGenerate, CWallet* pwallet);
/** Generate a new block, without valid proof-of-work */
CBlockTemplate* CreateNewBlock(const CScript& scriptPubKeyIn);
CBlockTemplate* CreateNewBlockWithKey(CReserveKey& reservekey);
/** Modify the extranonce in a block */
void IncrementExtraNonce(CBlock* pblock, CBlockIndex* pindexPrev, unsigned int& nExtraNonce);
/** Do mining precalculation */
void FormatHashBuffers(CBlock* pblock, char* pmidstate, char* pdata, char* phash1);
/** Check mined block */
bool CheckWork(CBlock* pblock, CWallet& wallet, CReserveKey& reservekey);
/** Check whether a block hash satisfies the proof-of-work requirement specified by nBits */
bool CheckProofOfWork(uint256 hash, unsigned int nBits);
/** Calculate the minimum amount of work a received block needs, without knowing its direct parent */
unsigned int ComputeMinWork(unsigned int nBase, int64 nTime);
/** Get the number of active peers */
int GetNumBlocksOfPeers();
/** Check whether we are doing an initial block download (synchronizing from disk or network) */
bool IsInitialBlockDownload();
/** Format a string that describes several potential problems detected by the core */
std::string GetWarnings(std::string strFor);
/** Retrieve a transaction (from memory pool, or from disk, if possible) */
bool GetTransaction(const uint256 &hash, CTransaction &tx, uint256 &hashBlock, bool fAllowSlow = false);
/** Connect/disconnect blocks until pindexNew is the new tip of the active block chain */
bool SetBestChain(CValidationState &state, CBlockIndex* pindexNew);
/** Find the best known block, and make it the tip of the block chain */
bool ConnectBestBlock(CValidationState &state);
/** Create a new block index entry for a given block hash */
CBlockIndex * InsertBlockIndex(uint256 hash);
/** Verify a signature */
bool VerifySignature(const CCoins& txFrom, const CTransaction& txTo, unsigned int nIn, unsigned int flags, int nHashType);
/** Abort with a message */
bool AbortNode(const std::string &msg);

#endif
