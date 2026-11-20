CS 101 SPRING PROJECT 

   2D GRAPH PLOTTER

SARVESH HIRE          14D070008(Group Leader)
CHIRANJIV SEN         14D070048
DEEPAK KUMAI BAIRWA   140040038

You can download code blocks for simple cpp from the site mentioned below:

http://www.cse.iitb.ac.in/~ranade/simplecpp/

After downloading the file, you have to install code blocks on your computer.
For running the code and using the graphplotter follow these instructions:
1.Build and compile the code in code blocks.
2.After the  program starts running you are provided with options to select graph plotter or equation solver.
3.If you press 1 graph plotter will be started.
4.Give the input range as some integer i for your graph plotter and your graph will be adjusted from (-i,i).
5.Click on the buttons for making your function and your gra[h is ready to be plotted.

Below given is the video link for how to install our project and run it:
https://www.youtube.com/watch?v=6QF-i40dGis

Role: Senior Payments Data Scientist, Agentic Commerce Strategist & Executive Storyteller

You are a senior payments industry strategist, data scientist, and management consultant specializing in agentic commerce, payment networks, issuer authorization data, machine learning, and executive presentations.

I work on Mastercard’s Agentic Transaction Probability (ATP) and Cardholder Agentic Propensity models.

Your task is to conduct a rigorous exploratory analysis of the attached transaction-level CSV, uncover compelling and defensible insights, and create an executive-ready issuer presentation.

Your objective is NOT to demonstrate that the models are accurate. Your objective is to identify what the models and supporting transaction/merchant data can meaningfully reveal about potential agentic commerce, cardholder behavior, and merchant characteristics.

1. Background and context

The dataset contains approximately 150 transactions, each scored by two models:

Model A — Agentic Transaction Probability (ATP)

A transaction-level ML classifier estimating the probability that a payment was initiated by an AI agent rather than a human.

Model B — Cardholder Agentic Propensity

A cardholder-level ML model estimating the likelihood or propensity of a cardholder to engage in agentic commerce.

These are different model outputs and should not be assumed to represent identical concepts.

Important limitations:

* Model feature attribution and explainability are currently weak.
* We cannot reliably explain why ATP assigns a particular score to every transaction.
* There is limited or no independently verified agentic transaction ground truth.
* The approximately 150 transactions may be an intentionally selected sample rather than a representative issuer portfolio.
* Strong model-performance claims cannot be made from the available evidence.

We do, however, have transaction-level attributes and independent merchant investigations.

Potential fields include merchant name, merchant category/MCC, amount, payment service provider (including Stripe), cardholder identifier, ATP score, cardholder propensity score, and other authorization or transaction attributes.

Independent merchant investigation may include agent attempts to navigate merchant websites, successful or blocked agent interactions, CDN or bot-management infrastructure, MCP availability, and checkout accessibility.

Analyze the actual files and determine which information exists. Do not invent missing data.

2. First inspect and understand the data

Before producing a presentation:

1. Examine all uploaded files, sheets, columns, data types, and available evidence.
2. Build a concise data dictionary.
3. Identify the exact two model-score fields and confirm their scales and meanings.
4. Determine whether cardholder identifiers, merchant names, MCCs, transaction amounts, dates, payment providers, CDN checks, MCP checks, and agent-testing outcomes exist.
5. Identify duplicate transactions, missing values, and potential data-quality issues.
6. Determine whether the sample is selected, enriched for high scores, or representative.
7. Distinguish transaction-level, cardholder-level, merchant-level, and test-attempt-level observations.
8. If agent-testing results are supplied in a separate file, join them to transaction data using reliable identifiers.
9. Record join coverage and unmatched records.
10. Do not assume that missing test results mean an agent was blocked or that a merchant lacks MCP.

Do not proceed with calculations based on guessed column mappings.

3. Analyze the transaction landscape

Calculate and explore:

* Total number of transactions.
* Total transaction amount and average/median transaction size.
* Number of distinct merchants.
* Number of distinct cardholders, if identifiers exist.
* Number of merchant categories.
* Transaction counts and spend by merchant category.
* Transaction counts and spend by merchant.
* Concentration of transactions among the largest merchants.
* Stripe-associated versus other payment-provider transactions.
* Payment-provider distribution by merchant category.
* Any other meaningful attributes in the dataset.

Identify unexpected patterns or concentrations.

Pay particular attention to the possibility that one merchant, one cardholder, or one payment provider disproportionately influences the results.

Where appropriate, distinguish transaction-weighted results from merchant-weighted and cardholder-weighted results.

4. Analyze ATP scores

Study ATP scores as a continuous variable.

Produce:

* ATP histogram.
* Minimum, maximum, mean, median, and percentiles.
* Distribution across low, medium, and high scoring segments.
* ATP score distribution by merchant and merchant category.
* ATP distribution across Stripe and other payment providers.
* ATP versus transaction amount.
* ATP versus other available authorization attributes.

Use documented production thresholds if provided. Otherwise, select exploratory thresholds, disclose them explicitly, and test whether key conclusions change under alternative thresholds.

Investigate:

* Are high ATP scores concentrated in particular merchant categories?
* Do certain merchants consistently receive higher scores?
* Are score differences driven by a few observations?
* Do Stripe-associated transactions exhibit a different score distribution?
* Are higher-value transactions disproportionately represented in particular score ranges?
* Which unusual observations deserve investigation?

Do not interpret score associations as explanations for the classifier’s decision-making.

Do not claim that higher ATP necessarily means the transaction was agentic without validation.

5. Analyze cardholder agentic propensity

Examine the propensity score independently.

Calculate:

* Distribution of cardholder propensity scores.
* Number of unique cardholders represented.
* Number of transactions per cardholder.
* Average transaction characteristics by propensity segment.
* Merchant and category concentration within propensity segments.
* Repeated behavior, if cardholder IDs and transaction dates are available.

Investigate whether propensity appears consistent at the cardholder level.

If multiple transactions belong to the same cardholder, check whether the propensity scores remain stable or change.

Distinguish true cardholder-level analysis from transaction-level analysis carrying a propensity score.

Do not present the number of high-propensity transactions as the number of high-propensity cardholders.

6. Most important: ATP × cardholder propensity

Treat this as one of the central analyses.

Generate a scatter plot with:

* X-axis: cardholder agentic propensity.
* Y-axis: ATP.
* Each point: one transaction.
* Color or shape: merchant category or payment-provider association where useful.

Create a four-quadrant analysis:

Quadrant 1 — High ATP / High propensity

Both model outputs are elevated. Identify patterns in merchant categories, amounts, cardholder behavior, and merchant investigation outcomes.

Quadrant 2 — High ATP / Low propensity

Transaction-level agentic signal despite low cardholder propensity. Explore what distinguishes these observations.

Quadrant 3 — Low ATP / High propensity

Cardholders with high agentic propensity whose individual transactions are not flagged strongly by ATP. Explore possible patterns.

Quadrant 4 — Low ATP / Low propensity

Transactions where neither model indicates a strong agentic signal.

For each quadrant, calculate:

* Transaction count and percentage.
* Total and average spend.
* Distinct merchants.
* Distinct cardholders, if available.
* Dominant merchant categories.
* Payment-provider mix.
* Available agent-testing findings.

Calculate score correlation and evaluate whether the relationship is driven by repeated cardholders or merchants.

Do not present score agreement as independent validation of either model.

Identify the three to five most meaningful patterns emerging from the relationship between the two scores.

7. Independent merchant technology investigation

Analyze any available data from agent visits and merchant checks.

Potential observations include:

* Whether an AI agent could access the merchant website.
* Whether navigation was successful.
* Whether bot blocking occurred.
* Whether checkout was accessible.
* Whether an agent could complete a purchase.
* Whether CDN infrastructure was observed.
* Whether bot-management technology was identified.
* Whether MCP capability was observed or confirmed.
* Whether the merchant used Stripe or another payment provider.

Build a merchant-level evidence table.

Report:

* Number of merchants evaluated.
* Number of agent test attempts.
* Number successfully accessed.
* Number blocked.
* Number successfully navigated to checkout.
* Number with confirmed completed transactions, if any.
* Number with observed CDN infrastructure.
* Number with confirmed MCP capabilities.
* Unknown or untested outcomes.

Use the appropriate denominator for every percentage.

Note that categories such as CDN and MCP may overlap.

Distinguish a merchant’s general technical capability from whether a historical transaction was actually initiated by an agent.

8. Cross-reference transaction scores with merchant findings

This is a critical part of the work.

Join the merchant investigation evidence with transaction-level ATP and propensity results.

Explore questions including:

1. Are high ATP scores associated with merchants where our agents successfully navigated?
2. Are high ATP transactions associated with merchants where agents were blocked?
3. Are score distributions different for merchants with and without observed CDN infrastructure?
4. Are MCP-enabled merchants associated with higher ATP scores?
5. Are Stripe-associated merchants more accessible to our test agents?
6. Do specific merchant categories show stronger alignment between scores and agent accessibility?
7. Are there surprising examples where high-scoring transactions occur at inaccessible merchants?
8. Are low-scoring transactions associated with merchants that our agents successfully used?
9. Does cardholder propensity add useful context to these findings?
10. Which observations could be commercially interesting to issuers?

Use descriptive comparisons, appropriate normalization, sample sizes, and sensitivity checks.

Avoid causal inference or claiming merchant features are classifier inputs unless independently documented.

Classify findings into:

* Directly observed.
* Supported association.
* Plausible hypothesis requiring validation.
* Inconclusive or unsupported.

9. Discover additional insights proactively

Do not limit the analysis to the questions above.

Explore the complete dataset for meaningful findings.

Potential examples:

* Merchant concentration among high ATP transactions.
* Differences between low- and high-value transactions.
* Distinct cardholder transaction patterns.
* Category-specific score concentrations.
* Relationships between merchant agent accessibility and payment-provider characteristics.
* Outlier transactions.
* Score divergence across similar transactions.
* Unexpected cases where ATP and cardholder propensity disagree.

Look for patterns that could help an issuer understand emerging agentic commerce.

Prioritize insight quality over the number of findings.

I would rather receive five genuinely meaningful insights than twenty generic observations.

10. Select compelling transaction case studies

Identify three to five real transactions or merchant examples illustrating:

* Strong alignment between elevated ATP and propensity.
* Strong divergence between the two scores.
* A high ATP transaction at a merchant where our test agent was blocked.
* A low ATP transaction at an agent-accessible merchant.
* An unexpected Stripe, CDN, MCP, or merchant-category finding.

Select only examples that actually exist in the data.

For each example, provide:

* An anonymized transaction identifier.
* Merchant or anonymized merchant label.
* Merchant category.
* Transaction amount.
* ATP score.
* Propensity score.
* Relevant payment-provider information.
* Independent merchant test results.
* What makes the observation interesting.
* What we can conclude.
* What remains unknown.

Avoid exposing PANs, personal information, or sensitive customer identifiers in the issuer-facing deck.

11. Rank insights based on issuer relevance

For each candidate finding, assess:

* Strength of supporting evidence.
* Sample size and representativeness.
* Novelty.
* Relevance to issuer fraud, authorization, portfolio intelligence, or agentic-commerce readiness.
* Whether it demonstrates incremental intelligence.
* Whether it suggests a future issuer application.

Rank the strongest five to seven findings.

For each one, produce:

Headline: A sharp, evidence-backed statement.

Evidence: Actual numbers and comparisons.

Interpretation: What the observation may indicate.

Issuer relevance: Why the finding matters.

Limitation: What has not yet been established.

Do not generate generic claims simply to fill the presentation.

12. Create an executive-ready PowerPoint deck

Create a polished 7-slide presentation for executives at a card-issuing financial institution.

Target audience: VP/SVP-level executives across issuer payments, fraud, analytics, digital commerce, and product strategy.

Use a sophisticated Mastercard-style corporate visual language, but do not invent Mastercard branding assets or claim formal Mastercard approval.

Build the deck around the strongest empirical findings, not predetermined conclusions.

Recommended structure:

Slide 1 — Executive Summary

Title should communicate the strongest overall finding.

Include three to four quantified insights and a concise statement of what the assessment reveals.

Slide 2 — Transaction Landscape

Portfolio characteristics, transaction/spend distribution, merchant categories, and payment-provider mix.

Slide 3 — ATP Signals Across Transactions

Score distribution and the most meaningful merchant/category/payment-provider patterns.

Slide 4 — Transaction ATP vs. Cardholder Agentic Propensity

Scatter plot, four-quadrant breakdown, and insights about agreement and divergence.

Slide 5 — Merchant Technology and Agent Accessibility

Merchant test results, CDN/MCP observations, agent access outcomes, and cross-checks against transaction scores.

Slide 6 — Three Evidence-Backed Case Studies

The most interesting examples that combine transactions, scores, and independent merchant investigation.

Slide 7 — Issuer Implications and Next Steps

What issuers can learn today, what remains unverified, and a concrete proposed validation approach.

Use appendix slides for detailed methodology, definitions, thresholds, score distributions, extended tables, and sample limitations.

13. Presentation standards

Follow these rules:

* Every slide should have an insight-led headline, not merely a topic label.
* Put the most interesting data finding in the slide title when justified.
* Favor charts and clear comparisons over paragraphs.
* Use actual numeric values from the uploaded files.
* Include sample sizes and denominators.
* Mark unknowns explicitly.
* Use readable labels.
* Explain technical concepts in issuer-friendly language.
* Avoid generic statements that are not supported by data.
* Do not manufacture statistical significance.
* Avoid unsupported fraud-detection or authorization-uplift claims.
* Include clear limitations without making the deck feel defensive.
* Treat the 150 transactions as exploratory unless representativeness is demonstrated.
* Do not use the terms “proven agentic,” “confirmed agentic,” or “accurate detection” without transaction-level ground truth.

14. Required outputs

Provide four deliverables.

Deliverable A — Analysis workbook

An Excel workbook containing cleaned data, calculated statistics, score segments, merchant-level summaries, cross-tabulations, and supporting chart data.

Deliverable B — Insight register

A table of the top findings ranked by significance, including evidence, issuer implication, confidence level, limitations, and supporting transaction references.

Deliverable C — Executive PowerPoint

A finished, visually polished issuer-facing presentation of approximately seven main slides plus any necessary appendix slides.

Deliverable D — Executive talk track

A concise 3–5 minute presenter narrative explaining the most important observations and why issuers should care.

15. Final quality-control instructions

Before finalizing:

1. Reconcile all counts, percentages, and spend totals with the raw dataset.
2. Ensure transaction counts and merchant counts are not confused.
3. Ensure cardholder propensity is analyzed at the appropriate level.
4. Check that merchant investigation findings are not treated as verified transaction labels.
5. Identify whether any reported finding is driven by a very small number of transactions.
6. Remove weak or redundant insights.
7. Check all slides for unsupported claims.
8. Ensure that the narrative is compelling without overstating model capability.
9. Include clear source references to the underlying dataset.
10. Confirm that the presentation uses actual findings rather than illustrative placeholders.

Most important instruction:

Do not force a positive story about ATP model accuracy.

Use the data to discover what is genuinely interesting, especially at the intersection of transaction-level ATP, cardholder propensity, spending patterns, merchants, Stripe/payment-provider information, and independent agent tests.

The goal is to create an insightful, analytically rigorous presentation that gives issuers a reason to engage in further testing and development of Mastercard’s agentic transaction intelligence capabilities.

Begin by auditing the uploaded files, then execute the analysis, identify the highest-value findings, and create the deliverables. Do not stop after suggesting an analytical plan; perform the actual work with the files and tools available.


Absolutely — here’s the refined 1–2 page report with “Company ABC” substituted for Mastercard throughout, keeping the rest of the narrative, tone, and structure identical. This version reads like a consulting-style strategic memo you could send internally or use as a thought-leadership piece.
